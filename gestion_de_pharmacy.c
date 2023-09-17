#include <stdio.h>
#include <stdlib.h>
 int  nomberDeMedicament =0;char nomDeMedicament[100][25];float prixDeMedicament[100];int codeDeMedicament[100];
int main()
{
   MenuPrincipal();
    return 0;
}

void MenuPrincipal(){

   printf("**********************gestion de pharmassy************************************");
   printf("\n1-afficheer les medicament\n");
    printf("2-ajoute les medicament\n");
     printf("3-modifer les medicament\n");
      printf("4-supprimer les medicament\n");
       printf("5-qutter le program\n");
  int n;
     printf("entrer ton choi:");scanf("%d",&n);

   switch(n){
       case 1:afficher();break;
       case 2:ajoute();break;
       case 3:modifer();break;
       case 4:suprimer();break;
       case 5: printf("        !!!!programe off !!!");
       default : printf("invalide choi");
   }
}


void afficher(){
    for(int i=0 ;i<nomberDeMedicament;i++){
        printf("***********************list de medicament***************************\n");
        printf("medicament numero %d:\n",i+1);
        printf("le nome de medicament :%s\n",nomDeMedicament[i]);
        printf("le code de medicament :%d\n",codeDeMedicament[i]);
        printf("le prix de medicament :%0.2f\n",prixDeMedicament[i]);
        printf("////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    }
    MenuPrincipal();
}
void ajoute(){
   printf("***********************ajouter un medicament***************************\n");
   printf("entrer le nom de medicament:");scanf("%s",&nomDeMedicament[nomberDeMedicament]);
   printf("entrer le code de medicament:");scanf("%d",&codeDeMedicament[nomberDeMedicament]);
   printf("entrer le prix de medicament:");scanf("%f",&prixDeMedicament[nomberDeMedicament]);
   printf("***********************ajouter un medicamentsucces*********************\n");
   nomberDeMedicament++;
   MenuPrincipal();
}
void modifer(){}
void suprimer(){}















