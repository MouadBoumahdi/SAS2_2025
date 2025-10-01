#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_ANIMALS 200

int index_global=0;


// typedef bach tdir wahd smiya lstruct "Animal" fi blasst struct 
// fi typedef--> Animal a;
// fi struct -->struct Animal a;
typedef struct {
    int id;
    char nom[20];
    char espece[20];
    int age;
    char habitat[20];
    float poids;
} Animal;
// hada wahd variable A type dyal howa struct "ANIMAL"
Animal A[MAX_ANIMALS];














void stock_data();
int menu();
void ajouterAnimal();
void afficherAnimaux();
void modifierAnimal();
void supprimerAnimal();
void chercherAnimal();
void statistiques();











void stock_data() {
    Animal temp[] = {
        {1, "lion", "mammal", 5, "savannah", 190.5},
        {2, "tiger", "mammal", 3, "forest", 220.0},
        {3, "bear", "mammal", 4, "mountains", 300.0},
        {4, "elephant", "mammal", 10, "savannah", 600.0},
        {5, "crocodile", "reptile", 7, "swamp", 400.0},
        {6, "snake", "reptile", 2, "forest", 15.0},
        {7, "lizard", "reptile", 1, "desert", 1.0},
        {8, "parrot", "bird", 3, "trees", 1.5},
        {9, "eagle", "bird", 5, "mountains", 3.0},
        {10, "penguin", "bird", 4, "antarctica", 30.0},
        {11, "shark", "fish", 6, "ocean", 200.0}
    };
    
    for(int i = 0; i < 11; i++) {
        // kan3amr tableau li type dyalo Animal
        A[i] = temp[i];
    }
    index_global = 11;
}









int menu() {
    int choix;
    printf("\n");
    printf("================================ MENU =================================\n");
    printf("1. Ajouter un animal\n");
    printf("2. Afficher les animaux\n");
    printf("3. Modifier un animal\n");
    printf("4. Supprimer un animal\n");
    printf("5. Chercher un animal\n");
    printf("6. Statistiques rapides\n");
    printf("7. Quitter\n");
    printf("=======================================================================\n");
    printf("Choix: ");
    scanf("%d", &choix);
    while (getchar() != '\n');
    return choix;
}










void ajouterAnimal() {

    int choix;

    do {

        printf("1. Ajouter un animal\n2. Ajouter plusieurs animaux\n3. Quitter\n\nchoix:");
        scanf("%d", &choix);
        while (getchar() != '\n');
        printf("\n");

        switch (choix) {

            case 1:
                if (index_global >= MAX_ANIMALS) {
                    printf("Limite maximale d'animaux atteinte.\n\n");
                    return;
                }
                    printf("Entrez les details de l'animal\n\n");
                    printf("nom: ");
                    scanf("%s", A[index_global].nom);
                    printf("espece: ");
                    scanf("%s", A[index_global].espece);
                    printf("age: ");
                    scanf("%d", &A[index_global].age);
                    printf("habitat: ");
                    scanf("%s", A[index_global].habitat);
                    printf("poids: ");
                    scanf("%f", &A[index_global].poids);
                    A[index_global].id=index_global+1;
                    index_global++;
                    return;
            

            case 2:

                if (index_global >= MAX_ANIMALS) {
                    printf("Limite maximale d'animaux atteinte.\n\n");
                    return;
                }
                int n;
                printf("Combien d'animaux voulez-vous ajouter?:\n");
                printf("--Entrez : ");
                scanf("%d", &n);

                for (int i = 0; i < n; i++) {
                    printf("\nEntrez les details de l'animal %d:\n\n", i + 1);
                    printf("Nom: ");
                    scanf("%s", A[index_global].nom);
                    printf("Espece: ");
                    scanf("%s", A[index_global].espece);
                    printf("Age: ");
                    scanf("%d", &A[index_global].age);
                    printf("Habitat: ");
                    scanf("%s", A[index_global].habitat);
                    printf("Poids: ");
                    scanf("%f", &A[index_global].poids);
                    A[index_global].id=index_global+1;
                    index_global++;
                }
                return;


            case 3:

                return;


            default:

                printf("choix non valide\n\n");
            
                break;
            }
    }while(choix != 3);
}


void affiche_all(){

        printf("\n");

        if (index_global == 0) {
            printf("Aucun animal dans la liste.\n");
            return;
        }
        printf("Liste des animaux:\n");

        for (int i = 0; i < index_global; i++) {
            printf("Animal ID [%d]: %s, %s, %d, %s, %.2f\n", A[i].id, A[i].nom, A[i].espece, A[i].age, A[i].habitat, A[i].poids);
        }
    }
