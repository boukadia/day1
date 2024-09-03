//Écrivez un programme C qui demande un nombre entier n à l’utilisateur et calcule 
//la somme des n premiers nombres naturels. Par exemple, pour n = 4, la somme est 1 + 2 + 3 + 4 = 10.
#include<stdio.h>
int main(){
    int n,i,somme=0;
     printf("saisir le nombre");
     scanf("%d",&n);
     for ( i=1;i<=n;i++)
        somme=somme+i;
     printf("%d",somme);
     
     
}