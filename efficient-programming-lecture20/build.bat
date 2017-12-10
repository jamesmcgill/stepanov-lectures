@echo off
set BASE_PATH=%~dp0
set BUILD_PATH=%BASE_PATH%build\
set SRC_PATH=%BASE_PATH%

IF NOT EXIST %BUILD_PATH% GOTO NOBUILDDIR
rmdir /S /Q %BUILD_PATH%
:NOBUILDDIR

IF NOT EXIST %BUILD_PATH% mkdir %BUILD_PATH%
pushd %BUILD_PATH%

cl @%BASE_PATH%build.settings %SRC_PATH%test_sort.cpp
popd

echo "Done!"
