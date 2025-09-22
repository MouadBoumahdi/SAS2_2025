#include <stdio.h>

void main() {
    double km,yards;
    
    printf("donner la distance en km: ");
    scanf("%lf", &km);
    
    yards = km * 1093.61;
    
    printf("%.2f",yards);
}