
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  float a, b, c;
  scanf("%f", &a);
  scanf("%f", &b);
  c = powl(a, b);
  printf("%1.5f\n", c);
  return 0;
}
