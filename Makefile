CC = gcc
SRCS = floatBenchmark.c harddrive_one.c harddrive_two.c integerBenchmark.c memory.c
all: my_program

my_program: $(SRCS)
	$(CC) $^ -o $@

run_float_benchmark: floatBenchmark.c
	$(CC) $< -o floatBenchmark
	./floatBenchmark

run_harddrive_one: harddrive_one.c
	$(CC) $< -o harddrive_one
	./harddrive_one

run_harddrive_two: harddrive_two.c
	$(CC) $< -o harddrive_two
	./harddrive_two

run_integer_benchmark: integerBenchmark.c
	$(CC) $< -o integerBenchmark
	./integerBenchmark

run_memory: memory.c
	$(CC) $< -o memory
	./memory

clean: