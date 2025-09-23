// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d,",&b);
   scanf("%d,",&c);
   
   int moyennegeometrique = (a * b * c)^(1/3);
   
   
   printf("%d",moyennegeometrique);
}