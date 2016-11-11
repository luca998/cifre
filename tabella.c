#include <stdio.h>

int main() 
{
  int num=0;

   printf("Numero     Quadrato     Cubo\n");
  
    for (num = 0 ; num <=10; num++ ) 
    {
      printf("%d            %d            %d\n",num,num*num,num*num*num);
     }


  printf("\n");

  return 0;
}
