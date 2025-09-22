// Online C compiler to run C program online
#include <stdio.h>

void main() {
  int Celsius;
  printf("la temperature en C : ");
  scanf("%d",&Celsius);
  
  if(Celsius<0){
      printf("Solide");
  }else if(Celsius >= 0 && Celsius < 100){
      printf("Liquide");
  }else{
      printf("Gaz");
  }
}