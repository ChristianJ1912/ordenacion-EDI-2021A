#include<stdio.h>

#define m 25

void rellenaArreglo(int e[m], int b);
void OrdenacionSeleccion(int e[m], int b);
void muestraArreglo(int e[m], int b);

int a[m],n;

int main()
{
   printf("¿Cuantos datos habra en el arreglo? ");
   scanf("%d", &n);
   rellenaArreglo(a, n);
   OrdenacionSeleccion(a, n);
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


void OrdenacionSeleccion(int e[m], int b)
{
  int min=0,i,j;
  int aux;
  for(i=0 ; i<b-1 ; i++)
  {
     min=i;
     for(j=i+1 ; j<b ; j++)
        if (e[min] > e[j])
           min=j;
     aux=e[min];
     e[min]=e[i];
     e[i]=aux;
  }
}

void muestraArreglo(int e[m], int b)
{
    int i;
    for(i=0; i<b; i++)
        printf("%d\t", e[i]);
}
