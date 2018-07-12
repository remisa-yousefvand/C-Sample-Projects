#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


typedef long long ll;
#define G (1 + sqrt(5)) / 2
#define T (1 - sqrt(5)) / 2

void usage();
void fib(ll);
ll fiboBinet(ll);
ll fibRecursive (ll);

int main(int argc, char const *argv[])
{
  if(argc == 3) {
    if (strcmp(argv[1], "-r") == 0) {
      ll n = atoll(argv[2]);
      printf("%lld\n", fibRecursive(n));
    } else if ((strcmp(argv[1], "-b") == 0)) {
      ll n = atoll(argv[2]);
      printf("%lld\n", fiboBinet(n));
    } else {
      usage();
    }
  } else if (argc == 2) {
    if (strcmp(argv[1], "--help") == 0) {
      usage();
    } else {
      ll n = atoll(argv[1]);
      fib(n);
    }
  } else {
    usage();
  }
  return 0;
}

void usage() {
  printf("usage: fib [option] n\n\t-r\tUse recursive method.\n");
  printf("\t-b\tUse Benit's formula.\n");
  printf("\t--help\tPrints this help.\n");
}

ll fibRecursive (ll n) {
  return ( n < 3) ? 1 : fibRecursive (n -1) + fibRecursive (n - 2);
}

void fib(ll n) {
  ll a = 1;
  ll b = 1;
  ll c;

  printf("1\n1\n");
  for (ll i = 2; i <= n; i++) {
    c = a + b;
    printf("%lld\n", c);
    a = b;
    b = c;
  }
}

ll fiboBinet(ll n) {
  return (ll)((pow(G, n) - pow(T, n)) / sqrt(5));
}