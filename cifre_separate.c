#include <stdio.h>

int main() 
{
  int num;
  int cifra5,cifra4,cifra3,cifra2,cifra1;
  int d1,d2,d3,d4;
  

  printf("Inserisci un numero di cinque cifre: ");
  scanf("%d", &num);

  if (num < 10000 || num > 99999) {
    return -1;
  }

    cifra5= num %10;
    d1= (num / 10);
    cifra4= d1 % 10;
    d2= (d1 / 10);
    cifra3= d2 % 10;
    d3= (d2 / 10);
    cifra2= d3 % 10;
    d4= (d3 / 10);
    cifra1= d4 % 10;
    printf("%d   %d   %d   %d   %d",cifra1,cifra2,cifra3,cifra4,cifra5);

  printf("\n");

  return 0;
}
