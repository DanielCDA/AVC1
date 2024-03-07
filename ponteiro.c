# include <stdio.h>

void troca ( int *a, int *b)
 {
 int tmp;
 tmp = *a;
 *a = *b;
 *b = temp;
 } 

int main ()
{
 int x, y;
 printf (" \n Entre com dois numeros inteiros: ");
 scanf (" %d %d ", &x , &y);
 printf (" \n Antes da troca x = %d e y= %d ", x , y);
 troca(&x , &y); /* chamada da Função */
 printf (" \n Depois da troca x= %d e y= %d ", x , y)
 return 0;
 } 
