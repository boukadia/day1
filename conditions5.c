#include<stdio.h>

int main(){
    //programme qui converte annee  au moiset jours et heurs et minutes et seconds.
    int annee,mois,jours,heurs,minutes,seconds;
    printf("saisir nombres d annees");
    scanf("%d",&annee);
    mois=annee*12;
    jours=mois*30;
    heurs=jours*24;
    minutes=heurs*60;
    seconds=minutes*60;
    printf("annee= %d\n mois= %d\n jours= %d\n heurs= %d\n minutes= %d\n seconds= %d",annee,mois,jours,heurs,minutes,seconds);
}