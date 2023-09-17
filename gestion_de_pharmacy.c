#include <stdio.h>
#include <stdlib.h>
 int  nomberDeMedicament =0;char nomDeMedicament[100][25];
int main()
{
   MenuPrincipal();
    return 0;
}

void MenuPrincipal(){

   printf("**********************gestion de pharmassy************************************");
   printf("1-afficheer les medicament\n");
    printf("2-ajoute les medicament\n");
     printf("3-modifer les medicament\n");
      printf("4-supprimer les medicament\n");
       printf("5-qutter le program\n");
  int n;
     printf("entrer ton choi:");scanf("%d",n);

   switch(n){
       case 1:afficher();break;
       case 2:ajoute();break;
       case 3:modifer();break;
       case 4:suprimer();break;
       case 5: printf("        !!!!programe off !!!");
       default : printf("invalide choi");
   }
}


void afficher(){}
void ajoute(){}
void modifer(){}
void suprimer(){}















