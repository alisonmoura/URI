#include <stdio.h>

int main(){

  float duration, speed, fuel, performance = 12;

  scanf("%f", &duration);
  scanf("%f", &speed);

  fuel = duration*speed/performance;

  printf("%.3f\n", fuel);

  return 0;
}