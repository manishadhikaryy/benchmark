CC = gcc
SRCS = floatBenchmark.c harddrive_one.c harddrive_two.c integerBenchmark.c memory.c
all: my_program

my_program: $(SRCS)
	$(CC) $^ -o $@

run_float_benchmark: floatBenchmark.c
	$(CC) $< -o floatBenchmark
	./floatBenchmark

