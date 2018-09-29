#include <stdio.h>

int main(){

  int value;
  int notes100 = 0;
  int notes50 = 0;
  int notes20 = 0;
  int notes10 = 0;
  int notes5 = 0;
  int notes2 = 0;
  int notes1 = 0;

  scanf("%d", &value);

  if(value >= 0) notes100 = value/100;
  value = value-100*notes100;
  
  if(value >= 0) notes50 = value/50;
  value = value-50*notes50;
  
  if(value >= 0) notes20 = value/20;
  value = value-20*notes20;
  
  if(value >= 0) notes10 = value/10;
  value = value-10*notes10;
  
  if(value >= 0) notes5 = value/5;
  value = value-5*notes5;
  
  if(value >= 0) notes2 = value/2;
  value = value-2*notes2;
  
  if(value >= 0) notes1 = value/1;
  value = value-1*notes1;
  
  printf("%d\n", value);
  printf("%d nota(s) de R$ 100,00\n", notes100);
  printf("%d nota(s) de R$ 50,00\n", notes50);
  printf("%d nota(s) de R$ 20,00\n", notes20);
  printf("%d nota(s) de R$ 10,00\n", notes10);
  printf("%d nota(s) de R$ 5,00\n", notes5);
  printf("%d nota(s) de R$ 2,00\n", notes2);
  printf("%d nota(s) de R$ 1,00\n", notes1);
  
  return 0;
}