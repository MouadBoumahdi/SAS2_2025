#include <stdio.h>
#include <string.h>

#define MAX 100

struct contact{
    char nom[MAX][50];
    char numero[MAX][50];
    char email[MAX][50];
};





int main() {
    
    struct contact c;
    
  printf("=====Carnet de Contacts =====\n");
    printf("1 - Ajouter un contact\n");
    printf("2 - Modifier un contact\n");
    printf("3 - Supprimer un contact\n");
    printf("4 - Afficher tous les contacts\n");
    printf("5 - Rechercher un contact\n");
    printf("6 - Quitter\n");
    
    char choix;
    int i,j,n =0,found=0;
    char nomrechercher[50];
    char newnumber[50];
    char newemail[50];
    
    
    menu:
    printf("Quel est votre choix ? ");
    scanf("%c",&choix);
    getchar();
    
    switch(choix){
        case '1':
        if (n < MAX) {
                printf("Entrez le nom : ");
                fgets(c.nom[n], sizeof(c.nom[n]), stdin);
                c.nom[n][strcspn(c.nom[n], "\n")] = '\0';

                printf("Entrez le numéro de téléphone : ");
                fgets(c.numero[n], sizeof(c.numero[n]), stdin);
                c.numero[n][strcspn(c.numero[n], "\n")] = '\0';

                printf("Entrez l'adresse e-mail : ");
                fgets(c.email[n], sizeof(c.email[n]), stdin);
                c.email[n][strcspn(c.email[n], "\n")] = '\0';

            n++;  
        } else {
            printf("Le carnet est plein!\n");
        }
         goto menu;

            
            
            
        case '2':
             printf("Entrez le nom du contact a modifier: ");
             fgets(nomrechercher,sizeof(nomrechercher),stdin);
             nomrechercher[strcspn(nomrechercher,"\n")] = '\0';
             
             for(i = 0 ;i<n;i++){
                 if(strcmp(nomrechercher,c.nom[i]) == 0){
                     printf("entrer la nouveau numero : ");
                     fgets(newnumber,sizeof(newnumber),stdin);
                     newnumber[strcspn(newnumber,"\n")] = '\0';
                     strcpy(c.numero[i],newnumber);
                     printf("entrer la nouveau email : ");
                     fgets(newemail,sizeof(newemail),stdin);
                     newemail[strcspn(newemail,"\n")] = '\0';
                     strcpy(c.email[i],newemail);
                     
                     
                 }
             }
             goto menu;
        
        case '3':
             printf("Entrez le nom du contact pour supprimer: ");
             fgets(nomrechercher,sizeof(nomrechercher),stdin);
             nomrechercher[strcspn(nomrechercher,"\n")] = '\0';
             
             for(i = 0; i < n; i++) {
    if(strcmp(nomrechercher, c.nom[i]) == 0) {
        for(j = i; j < n - 1; j++) {
            strcpy(c.nom[j], c.nom[j+1]);
            strcpy(c.numero[j], c.numero[j+1]);
            strcpy(c.email[j], c.email[j+1]);
        }
        n--;
        printf("le contact est supprime\n");
        break;
    }
}

                
             
              
             goto menu;
            
        case '4':
            if(n>0){
                printf("les contacts li kaynin :\n");
                for(i = 0;i<n;i++){
                printf("%s,",c.nom[i]);
                printf("%s,",c.numero[i]);
                printf("%s\n",c.email[i]);
            }
            }else{
                printf("Aucun contact a affiche.\n");
            }
            
            goto menu;
            
            
        case '5':
            printf("rechercher un contact par son nom  : ");
             fgets(nomrechercher,sizeof(nomrechercher),stdin);
             nomrechercher[strcspn(nomrechercher,"\n")] = '\0';
             
            for(i = 0;i<n;i++){
                if(strcmp(nomrechercher, c.nom[i]) == 0) {
                    printf("%s,",c.nom[i]);
                    printf("%s,",c.numero[i]);
                    printf("%s\n",c.email[i]);
                     found =1;
                }
            }
            if(found<=0){
                printf("introuvable\n");
            }
            goto menu;
            
            
            
        case '6':
            printf("Quitter le programme!");
            break;
    
    
    
    
        default:
            printf("choix introuvable\n");
            goto menu;
        
    }
}
