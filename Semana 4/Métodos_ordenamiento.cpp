// Métodos_ordenamiento.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <time.h>
using namespace std;
void cambio(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void MetodoBurbuja(int arr[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++)  
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                cambio(&arr[j], &arr[j + 1]);
}
void imprimirLista(int lista[],int y) {
    for (int x = 0; x < y-1 ; x++) {
        cout << lista[x] << ",";
    }
}

int main()
{
    int lista[200];
    srand(time(NULL));
    for (int i = 0;i < 199;i++) {
        lista[i] = rand() % 100;
    }
    cout << "lista sin ordenar:" << endl;
    imprimirLista(lista,200);
    MetodoBurbuja(lista, 200);
    cout << endl << "lista ordenada:" << endl;
    imprimirLista(lista, 200);
    return 0;
}


