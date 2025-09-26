// Online C compiler to run C program online
#include <stdio.h>

struct personne{
        char nom[10];
        char prenom[10];
        int age;
    };

int main() {
    
    struct personne p = {"boumahdi","mouad",10};
    printf("Nom : %s,prenom : %s,age : %d",p.nom,p.prenom,p.age);
    return 0;   
}