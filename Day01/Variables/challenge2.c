#include <stdio.h>

int main() {
    double K,C;
    printf("donner la temperature en Celsius: ");
    scanf("%lf",&C);
    
    K = C + 273.15;
    printf("%lf",K);
    
    return 0;
    
}
