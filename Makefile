all: primes fibo
fibo: ./fibonacci/fibonacci.c
	mkdir ./build -p && gcc ./fibonacci/fibonacci.c -o ./build/fibo -lm
primes: ./primes/primes.c
	mkdir ./build -p && gcc ./primes/primes.c -o ./build/primes
clean:
	rm -rf ./build