#include <stdio.h>

int main() 
{
  int num;
   
  printf("Inserisci un numero di cinque cifre: ");
   scanf("%d", &num);

  if (num > 9999 && num < 99999) {
    printf("%d\n", num);
   }
  else
  printf("Errore\n");

  return 0;}
