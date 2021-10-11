#include<stdio.h>

#define m 25

void rellenaArreglo(int e[m], int b);
void OrdenacionBurbuja(int e[m], int b);
void muestraArreglo(int e[m], int b);

int a[m],n;

int main()
{
   printf("¿Cuantos datos habra en el arreglo? ");
   scanf("%d", &n);
   rellenaArreglo(a, n);
   OrdenacionBurbuja(a, n);
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


void OrdenacionBurbuja(int e[m], int b)
{
    int i,j, aux;
    for (i=1;i<b;i++)
    {
       for (j=0; j<b-i; j++)
       {
          if (e[j] > e[j+1])
          {
            aux=e[j];
            e[j]=e[j+1];
            e[j+1]=aux;
          }
       }
    }
}

void muestraArreglo(int e[m], int b)
{
    int i;
    for(i=0; i<b; i++)
        printf("%d\t", e[i]);
}
