#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int i;
    #define MAX 100

    // Demander combien de livres à saisir
    printf("Combien de livres : ");
    scanf("%d", &n);
    getchar();
    

    while (n <= 0 || n > MAX) {
        printf("Try Again :\n");
        printf("Combien de livres : ");
        scanf("%d", &n);
        getchar();
    }

    // Declaration des tableaux
    char titre[MAX][50];
    char auteur[MAX][50];
    double prix[MAX];
    int quantite[MAX];

    printf("\n");

    // Entrer les livres
    for (i = 0; i < n; i++) {
        printf("Entre l'auteur de livre : ");
        fgets(auteur[i],sizeof(auteur[i]),stdin);
        auteur[i][strcspn(auteur[i],"\n")] = '\0';

        printf("Entre le titre de livre : ");
        fgets(titre[i],sizeof(titre[i]),stdin);
        titre[i][strcspn(titre[i],"\n")] = '\0';

        printf("Entre le prix de livre : ");
        scanf("%lf", &prix[i]);

        printf("Entre la quantite de livre : ");
        scanf("%d", &quantite[i]);
        getchar();
    }

    // Menu
    Menu:
    printf("=== Système de Gestion de Stock dans une Librairie ===\n\n");
    printf("1 - Ajouter un livre au stock\n");
    printf("2 - Afficher tous les livres disponibles\n");
    printf("3 - Mettre à jour la quantité d'un livre\n");
    printf("4 - Supprimer un livre du stock\n");
    printf("5 - Afficher le nombre total de livres en stock\n");
    printf("6 - Quitter\n");

    int choix;
    char recherchetitre[50];

    printf("Choix : ");
    scanf("%d", &choix);
    getchar();
    
    switch (choix) {
        case 1: {
            // Ajouter des livres
            if(n < MAX){
                printf("Entre l'auteur de livre : ");
                scanf("%[^\n]", auteur[n]);
                getchar();

                printf("Entre le titre de livre : ");
                scanf("%[^\n]", titre[n]);

                printf("Entre le prix de livre : ");
                scanf("%lf", &prix[n]);

                printf("Entre la quantite de livre : ");
                scanf("%d", &quantite[n]);
                getchar();
                    
                n++;
                

               
              
            }else{
                printf("Stock plein");
            }
             goto Menu;
        }

        case 2: {
            // Afficher tous les livres
            printf("---------------------------------\n");
            for (i = 0; i < n; i++) {
                printf("%s, %s, %.2f, %d\n", auteur[i], titre[i], prix[i], quantite[i]);
            }
            printf("---------------------------------\n");
            goto Menu;
            
        }

        case 3: {
            // Mettre à jour la quantite
            printf("Recherche un livre pour changer la quantite : ");
            fgets(recherchetitre,sizeof(recherchetitre),stdin);
            recherchetitre[strcspn(recherchetitre,"\n")] = '\0';

            int found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(recherchetitre, titre[i]) == 0) {
                    int newqte;
                    printf("Nouvelle quantite : ");
                    scanf("%d", &newqte);
                    quantite[i] = newqte;

                    printf("%s, %s, %.2f, %d\n", auteur[i], titre[i], prix[i], quantite[i]);
                    found = 1;
                    break;
                }
            }

            if (found<=0) {
                printf("Livre introuvable.\n");
            }else{
               goto Menu;
            }
        }

        case 4: {
            // Supprimer un livre            
            printf("Nom du livre à supprimer : ");

            fgets(recherchetitre,sizeof(recherchetitre),stdin);
            recherchetitre[strcspn(recherchetitre,"\n")] = '\0';

            int found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(recherchetitre, titre[i]) == 0) {
                    for (int j = i; j < n; j++) {
                        strcpy(titre[j], titre[j + 1]);
                        strcpy(auteur[j], auteur[j + 1]);
                        prix[j] = prix[j + 1];
                        quantite[j] = quantite[j + 1];
                    }
                    n--;
                    printf("Le livre est supprime.\n");
                    found = 1;
                    break;
                }
            }

            if (found<=0) {
                printf("Livre non trouve.\n");
            }
               goto Menu;
        }

        case 5: {
            // Quantité totale
            int total = 0;
            for (i = 0; i < n; i++) {
                total += quantite[i];
            }
            printf("Quantité totale de tous les livres : %d\n", total);
            goto Menu;
        }

        case 6:
            printf("Fin du programme.\n");
            break;

        default:
            printf("Choix invalide.\n");
            goto Menu;
    }

    


    return 0;
}
