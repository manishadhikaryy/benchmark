# Benchmark Program

This is a benchmark program designed to evaluate the performance of various algorithms and data structures. The program includes benchmarks for floating-point operations, hard drive access, integer operations, and memory management.

## Prerequisites

- GCC (GNU Compiler Collection) installed on your system.

## How to Run

1. Navigate to the project directory:

2. Run the individual benchmarks using the following commands:

    ```bash
    make run_float_benchmark
    make run_harddrive_one
    make run_harddrive_two
    make run_integer_benchmark
    make run_memory
    ```

3. After running the benchmarks, you can clean up the generated files using:

    ```bash
    make clean
    ```

### Alternatively Compiling and Running with gcc

If the above method didn't work, you can compile and run the program using `gcc` directly:

1. Navigate to the project directory.

2. Compile and run the program using the following commands:

    ```bash
    gcc floatBenchmark.c -o my_program
    ./my_program

    gcc harddrive_one.c -o my_program
    ./my_program

    gcc harddrive_two.c -o my_program
    ./my_program

    gcc integerBenchmark.c -o my_program
    ./my_program

    gcc memory.c -o my_program
    ./my_program
    ```
