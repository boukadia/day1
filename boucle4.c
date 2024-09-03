//Écrivez un programme C qui demande un nombre entier n et
// affiche les n premiers nombres impairs. Par exemple, pour n = 5, affichez : 1, 3, 5, 7, 9.
#include<stdio.h>
int main(){
    int n,i;
     printf("saisir le nombre");
     scanf("%d",&n);
     for ( i=1;i<=n;i+=2)
     printf("%d\n",i);
     
     
}