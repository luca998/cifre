#include <stdio.h>

int main() 
{
  int num;
  int est; 
  printf("Inserisci un numero di cinque cifre: ");
   scanf("%d", &num);

  if (num<10000 || num>99999) 
    {
    printf("Errore\n");
     }
  else { 
     printf("Il numero e':%d\n",num);
     est=num%10;
     printf("L'ultima cifra e':%d\n",est);
       } 
  return 0;}
