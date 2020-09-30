#include<stdio.h>
#include<stdlib.h>

 int main(){
 char card_name[3];
 puts("ingrese el nombre de la tarjeta ");
 scanf("%2s", card_name);
printf("ingresates %s\n", card_name);
int val=0;

if(card_name[0]=='Q')
    val=10;
else if(card_name[0]=='J') //elif
    val=10;
else if(card_name[0]=='K')
   val=10;
else if(card_name[0]=='A')
val=11;
else
val=atoi(card_name);

printf("el valor de la tarjeta es %d", val);


 return 0;
 }
