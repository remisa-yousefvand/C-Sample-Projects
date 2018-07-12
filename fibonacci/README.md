# Fibonacci

## Compile

```bash
gcc fibonacci.c -o fib -lm
```

## Usage

Run the program without switch for calculating the first N items.

```bash
./fib N
```

This will print up to Nth Fibonacci numbers.

## Switches

### --help

For more information use `--help`.

### -r

Calculates Nth item recursively.

```bash
./fib -r N
```

### -b

Calculates Nth item using Benit's formula.

```bash
./fib -b N
```
