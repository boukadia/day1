
#include<stdio.h>
int main(){
    int jours_restants,jours_accordes,jours_utilises,status;
     printf("saisir les jours accordes");
     scanf("%d",&jours_accordes);
     printf("saisir les jours utilises");
     scanf("%d",&jours_utilises);
     printf("saisir le status");
     scanf("%d",&status);
     if(status==0){
     jours_restants = (jours_accordes / 2) - jours_utilises;
    printf("Jours restants est : %d",jours_restants);
     }
     else{
        jours_restants = jours_accordes - jours_utilises;
    printf("Jours restants est : %d",jours_restants);
     }
     
}