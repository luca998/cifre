#include <stdio.h>

int main() 
{
  int num;
  int cifra;
  int i;

  printf("Inserisci un numero di cinque cifre: ");
  scanf("%d", &num);

  if (num < 10000 || num > 99999) {
    return -1;
  }

  for(i = 10000; i > 0; i/=10){
    cifra= (num / i) %10;
    printf("%d   ",cifra);
  }

  printf("\n");

  return 0;
}
