#include <stdio.h>

int main()
{
  int principal = 10000, rate = 15, years = 1;
  int SI = (principal * rate * years) / 100;
  printf("SI= %d", SI);
  return 0;
}