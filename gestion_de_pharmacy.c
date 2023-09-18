#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
int nomberDeMedicament=0;
int nomberdelet=0;
 char nomDeMedicament[100][25];float prixDeMedicament[100];int codeDeMedicament[100];
 char sprMedicamentnom[50][25];int sprMedicamentcode[50];float sprMedicamentprix[50];


int main()
{
   MenuPrincipal();
    return 0;
}
void MenuPrincipal(){
  system("cls");char d[]="\n**********************gestion de pharmassy************************************";
 for(int i=0;d[i]!='\0';i++){
    printf("%c",d[i]);
    Sleep(1);
 }
   Sleep(200);
   printf("\n1-afficheer les medicament\n");
   Sleep(200);
    printf("2-ajoute les medicament\n");
    Sleep(200);
     printf("3-modifer les medicament\n");
     Sleep(200);
      printf("4-supprimer les medicament\n");
      Sleep(200);
       printf("5-qutter le program\n");
       Sleep(200);
  int n;
     printf("entrer ton choi:");scanf("%d",&n);
     system("cls");

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
    char d[]="\n**********************list de medicament************************************";
 for(int i=0;d[i]!='\0';i++){
    printf("%c",d[i]);
    Sleep(1);
 }
    for(int i=0 ;i<nomberDeMedicament;i++){
            int temp=0;
            for (int j=0;j<nomberdelet;j++){
                if (codeDeMedicament[i]==sprMedicamentcode[j])temp++;
            }
    if(temp==0){
        printf("medicament numero %d:\n",i+1);
        printf("le nome de medicament :%s\n",nomDeMedicament[i]);
        printf("le code de medicament :%d\n",codeDeMedicament[i]);
        printf("le prix de medicament :%0.2f\n",prixDeMedicament[i]);
        printf("////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
    }
    else continue;
    }
    int n;
    printf("\n1-go to main menu:");scanf("%d",&n);
    if(n==1)
    MenuPrincipal();
}
void ajoute(){

   char d[]="**********************ajouter un medicament************************************\n";
 for(int i=0;d[i]!='\0';i++){
    printf("%c",d[i]);
    Sleep(1);
 }
   printf("entrer le nom de medicament:");scanf("%s",&nomDeMedicament[nomberDeMedicament]);
   printf("entrer le code de medicament:");scanf("%d",&codeDeMedicament[nomberDeMedicament]);
   printf("entrer le prix de medicament:");scanf("%f",&prixDeMedicament[nomberDeMedicament]);
   printf("***********************ajouter un medicament succes*********************\n");
   nomberDeMedicament++;
   int n;
    printf("\n1-go to main menu:");scanf("%d",&n);
    if(n==1)
    MenuPrincipal();
}
void modifer(){
     char d[]="**********************modifier un medicament************************************\n";
 for(int i=0;d[i]!='\0';i++){
    printf("%c",d[i]);
    Sleep(1);
 }
   int n;
       printf("entree le code de medicament tu veux te modifer:");scanf("%d",&n);
   for (int i=0;i<nomberDeMedicament;i++){
    if (n==codeDeMedicament[i]){
            printf("\nentree la nouvelle nom de medicament:");scanf("%s",&nomDeMedicament[i]);
        printf( "entree la nouvelle prix de ");scanf("%f",&prixDeMedicament[i]);
    }
   }
  int s;
    printf("\n1-go to main menu:");scanf("%d",&s);
    if(s==1)
    MenuPrincipal();
}
void suprimer(){
char d[]="**********************suppremer un medicament************************************";
 for(int i=0;d[i]!='\0';i++){
    printf("%c",d[i]);
    Sleep(1);
 }

int n;
       printf("\nentree le code de medicament tu veux te supprimer:");scanf("%d",&n);

for (int i=0;i<nomberDeMedicament;i++){
    if (n==codeDeMedicament[i]){
            //sprMedicamentnom[i]=nomDeMedicament[nomberdelet];
            sprMedicamentcode[i]=codeDeMedicament[nomberdelet];
            //sprMedicamentprix[i]=prixDeMedicament[nomberdelet];
            nomberdelet++;
    }
   }
int s;
    printf("\n1-go to main menu:");scanf("%d",&s);
    if(s==1)
    MenuPrincipal();
}
