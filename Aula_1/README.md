# Build Instructions

## GCC puro
```bash
$ cd gcc
$ gcc -O0 main.c -o main.bin
$ ./main.bin
```

## Makefile
```bash
$ cd make
$ make
$ ./main.bin
```

## CMake
```bash
$ cd cmake
$ mkdir build
$ cd build
$ cmake ..
$ make
$ ./main.bin
```