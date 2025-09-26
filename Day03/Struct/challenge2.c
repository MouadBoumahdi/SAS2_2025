#include <stdio.h>

struct personne{
        char nom[10];
        char prenom[10];
        int note[2];
    };

int main() {
    
    struct personne p = {"boumahdi","mouad",{20,19}};
    printf("Nom : %s,prenom : %s",p.nom,p.prenom);
    printf("les notes: ");
    for(int i = 0;i<2;i++){
        printf("%d, ",p.note[i]);
    }
    return 0;   
}