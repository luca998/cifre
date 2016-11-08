#include <stdio.h>

int main() 
{
  int num;
  int cifra;
  

  printf("Inserisci un numero di cinque cifre: ");
  scanf("%d", &num);

  if (num < 10000 || num > 99999) {
    return -1;
  }

    cifra= (num / 10000) %10;
    printf("%d   ",cifra);
    cifra= (num / 1000) %10;
    printf("%d   ",cifra);
    cifra= (num / 100) %10;
    printf("%d   ",cifra);
    cifra= (num / 10) %10;
    printf("%d   ",cifra);
     cifra= num % 10;
    printf("%d   ",cifra);

  printf("\n");

  return 0;
}
