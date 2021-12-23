#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x;
  float y;
  char z;
  printf("Enter an arithmetic operator ( or 1 to quit): \n");
  scanf("%c", &z);
  if(z == '+')
  {
    goto add;
  }
  else if(z == '-')
  {
    goto sub;
  }
  else if(z == '*')
  {
    goto mult;
  }
  else if(z == '/')
  {
    goto div;
  }
  else if(z == 1)
  {
    exit(0);
  }
  else
  {
    printf("Error! No arithmetic operator! \n");
    exit(-1);
  }
  add:
  printf("Enter two numbers: \n");
  scanf("%f %f", &x, &y);
  printf("%f", x + y);
  sub:
  printf("Enter two numbers: \n");
  scanf("%f %f", &x, &y);
  printf("%f", x - y);
  mult:
  printf("Enter two numbers: \n");
  scanf("%f %f", &x, &y);
  printf("%f", x * y);
  div:
  printf("Enter two numbers: \n");
  scanf("%f %f", &x, &y);
  if (y != 0)
  {
    printf("%f", x / y);
  }
  else
  {
    goto err;
  }
  err:
  printf("Error! Division by zero causes infinity!");
  exit(-1);
}
