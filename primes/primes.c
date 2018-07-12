#include <stdio.h>
#include <stdlib.h>

typedef long long ll;

void usage();
int isPrime(ll);

int main(int argc, char const *argv[])
{
  if (argc != 2) {
    usage();
    return 0;
  }
  ll n = atoll(argv[1]);
    for (int i = 2; i < n; i++) {
    if (isPrime(i)) {
      printf("%i\n", i);
    }
  }
  return 0;
}

int isPrime(ll n) {
  for (int i = 2; (i < n/2); i++) {
    if ((n % i) == 0) {
      return 0;
    }
  }
  return 1;
}

void usage() {
  printf("usage: ./primes N\nPrint prime numbers up to N.\n");
}