void afficherAnimaux() {

    

    int choix;
    
    do{
        printf("1. Afficher tous les animaux\n2. Trier par nom (A-Z)\n3. Trier par age\n4. Afficher par habitat\n5. Quitter\n\nchoix:");
        scanf("%d", &choix);
        while (getchar() != '\n');
        printf("\n");
        switch (choix) {
            

            // trier par id
            case 1:
            int min ;
            
                for(int i =0 ;i<index_global-1;i++){
                    min = i;
                    for(int j = i+1;j<index_global;j++){
                        if(A[j].id<A[min].id){
                            min = j;
                        }
                    }

                    Animal temp1 = A[i];
                    A[i]= A[min];
                    A[min] = temp1;
                }

                affiche_all();
                return;

            // trier par nom(String)
            case 2:
                

                for(int i = 0;i<index_global - 1;i++){
                    min = i;
                    for(int j = i+1;j<index_global;j++){
                        if(strcpy(A[j].nom,A[i].nom) == 0){
                            min = j;
                        }
                    }
                         Animal temp1 = A[i];
                         A[i] = A[min];
                         A[min] = temp1;
                }


                affiche_all();
                return;



            // trier par age
            case 3:
                 for(int i =0 ;i<index_global-1;i++){
                    min = i;
                    for(int j = i+1;j<index_global;j++){
                        if(A[j].age<A[min].age){
                            min = j;
                        }
                    }

                    Animal temp1 = A[i];
                    A[i]= A[min];
                    A[min] = temp1;
                }
                affiche_all();
                return;



                
            case 4:
                    char habitatRecherche[20];
                    again:
                    printf("Entrez l'habitat a rechercher: ");
                    scanf("%s", habitatRecherche);
                    int trouve = 0;
                    for (int i = 0; i < index_global; i++) {
                        if (strcmp(A[i].habitat, habitatRecherche) == 0) {
                            printf("Animal %d: %s, %s, %d, %s, %.2f\n", A[i].id, A[i].nom, A[i].espece, A[i].age, A[i].habitat, A[i].poids);
                            trouve = 1;
                        }
                    }
                    if (!trouve) {
                        printf("Aucun animal trouve dans cet habitat.\n");
                        goto again;
                    }
                return;
            case 5:
                return;
            default:
                printf("choix non valide\n");
                break;
        }
    }while(choix!=5);
}











// modification
void modifierAnimal() {
    int choix;
    int id;
    
    
    do{
        printf("1. Modifier l'age\n2. Modifier l'habitat\n3. Quitter\n\nchoix:");
        scanf("%d", &choix);
        while (getchar() != '\n');
        printf("\n");
        switch (choix){
            case 1:
                printf("Entrez l'id de l'animal a modifier: ");
                scanf("%d", &id);
                while (getchar() != '\n');
                for (int i = 0; i < index_global; i++) {
                    if (A[i].id == id) {
                        printf("Entrez le nouvel age: ");
                        scanf("%d", &A[i].age);
                        printf("Age modifie avec succes.\n");
                        return;
                    }
                }
                printf("Animal avec l'id %d non trouve.\n", id);
                break;
            case 2:
                printf("Entrez l'id de l'animal a modifier: ");
                scanf("%d", &id);
                while (getchar() != '\n');
                for (int i = 0; i < index_global; i++) {
                    if (A[i].id == id) {
                        printf("Entrez le nouvel habitat: ");
                        scanf("%s", A[i].habitat);
                        printf("Habitat modifie avec succes.\n");
                        return;
                    }
                }
                printf("Animal avec l'id %d non trouve.\n", id);
                break;
            case 3:
                break;
            default:
                printf("choix non valide\n");
                break;
        }
    }while(choix!=3);
}






// suppression
void supprimerAnimal() {
    int id;
    printf(".Entrez [-1] pour annuler:\n");
    printf(".Entrez l'id de l'animal a supprimer: ");
    scanf("%d", &id);
    if (id == -1) {
        return;
    }
    while (getchar() != '\n');

    for (int i = 0; i < index_global; i++) {
        if (A[i].id == id) {
            for (int j = i; j < index_global - 1; j++) {
                A[j] = A[j + 1];
            }
                printf("Animal supprime avec succes.\n");
                strcpy(A[index_global-1].nom, "");
                strcpy(A[index_global-1].espece, "");
                A[index_global-1].age = 0;
                strcpy(A[index_global-1].habitat, "");
                A[index_global-1].poids = 0.0;
                index_global--;
                return;
        }
    }
    
    printf("Animal avec l'id %d non trouve.\n", id);
}






