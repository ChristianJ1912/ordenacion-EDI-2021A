#include<stdio.h>

#define m 25

void rellenaArreglo(int e[m], int b);
void OrdenacionInsercion(int e[m], int b);
void muestraArreglo(int e[m], int b);

int a[m],n;

int main()
{
   printf("¿Cuantos datos habra en el arreglo? ");
   scanf("%d", &n);
   rellenaArreglo(a, n);
   OrdenacionInsercion(a, n);
   muestraArreglo(a, n);
}

void rellenaArreglo(int e[m], int b)
{
    int i;
    for(i=0; i<b; i++)
    {
        printf("Arreglo[%d]: ", i);
        scanf("%d", &e[i]);
    }
}


void OrdenacionInsercion(int e[m], int b)
{
  int i, j, aux;
  for (i=1; i<b; i++)
  {
    aux = e[i];
    j = i-1;
    while (j >= 0 && e[j] > aux) {
      e[j + 1] = e[j];
      j--;
    }
    e[j+1] = aux;
  }
}

void muestraArreglo(int e[m], int b)
{
    int i;
    for(i=0; i<b; i++)
        printf("%d\t", e[i]);
}
