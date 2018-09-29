#include <stdio.h>

int main(int argc, char **argv){

  float A, R, n = 3.14159;
  scanf("%f", &R);
  A = n*R*R;

  printf("A=%.4f\n", A);

  return 0;
}