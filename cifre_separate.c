#include <stdio.h>

int main() 
{
  int num;
  int est;  /* che significa est? trova un nome migliore */

  printf("Inserisci un numero di cinque cifre: ");
  scanf("%d", &num);

  /* caso negativo, se il numero non va bene esci dal programma */
  if (num < 10000 || num > 99999) {
    return -1;
  }

  /* else non necessario, se siamo qui significa che num
   * e' proprio di cinque cifre
   */
  printf("Il numero e':%d\n",num);
  est=num%10;
  printf("L'ultima cifra e':%d\n",est);

  return 0;
}
