#include <stdlib.h>
#include <stdio.h>

float add(float x,float y);
float sub(float x,float y);
float mult(float x,float y);
float divide(float x,float y);

int main()
{
  float x, y, result, resul, resu, res;
  char z;
  printf("Arithmetic operator / Or ? to quit: \n");
  scanf("%c", &z);
  printf("Print two numbers \n");
  scanf("%f %f", &x, &y);
  if (z == '+')
  {
    result = add(x, y);
    printf("%f", result);
    main();
  }
  else if (z == '-')
  {
    resul = sub(x, y);
    printf("%f", resul);
    main();
  }
  else if (z == '*')
  {
    resu = mult(x, y);
    printf("%f", resu);
    main();
  }
  else if (z == '/')
  {
    res = divide(x, y);
    printf("%f", res);
    main();
  }
  else if (z == '?')
  {
    exit(0);
  }
  else
  {
    printf("Please print something!");
    main();
  }
}

float add(float x, float y)
{
  return x + y;
}

float sub(float x, float y)
{
  return x - y;
}

float mult(float x, float y)
{
  return x * y;
}

float divide(float x, float y)
{
  if (y != 0)
  {
    return x / y;
  }
  else
  {
    printf("Infinity and does not divide by zero! \n");
    exit(-1);
  }
}
