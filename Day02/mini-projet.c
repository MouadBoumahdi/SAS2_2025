#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n;
    int i;

    // Demander combien de livres à saisir
    printf("Combien de livres : ");
    scanf("%d", &n);

    while (n <= 0) {
        printf("Try Again :\n");
        printf("Combien de livres : ");
        scanf("%d", &n);
    }

    // Declaration des tableaux
    char titre[n + 100][50];
    char auteur[n + 100][50];
    double prix[n + 100];
    int quantite[n + 100];

    printf("\n");

    // Entrer les livres
    for (i = 0; i < n; i++) {
        getchar();  
        printf("Entre l'auteur de livre : ");
        scanf("%[^\n]", auteur[i]);

        getchar();
        printf("Entre le titre de livre : ");
        scanf("%[^\n]", titre[i]);

        printf("Entre le prix de livre : ");
        scanf("%lf", &prix[i]);

        printf("Entre la quantite de livre : ");
        scanf("%d", &quantite[i]);
        printf("\n");
    }

    // Menu
    printf("=== Système de Gestion de Stock dans une Librairie ===\n\n");
    printf("1 - Ajouter un livre au stock\n");
    printf("2 - Afficher tous les livres disponibles\n");
    printf("3 - Mettre à jour la quantité d'un livre\n");
    printf("4 - Supprimer un livre du stock\n");
    printf("5 - Afficher le nombre total de livres en stock\n");
    printf("6 - Quitter\n");

    int choix;
    Menu:
    printf("Choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1: {
            // Ajouter des livres
            char reponse;
                getchar();
                printf("Entre l'auteur de livre : ");
                scanf("%[^\n]", auteur[n]);

                getchar();
                printf("Entre le titre de livre : ");
                scanf("%[^\n]", titre[n]);

                printf("Entre le prix de livre : ");
                scanf("%lf", &prix[n]);

                printf("Entre la quantite de livre : ");
                scanf("%d", &quantite[n]);

                n++; 

                getchar();
               goto Menu;
           

            break;
        }

        case 2: {
            // Afficher tous les livres
            printf("---------------------------------\n");
            for (i = 0; i < n; i++) {
                printf("%s, %s, %.2f, %d\n", auteur[i], titre[i], prix[i], quantite[i]);
            }
            printf("---------------------------------\n");
            goto Menu;
            
            break;
        }

        case 3: {
            // Mettre à jour la quantite
            char recherchetitre[50];
            getchar();
            printf("Recherche un livre pour changer la quantite : ");
            scanf("%[^\n]", recherchetitre);

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

            if (!found) {
                printf("Livre introuvable.\n");
            }
               goto Menu;
            break;
        }

        case 4: {
            // Supprimer un livre
            char recherchetitre[50];
            getchar();
            printf("Nom du livre à supprimer : ");
            scanf("%[^\n]", recherchetitre);

            int found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(recherchetitre, titre[i]) == 0) {
                    for (int j = i; j < n - 1; j++) {
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

            if (!found) {
                printf("Livre non trouve.\n");
            }
               goto Menu;
            break;
        }

        case 5: {
            // Quantité totale
            int total = 0;
            for (i = 0; i < n; i++) {
                total += quantite[i];
            }
            printf("Quantité totale de tous les livres : %d\n", total);
            goto Menu;
            break;
        }

        case 6:
            printf("Fin du programme.\n");
            break;

        default:
            printf("Choix invalide.\n");
    }

    


    return 0;
}
