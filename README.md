# stepanov-lectures
My solutions to Alexander Stepanov lectures at A9

My solution for lecture 20 of the Efficient Programming with Components course.
https://www.youtube.com/playlist?list=PLHxtyCq_WDLXryyw91lahwdtpZsmo4BGD

It's noticeably faster than the submissions of the Amazon employees taking the course for both small and large sets.

Results:

       size      std::sort    stable     merge    1_64th        ph    akraft      bert   rjernst      MINE
           8             5         4        35        10        18        17        17         6         4
          16             6         6        31        21        14        19        14         9         6
          32             8         7        31        33        13        18        12         9         6
          64             9        10        30        44        13        17        14        14        10
         128            11        12        32        54        15        18        15        16        11
         256            14        13        39        57        18        21        18        18        15
         512            17        18        49        65        25        31        25        26        24
        1024            29        28        57        65        30        42        31        33        31
        2048            41        37        65        67        40        52        40        39        36
        4096            46        41        69        66        44        56        44        45        41
        8192            51        46        73        67        49        61        49        50        45
       16384            56        52        82        71        56        68        55        54        52
       32768            63        57        89        76        62        74        60        59        55
       65536            66        60        87        79        63        75        65        64        59
      131072            70        65        93        84        69        81        69        68        64
      262144            77        73        99        93        73        86        74        74        70
      524288            79        76       103        93        78        90        78        81        78
     1048576            85        83       111       102        83        95        84        83        80
     2097152            88        85       112       103        88        99        88        88        84