// chercher
void chercherAnimal() {
    char nomRecherche[20];
    int choix;
    do{
        printf("1. rechercher un animal par id\n2. Rechercher un animal par nom\n3. rechercher un animal par espece\n4. Quitter\nchoix:");
        scanf("%d",&choix);
        while (getchar() != '\n');
        switch(choix){
            int id;
            case 1:
                printf("Entrez l'id a rechercher: ");
                scanf("%d", &id);
                while (getchar() != '\n');
                for (int i = 0; i < index_global; i++) {
                    if (A[i].id == id) {
                        printf("Animal %d: %s, %s, %d, %s, %.2f\n", A[i].id, A[i].nom, A[i].espece, A[i].age, A[i].habitat, A[i].poids);
                        return;
                    }
                }
                printf("Aucun animal trouve avec cet id.\n");
                break;
            case 2:
                printf("Entrez le nom a rechercher: ");
                scanf("%s", nomRecherche);
                while (getchar() != '\n');
                for (int i = 0; i < index_global; i++) {
                    if (strcmp(A[i].nom, nomRecherche) == 0) {
                        printf("Animal %d: %s, %s, %d, %s, %.2f\n", A[i].id, A[i].nom, A[i].espece, A[i].age, A[i].habitat, A[i].poids);
                        
                    }
                }
                
                return;
                printf("Aucun animal trouve avec ce nom.\n");
                break;
            case 3:
                char especeRecherche[20];
                printf("Entrez l'espece a rechercher: ");
                scanf("%s", especeRecherche);
                while (getchar() != '\n');
                for (int i = 0; i < index_global; i++) {
                    if (strcmp(A[i].espece, especeRecherche) == 0) {
                        printf("Animal %d: %s, %s, %d, %s, %.2f\n", A[i].id, A[i].nom, A[i].espece, A[i].age, A[i].habitat, A[i].poids);
                    }
                }
                return;
                printf("Aucun animal trouve avec cette espece.\n");
                break;
            case 4:
                break;
            default:
                printf("choix non valide\n");
                break;
        }
    }while(choix!=4);
}




// Statistique
void nombreAnimaux(){
    printf("Le nombre total d'animaux est: %d\n", index_global);
}
void ageMoyen(){
    if(index_global==0){
        printf("Aucun animal dans la liste.\n");
        return;
    }
    float totalAge = 0.0;
    for(int i=0;i<index_global;i++){
        totalAge+=A[i].age;
    }
    printf("L'age moyen des animaux est: %.2f\n", totalAge/index_global);
}
void plusVieuxPlusJeune() {
    if (index_global == 0) {
        printf("Aucun animal dans la liste.\n");
        return;
    }
    int ageMax = A[0].age;
    int ageMin = A[0].age;
    for (int i = 1; i < index_global; i++) {
        if (A[i].age > ageMax) {
            ageMax = A[i].age;
        }
        if (A[i].age < ageMin) {
            ageMin = A[i].age;
        }
    }
    printf("L'animal le plus vieux a %d ans.\n", ageMax);
    printf("L'animal le plus jeune a %d ans.\n", ageMin);
}
void especepluspresente() {
    if (index_global == 0) {
        printf("Aucun animal dans la liste.\n");
        return;
    }
    int maxCount = 0;
    char especeMax[20];
    for (int i = 0; i < index_global; i++) {
        int count = 1;
        for (int j = i + 1; j < index_global; j++) {
            if (strcmp(A[i].espece, A[j].espece) == 0) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            strcpy(especeMax, A[i].espece);
        }
    }
    printf("L'espece la plus presente est %s avec %d individus.\n", especeMax, maxCount);
}
void statistiques() {
    int choix;
    do {
        printf("\nStatistiques:\n");
        printf("1. Nombre total d'animaux\n");
        printf("2. Age moyen des animaux\n");
        printf("3. Animal le plus vieux et le plus jeune\n");
        printf("4. Espece la plus presente\n");
        printf("5. Retour au menu principal\n");
        printf("Choix: ");
        scanf("%d", &choix);
        while (getchar() != '\n');
        switch (choix) {
            case 1:
                nombreAnimaux();
                break;
            case 2:
                ageMoyen();
                break;
            case 3:
                plusVieuxPlusJeune();
                break;
            case 4:
                especepluspresente();
                break;
            case 5:
                break;
            default:
                printf("choix non valide\n");
                break;
        }
    } while (choix != 5);
}




// main
int main (){

    int choix;

    stock_data();

    do {
        choix = menu();
        switch (choix) {
            case 1:
                ajouterAnimal();
                break;
            case 2:
                afficherAnimaux();
                break;
            case 3:
                modifierAnimal();
                break;
            case 4:
                supprimerAnimal();
                break;
            case 5:
                chercherAnimal();
                break;
            case 6:
                statistiques();
                break;
            case 7:
                printf("Au revoir!\n");
                break;
            default:
                printf("choix non valide\n");
                break;
        }
    } while (choix != 7);

    return 0;
}

