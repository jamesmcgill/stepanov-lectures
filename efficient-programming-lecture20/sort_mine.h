#ifndef SORT_MINE_H
#define SORT_MINE_H

#include "insertion_sort.h"
#include <iostream>

static const size_t BINARY_CUTTOFF = 64;

template <typename I, typename N, typename R, typename B>
// I is ForwardIterator
// N is Integral
// R is WeakStrictOrdering on the value type of I 
I sort_mine_n(I first, N n, R r, B buffer, N buffer_size) {
  if (!n) return first;
  if (n < BINARY_CUTTOFF) return linear_insertion_sort_n(first, n, r);
  N half = n >> 1;
  if (!half) return ++first;
  I middle = sort_mine_n(first, half, r, buffer, buffer_size);
  I last   = sort_mine_n(middle, n - half, r, buffer, buffer_size);
  merge_adaptive_n(first, half, middle, n - half, r, buffer, buffer_size);
  return last;	
}

template <typename I>
// I is ForwardIterator
inline
void sort_mine(I first, I last) {
	typedef typename std::iterator_traits<I>::difference_type N;
	typedef typename std::iterator_traits<I>::value_type T;
	N n = std::distance(first, last);

	if (n < BINARY_CUTTOFF) {
		linear_insertion_sort_n(first, n, std::less<T>());
		return;
	}
	
	std::vector<T> buffer(n >> 1);
	sort_mine_n(first, n, std::less<T>(), buffer.begin(), N(buffer.size()));
}

#endif