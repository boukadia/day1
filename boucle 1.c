#include<stdio.h>
int main(){
    int nombre,i,p;
     printf("saisir le nombre");
     scanf("%d",&nombre);
     for ( i=1;i<=10;i++){
        p=nombre*i;
        printf("%d * %d = %d\n",nombre,i,p);
       
     }
     
     
}