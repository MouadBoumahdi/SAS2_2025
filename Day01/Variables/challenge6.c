#include <stdio.h>

void main() {
  double a,b;
  printf("donner a; ");
  scanf("%lf",&a);
  printf("donner b; ");
  scanf("%lf",&b);
  
  double addition = a+b;
  double supression = a-b;
  double multiplication = a*b;
  double division ;
  if(b>0){
    division= a/b;
  };
  
  printf("addition : %.2f,supression: %.2f,multiplication : %.2f, division : %.2f",addition,supression,multiplication,division);
}