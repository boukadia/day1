#include<stdio.h>
int main(){
    float c,k;
    printf("saisir la temperature en celsius");
    scanf("%f",&c);
    printf ("la temperature en kelvin est: %f",k);
    if (c<0)
    printf("etat solide");
    else if (c>=0 && c<100)
    printf("etat liquide");
    else 
    printf("etat vapeur");
}