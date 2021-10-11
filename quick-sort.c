#include<stdio.h>

#define m 25

void rellenaArreglo(int e[m], int b);
void intercambiar(int *a, int *b);
int particion(int e[m], int izq, int der);
void quicksort(int e[m], int izq, int der);
void muestraArreglo(int e[m], int b);

int a[m],n;

int main()
{
   int izquierda=0, derecha=n-1;
   printf("¿Cuantos datos habra en el arreglo? ");
   scanf("%d", &n);
   rellenaArreglo(a, n);
   quicksort(a, izquierda, derecha);
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

void intercambio(int *a, int *b)
{
  int aux;
  aux= *a;
  *a = *b;
  *b = aux;
}

int particion(int e[m], int izq, int der)
{
  int pivote;
  pivote = e[izq];
  while (1)
  {
    while (e[izq] < pivote)
    {
      izq++;
    }

    while (e[der] > pivote)
    {
      der--;
    }
    if (izq >= der)
    {
      return der;
    }
    else
    {
      intercambio(&e[izq], &e[der]);
      izq++;
      der--;
    }
  }
}

void quicksort(int e[m], int izq, int der)
{
  int par;
    par = particion(e, izq, der);
    quicksort(e, izq, par);
    quicksort(e, par+1, der);

}

void muestraArreglo(int e[m], int b)
{
    int i;
    for(i=0; i<b; i++)
        printf("%d\t", e[i]);
}

