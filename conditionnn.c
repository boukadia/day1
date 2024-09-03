#include<stdio.h>
int main(){
    char c;
    printf("saisir le caratere");
    scanf("%c",&c);
   switch (c){
    case 'o':printf("le caractere est voyelle");
    break;
    case 'i':printf("le caractere est voyelle");
    break;
     case 'u':printf("le caractere est voyelle");
    break;
     case 'a':printf("le caractere est voyelle");
    break;
    default :printf("le caractere n est pas voyelle");
    break;
   }
}