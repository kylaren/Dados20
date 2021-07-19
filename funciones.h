#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include "dados.h"
#include "rlutil.h"

/// DECLARACION DE VARIABLES

extern int i; /// extern para declarar sin inicializar la variable (ya se inicializo en menu)


///DECLARACION DE FUNCIONES

void cargarAleatorio(int v[], int* tam, int* limite); /// Asigna valores aleatorios a cada posicion del vector

int valormaximoVector(int v[], int tam); /// Devuelve  el valor (primero) maximo en el vector

void ponerCero(int v[], int tam); /// Pone en 0 todas las posiciones del vector

int sumarVector(int v[], int tam ); /// Suma los valores contenidos en el vector

int posicionNumeroEnVector(int v[],int tam, int numero); /// Devuelve la posición que ocupa un número que se envía como parámetro. Devuelve la primera posición que encuentra el número. Si no lo encuentra devuelve -1

int contarNumerosRepetidos(int v[], int tam , int numero); /// Cuenta la cantidad de veces que se repite un número en el vector

void mostrarDados(int v[], int tam, int y); /// Muestra los dados

void cargarMostrarDados(int v[], int j, int y); /// Carga y muestra los dados simultaneamente

void invertirVector(int v[], int v2[], int tam); /// Invierte las posiciones del contenido del vector


///DEFINICIONES DE FUNCIONES

void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;
  }
}

int valormaximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return v[posMax];
}

void ponerCero(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
        v[i]=0;
    }
}
int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

int posicionNumeroEnVector(int v[],int tam, int numero){
    int i;
    for(i=0;i<=tam;i++){
        if(v[i]==numero) return i;
        }
    return -1;
}

int contarNumerosRepetidos(int v[], int tam, int numero){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

void mostrarDados(int v[], int tam, int y){
    int x, cara;
    for(x=0;x<tam;x++){
        cara=v[x];
        if(cara==1){
            cara1(x, y);
        }else if (cara==2){
            cara2(x, y);
        }else if (cara==3){
            cara3(x, y);
        }else if (cara==4){
            cara4(x, y);
        }else if (cara==5){
            cara5(x, y);
        }else if (cara==6){
            cara6(x, y);
        }
    }
}

void cargarMostrarDados(int v[], int j, int y){
    int k, d;
    for (k=0; k<j; k++){
            gotoxy(1,y);
            cout << "Dado: ";
            gotoxy(8,y);
            cin >> v[k];
            for (d=0; d<5; d++){
                    mostrarDados(v, 5, y+1);
            }
    }
}

void invertirVector(int v[], int v2[], int tam){
    int x;
    for(x=0;x<tam;x++){
        v2[x]=v[tam-(x+1)];/// Lo pensamos de esta manera
        /*if(i==0){
            v2[0]=v[tam-1];
        }else if(i==1){
            v2[1]=v[tam-2];
        }else if(i==2){
            v2[2]=v[tam-3];
        }else if(i==3){
            v2[3]=v[tam-4];
        }else if(i==4){
            v2[4]=v[tam-5];
        }*/
    }
}

#endif // FUNCIONES_H_INCLUDED
