#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char C[30];

    printf("entrer un mot : ");
    scanf("%[^\n]",C);

    for (int i = 0 ; i < strlen(C) ; i++){

        if (C[i]>='a' && C[i]<= 'z' ){
            C[i]=C[i]-32;
        }
    }
    printf("%s",C);

    return 0;
}