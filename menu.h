#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "funciones.h"

///DECLARACION DE VARIABLES

int o, i, j, k, v, opcM;
char player1[15], player2[15];
int cantRondas;
int vtirada[5], vmaximos[5], vmaximosInv[5], vnumgenerador[6];
int ntirada, puntosapostados, puntajeacumulado, maximo, sumamax, cRondas0, cRondasP;
int numGeneradorPuntos, cantDadosRep, puntajefinal, puntajefinal1, puntajefinal2;
char highestScorePlayer[15];
int highestScore;


/// DECLARACION DE FUNCIONES

void menu(); /// Menu completo
void unJugador(); /// Juego para 1 jugador
void dosJugadores(); /// Juego para 2 jugadores
void puntuacionAlta(); /// Puntuacion mas alta
void modoSimulado(); /// Modo simulado para 1 o 2 jugadores


/// DEFINICIONES DE FUNCIONES: OPCIONES DEL MENU

void menu(){
    system("cls");
    gotoxy(10,5);
    cout << (char)201;
    for (i=1; i<44; i++) cout << (char)205; /// Para que quede mas fashion
    cout << (char)187 << endl;
    gotoxy(10,6);
    cout << (char)186 << " 1. JUEGO NUEVO PARA 1 JUGADOR.";
    gotoxy(54,6);
    cout << (char)186;
    gotoxy(10,7);
    cout << (char)186 << " 2. JUEGO NUEVO PARA 2 JUGADORES.";
    gotoxy(54,7);
    cout << (char)186;
    gotoxy(10,8);
    cout << (char)186 << " 3. PUNTUACION MAS ALTA.";
    gotoxy(54,8);
    cout << (char)186;
    gotoxy(10,9);
    cout << (char)186 << " 4. MODO SIMULADO (CARGA DE DATOS MANUAL).";
    gotoxy(54,9);
    cout << (char)186;
    gotoxy(10,10);
    cout << (char)186 << " 0. FIN DEL PROGRAMA.";
    gotoxy(54,10);
    cout << (char)186;
    gotoxy(10,11);
    cout << (char)200;
    gotoxy(11,11);
    for (i=1; i<44; i++) cout << (char)205;
    gotoxy(54,11);
    cout << (char)188;
    gotoxy(12,11);
    cout << endl << endl;
    gotoxy(13,12);
    cout << "Ingrese una opcion: ";
}

void unJugador(){
    for(k=0 ; k<=5 ; k++){
        vnumgenerador[k]=20+k;
        }
    cout << "JUEGO NUEVO PARA 1 JUGADOR." << endl;
                        for (o=1; o<55; o++) cout << (char)205;
                        cout << endl;
                            cout << "Ingrese nombre del jugador: ";
                            cin >> player1;
                            cout << endl;
                            cout << "Cantidad de rondas que desea jugar: ";
                            cin >> cantRondas;
                            cout << endl;
                            puntajefinal=0;
                            cRondas0=0;
                            cRondasP=0;
                            for (i=1; i<=cantRondas; i++){/// RONDAS
                                system("cls");
                                for (o=1; o<55; o++) cout << (char)205;
                                cout << endl << "Cuantos puntos quiere apostar para esta ronda?: "<<endl;
                                for (o=1; o<55; o++) cout << (char)205;
                                gotoxy(49,2);
                                cin >> puntosapostados;
                                system("cls");
                                puntajeacumulado=0;
                                ntirada=0; /// reinicio el numero de tirada en cada ronda
                                ponerCero(vmaximos,5); /// pongo en 0 el vector de maximos de tiradas, en cada ronda
                                for(j=5; j>=1; j--){/// TIRADAS
                                        cout << "JUGADOR: " << player1 << " " << (char)186;
                                        cout << " RONDA N" << (char)167 << i << " " << (char)186;
                                        cargarAleatorio(vtirada,j,6);
                                        maximo=valormaximoVector(vtirada,j);
                                        vmaximos[j-1]=maximo;
                                        sumamax=sumarVector(vmaximos,5);
                                        cout << " PUNTAJE ACUMULADO: " << sumamax << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        ntirada++;
                                        cout << "TIRADA N" << (char)167 << ntirada << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        mostrarDados(vtirada, j, 5);
                                        cout << endl;
                                        cout << "El valor maximo es: " << maximo << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        cout << "DADOS CON PUNTAJES MAXIMOS DE CADA TIRADA:"<< endl;
                                        invertirVector(vmaximos, vmaximosInv, 5);
                                        mostrarDados(vmaximosInv, 5, 15);
                                        cout << endl;
                                        cout << (char)168 << "Lanzar dados? ";
                                        system("pause");
                                        system("cls");
                                        if(j<=1){ /// Ingreso despues de la ultima tirada
                                                gotoxy(14,5);
                                                for (o=1; o<46; o++) cout << (char)205; /// Comienzo del mensaje
                                                cout << (char)187;
                                                gotoxy(14,5);
                                                cout << (char)201;
                                                gotoxy(14,6);
                                                cout << (char)186 << "       " << (char)254 << " PUNTAJE ACUMULADO: " << sumamax << endl;
                                                if(sumamax>=20){ /// TIRO DE PUNTAJE
                                                    numGeneradorPuntos = 1 + posicionNumeroEnVector(vnumgenerador,6,sumamax);
                                                    if(numGeneradorPuntos == 0){ /// Si suma mayor a 25
                                                        numGeneradorPuntos = 6;
                                                    }
                                                gotoxy(59,6);
                                                cout << (char)186;
                                                gotoxy(14,7);
                                                cout << (char)186 << "       "  << (char)254 << " NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos << endl;
                                                gotoxy(59,7);
                                                cout << (char)186;
                                                gotoxy(1,8);
                                                cout <<(char)201;
                                                gotoxy(2,8);
                                                for (o=1; o<13; o++) cout << (char)205;
                                                gotoxy(11,8);
                                                for (o=1; o<63; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(14,8);
                                                cout << (char)202;
                                                gotoxy(59,8);
                                                cout << (char)202;
                                                cout << endl << (char)186 << " ULTIMO TIRO DE LA RONDA! POR CADA DADO CON EL VALOR " << numGeneradorPuntos  << " SE SUMAN PUNTOS."<< (char)186 << endl;
                                                gotoxy(0,10);
                                                cout << (char)200;
                                                for (o=1; o<72; o++) cout << (char)205;
                                                cout << (char)188 << endl;
                                                gotoxy(17,11);
                                                system("pause"); /// Fin del mensaje

                                                system("cls"); /// Comienzo del mensaje
                                                cargarAleatorio(vtirada,5,6);
                                                gotoxy(14,2);
                                                for (o=1; o<24; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(14,2);
                                                cout << (char)201;
                                                gotoxy(14,3);
                                                cout << (char)186 <<"     ULTIMO TIRO! " << endl;
                                                gotoxy(37,3);
                                                cout << (char)186;
                                                gotoxy(9,4);
                                                for (o=1; o<33; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(9,4);
                                                cout << (char)201;
                                                gotoxy(37,4);
                                                cout << (char)202;
                                                gotoxy(14,4);
                                                cout << (char)202;
                                                gotoxy(9,5);
                                                cout << (char)186 << " NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos;
                                                gotoxy(41,5);
                                                cout << (char)186;
                                                gotoxy(9,6);
                                                for (o=1; o<33; o++) cout << (char)205;
                                                gotoxy(9,6);
                                                cout << (char)200;
                                                gotoxy(41,6);
                                                cout << (char)188; /// Fin del mensaje

                                                mostrarDados(vtirada,5, 6);

                                                gotoxy(1,12);
                                                for (o=1; o<50; o++) cout << (char)205;
                                                cout << endl;
                                                cantDadosRep = contarNumerosRepetidos(vtirada,5,numGeneradorPuntos);
                                                if (cantDadosRep==0){
                                                    puntajeacumulado=0;
                                                    gotoxy(9,14); /// Comienzo del menasje
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    cout << (char)187;
                                                    gotoxy(9,14);
                                                    cout << (char)201;
                                                    gotoxy(9,15);
                                                    cout << (char)186 << "       PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    gotoxy(41,15);
                                                    cout << (char)186;
                                                    gotoxy(1,16);
                                                    for (o=1; o<49; o++) cout << (char)205;
                                                    gotoxy(1,16);
                                                    cout << (char)201;
                                                    gotoxy(9,16);
                                                    cout << (char)202;
                                                    gotoxy(41,16);
                                                    cout << (char)202;
                                                    gotoxy(49,16);
                                                    cout << (char)187;
                                                    gotoxy(1,17);
                                                    cout << (char)186 << "No hubo dados con el numero generador de puntos" << (char)186 << endl;
                                                    gotoxy(1,18);
                                                    for (o=1; o<49; o++) cout << (char)205;
                                                    gotoxy(1,18);
                                                    cout << (char)200;
                                                    gotoxy(49,18);
                                                    cout << (char)188;
                                                    cout << endl;/// Fin del mensaje

                                                    cRondas0++;
                                                }
                                                else{
                                                    puntajeacumulado = puntosapostados*cantDadosRep;
                                                    gotoxy(9,14);
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    cout << (char)187;
                                                    gotoxy(9,14);
                                                    cout << (char)201;
                                                    gotoxy(9,15);
                                                    cout << (char)186 << "       PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    gotoxy(41,15);
                                                    cout << (char)186;
                                                    gotoxy(9,16);
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    gotoxy(9,16);
                                                    cout << (char)200;
                                                    gotoxy(41,16);
                                                    cout << (char)188;
                                                    cout << endl;
                                                }
                                            }
                                            else{
                                                if (sumamax<=19){
                                                        system("cls");
                                                        puntajeacumulado = puntajeacumulado - puntosapostados;
                                                        if (puntajeacumulado<=0){
                                                            puntajeacumulado=0;
                                                            cRondas0++;
                                                        }
                                                        gotoxy(9,5);
                                                        for (o=1; o<51; o++) cout << (char)205;
                                                        cout << (char)187;
                                                        gotoxy(9,5);
                                                        cout << (char)201;
                                                        gotoxy(9,6);
                                                        cout << (char)186 << "Se restan los puntos apostados a su puntaje total" << endl;
                                                        gotoxy(59,6);
                                                        cout << (char)186;
                                                        gotoxy(9,7);
                                                        for (o=1; o<51; o++) cout << (char)205;
                                                        gotoxy(9,7);
                                                        cout << (char)200;
                                                        gotoxy(59,7);
                                                        cout << (char)188;
                                                        gotoxy(18,7);
                                                        cout << (char)203;
                                                        gotoxy(50,7);
                                                        cout << (char)203;
                                                        gotoxy(18,8);
                                                        cout << (char)186 << " Su nuevo puntaje es de: " << puntajefinal << endl;
                                                        gotoxy(50,8);
                                                        cout << (char)186;
                                                        gotoxy(18,9);
                                                        for (o=1; o<33; o++) cout << (char)205;
                                                        gotoxy(18,9);
                                                        cout << (char)200;
                                                        gotoxy(50,9);
                                                        cout << (char)188;
                                                        cout << endl;

                                                        cRondasP++;
                                                }
                                            }
                                    }
                            }
                            puntajefinal = puntajefinal + puntajeacumulado;
                            system("pause");
                        }
                        if(puntajefinal>=highestScore){
                            highestScore=puntajefinal;
                            strcpy(highestScorePlayer,player1);
                        }
                        ///DATOS SALIDA PARA ESTA OPCION
                        system("cls");
                        cout << "JUGADOR: " << player1 << endl;
                        for (o=1; o<55; o++) cout << (char)205;
                        cout << endl;
                        if(cRondas0==0){
                            cout << (char)254 << "  No hubo rondas sin puntos." << endl << endl;
                        }
                        else{
                            cout << (char)254 << "  Total de rondas sin puntos: " << cRondas0 << endl << endl;
                        }
                        if(cRondasP==0){
                            cout << (char)254 << "  No hubo rondas con perdida de puntos." << endl << endl;
                        }
                        else{
                            cout << (char)254 << "  Total de rondas con perdida de puntos: " << cRondasP << endl << endl;
                        }
                        for (o=1; o<55; o++) cout << (char)205;
                        cout << endl;
                        cout << "                  PUNTAJE FINAL: " << puntajefinal << endl;
                        for (o=1; o<55; o++) cout << (char)205;
                        cout << endl;
                        for (v=1; v<9; v++){gotoxy(55,v); cout << (char)186;}
                        gotoxy(55,2);
                        cout << (char)185;
                        gotoxy(55,7);
                        cout << (char)185;
                        gotoxy(55,9);
                        cout << (char)188;

}

void dosJugadores(){
    for(k=0 ; k<=5 ; k++){
        vnumgenerador[k]=20+k;
        }
    cout << "JUEGO NUEVO PARA 2 JUGADORES." << endl;
                        for (o=1; o<44; o++) cout << (char)205;
                        cout << endl;
                        cout << "Ingrese nombre del JUGADOR 1: ";
                        cin >> player1;
                        cout << endl;
                        cout << "Ingrese nombre del JUGADOR 2: ";
                        cin >> player2;
                        cout << endl;
                        cout << "Cantidad de rondas que desean jugar: ";
                        cin >> cantRondas;
                        system("cls");
                        puntajefinal1=0;
                        puntajefinal2=0;
                        for (i=1; i<=cantRondas; i++){/// RONDAS
                                for (o=1; o<55; o++) cout << (char)205;
                                cout << endl << player1 << ", cuantos puntos quiere apostar para esta ronda?:" << endl;
                                gotoxy(1,4);
                                for (o=1; o<55; o++) cout << (char)205;
                                gotoxy(1,3);
                                cin >> puntosapostados;
                                system("cls");
                                puntajeacumulado=0;
                                ntirada=0;
                                ponerCero(vmaximos,5);
                                for(j=5; j>=1; j--){/// TIRADAS
                                        cout << "JUGADOR: " << player1 << " " << (char)186;
                                        cout << " RONDA N" << (char)167 << i << " " << (char)186;
                                        cargarAleatorio(vtirada,j,6);
                                        maximo=valormaximoVector(vtirada,j);
                                        vmaximos[j-1]=maximo;
                                        sumamax=sumarVector(vmaximos,5);
                                        cout << " PUNTAJE ACUMULADO: " << sumamax << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        ntirada++;
                                        cout << "TIRADA N" << (char)167 << ntirada << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        mostrarDados(vtirada, j, 5);
                                        cout << endl;
                                        cout << "El valor maximo es: " << maximo << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        cout << "DADOS CON PUNTAJES MAXIMOS DE CADA TIRADA:";
                                        invertirVector(vmaximos, vmaximosInv, 5);
                                        mostrarDados(vmaximosInv, 5, 15);
                                        cout << endl;
                                        cout << (char)168 << "Lanzar dados? " << endl;
                                        system("pause");
                                        system("cls");
                                        if(j<=1){ /// Ingreso despues de la ultima tirada
                                                gotoxy(14,5);
                                                for (o=1; o<46; o++) cout << (char)205; /// Comienzo del mensaje
                                                cout << (char)187;
                                                gotoxy(14,5);
                                                cout << (char)201;
                                                gotoxy(14,6);
                                                cout << (char)186 << "       " << (char)254 << " PUNTAJE ACUMULADO: " << sumamax << endl;
                                                if(sumamax>=20){ /// TIRO DE PUNTAJE
                                                    numGeneradorPuntos = 1 + posicionNumeroEnVector(vnumgenerador,6,sumamax);
                                                    if(numGeneradorPuntos == 0){ /// Si suma mayor a 25
                                                        numGeneradorPuntos = 6;
                                                    }
                                                gotoxy(59,6);
                                                cout << (char)186;
                                                gotoxy(14,7);
                                                cout << (char)186 << "       "  << (char)254 << " NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos << endl;
                                                gotoxy(59,7);
                                                cout << (char)186;
                                                gotoxy(1,8);
                                                cout <<(char)201;
                                                gotoxy(2,8);
                                                for (o=1; o<13; o++) cout << (char)205;
                                                gotoxy(11,8);
                                                for (o=1; o<63; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(14,8);
                                                cout << (char)202;
                                                gotoxy(59,8);
                                                cout << (char)202;
                                                cout << endl << (char)186 << " ULTIMO TIRO DE LA RONDA! POR CADA DADO CON EL VALOR " << numGeneradorPuntos  << " SE SUMAN PUNTOS."<< (char)186 << endl;
                                                gotoxy(0,10);
                                                cout << (char)200;
                                                for (o=1; o<72; o++) cout << (char)205;
                                                cout << (char)188 << endl;
                                                gotoxy(17,11);
                                                system("pause"); /// Fin del mensaje

                                                system("cls"); /// Comienzo del mensaje
                                                cargarAleatorio(vtirada,5,6);
                                                gotoxy(14,2);
                                                for (o=1; o<24; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(14,2);
                                                cout << (char)201;
                                                gotoxy(14,3);
                                                cout << (char)186 << "     ULTIMO TIRO! " << endl;
                                                gotoxy(37,3);
                                                cout << (char)186;
                                                gotoxy(9,4);
                                                for (o=1; o<33; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(9,4);
                                                cout << (char)201;
                                                gotoxy(37,4);
                                                cout << (char)202;
                                                gotoxy(14,4);
                                                cout << (char)202;
                                                gotoxy(9,5);
                                                cout << (char)186 << " NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos;
                                                gotoxy(41,5);
                                                cout << (char)186;
                                                gotoxy(9,6);
                                                for (o=1; o<33; o++) cout << (char)205;
                                                gotoxy(9,6);
                                                cout << (char)200;
                                                gotoxy(41,6);
                                                cout << (char)188; /// Fin del mensaje

                                                mostrarDados(vtirada,5, 6);
                                                for (o=1; o<50; o++) cout << (char)205;
                                                cout << endl;
                                                cantDadosRep = contarNumerosRepetidos(vtirada,5,numGeneradorPuntos);
                                                if (cantDadosRep==0){
                                                    puntajeacumulado=0;
                                                    gotoxy(9,14); /// Comienzo del menasje
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    cout << (char)187;
                                                    gotoxy(9,14);
                                                    cout << (char)201;
                                                    gotoxy(9,15);
                                                    cout << (char)186 << "       PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    gotoxy(41,15);
                                                    cout << (char)186;
                                                    gotoxy(1,16);
                                                    for (o=1; o<49; o++) cout << (char)205;
                                                    gotoxy(1,16);
                                                    cout << (char)201;
                                                    gotoxy(9,16);
                                                    cout << (char)202;
                                                    gotoxy(41,16);
                                                    cout << (char)202;
                                                    gotoxy(49,16);
                                                    cout << (char)187;
                                                    gotoxy(1,17);
                                                    cout << (char)186 << "No hubo dados con el numero generador de puntos" << (char)186 << endl;
                                                    gotoxy(1,18);
                                                    for (o=1; o<49; o++) cout << (char)205;
                                                    gotoxy(1,18);
                                                    cout << (char)200;
                                                    gotoxy(49,18);
                                                    cout << (char)188;
                                                    cout << endl;/// Fin del mensaje
                                                }
                                                else{
                                                    puntajeacumulado = puntosapostados*cantDadosRep;gotoxy(9,14);
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    cout << (char)187;
                                                    gotoxy(9,14);
                                                    cout << (char)201;
                                                    gotoxy(9,15);
                                                    cout << (char)186 << "       PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    gotoxy(41,15);
                                                    cout << (char)186;
                                                    gotoxy(9,16);
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    gotoxy(9,16);
                                                    cout << (char)200;
                                                    gotoxy(41,16);
                                                    cout << (char)188;
                                                    cout << endl;
                                                    puntajefinal1 = puntajefinal1 + puntajeacumulado;
                                                }
                                           }
                                           else{
                                                if (sumamax<=19){
                                                        system("cls");
                                                        puntajefinal1 = puntajefinal1 - puntosapostados;
                                                        if (puntajefinal1<=0){
                                                            puntajefinal1=0;
                                                        }
                                                        gotoxy(9,5);
                                                        for (o=1; o<51; o++) cout << (char)205;
                                                        cout << (char)187;
                                                        gotoxy(9,5);
                                                        cout << (char)201;
                                                        gotoxy(9,6);
                                                        cout << (char)186 << "Se restan los puntos apostados a su puntaje total" << endl;
                                                        gotoxy(59,6);
                                                        cout << (char)186;
                                                        gotoxy(9,7);
                                                        for (o=1; o<51; o++) cout << (char)205;
                                                        gotoxy(9,7);
                                                        cout << (char)200;
                                                        gotoxy(59,7);
                                                        cout << (char)188;
                                                        gotoxy(18,7);
                                                        cout << (char)203;
                                                        gotoxy(50,7);
                                                        cout << (char)203;
                                                        gotoxy(18,8);
                                                        cout << (char)186 << " Su nuevo puntaje es de: " << puntajefinal1 << endl;
                                                        gotoxy(50,8);
                                                        cout << (char)186;
                                                        gotoxy(18,9);
                                                        for (o=1; o<33; o++) cout << (char)205;
                                                        gotoxy(18,9);
                                                        cout << (char)200;
                                                        gotoxy(50,9);
                                                        cout << (char)188;
                                                        cout << endl;
                                                    }
                                               }
                                        }
                                }
                                system("pause");
                                system("cls");
                /// JUGADOR 2

                                for (o=1; o<55; o++) cout << (char)205;
                                cout << endl << player2 << ", cuantos puntos quiere apostar para esta ronda?:" << endl;
                                gotoxy(1,4);
                                for (o=1; o<55; o++) cout << (char)205;
                                gotoxy(1,3);
                                cin >> puntosapostados;
                                system("cls");
                                puntajeacumulado=0;
                                ntirada=0;
                                ponerCero(vmaximos,5);
                                for(j=5; j>=1; j--){/// TIRADAS
                                        cout << "JUGADOR: " << player2 << " " << (char)186;
                                        cout << " RONDA N" << (char)167 << i << " " << (char)186;
                                        cargarAleatorio(vtirada,j,6);
                                        maximo=valormaximoVector(vtirada,j);
                                        vmaximos[j-1]=maximo;
                                        sumamax=sumarVector(vmaximos,5);
                                        cout << " PUNTAJE ACUMULADO: " << sumamax << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        ntirada++;
                                        cout << "TIRADA N" << (char)167 << ntirada << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        mostrarDados(vtirada, j, 5);
                                        cout << endl;
                                        cout << "El valor maximo es: " << maximo << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;
                                        cout << "DADOS CON PUNTAJES MAXIMOS DE CADA TIRADA:";
                                        invertirVector(vmaximos, vmaximosInv, 5);
                                        mostrarDados(vmaximosInv, 5, 15);
                                        cout << endl;
                                        cout << (char)168 << "Lanzar dados? " << endl;
                                        system("pause");
                                        system("cls");
                                        if(j<=1){ /// Ingreso despues de la ultima tirada
                                                gotoxy(14,5);
                                                for (o=1; o<46; o++) cout << (char)205; /// Comienzo del mensaje
                                                cout << (char)187;
                                                gotoxy(14,5);
                                                cout << (char)201;
                                                gotoxy(14,6);
                                                cout << (char)186 << "       " << (char)254 << " PUNTAJE ACUMULADO: " << sumamax << endl;
                                                if(sumamax>=20){ /// TIRO DE PUNTAJE
                                                    numGeneradorPuntos = 1 + posicionNumeroEnVector(vnumgenerador,6,sumamax);
                                                    if(numGeneradorPuntos == 0){ /// Si suma mayor a 25
                                                        numGeneradorPuntos = 6;
                                                    }
                                                gotoxy(59,6);
                                                cout << (char)186;
                                                gotoxy(14,7);
                                                cout << (char)186 << "       "  << (char)254 << " NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos << endl;
                                                gotoxy(59,7);
                                                cout << (char)186;
                                                gotoxy(1,8);
                                                cout <<(char)201;
                                                gotoxy(2,8);
                                                for (o=1; o<13; o++) cout << (char)205;
                                                gotoxy(11,8);
                                                for (o=1; o<63; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(14,8);
                                                cout << (char)202;
                                                gotoxy(59,8);
                                                cout << (char)202;
                                                cout << endl << (char)186 << " ULTIMO TIRO DE LA RONDA! POR CADA DADO CON EL VALOR " << numGeneradorPuntos  << " SE SUMAN PUNTOS."<< (char)186 << endl;
                                                gotoxy(0,10);
                                                cout << (char)200;
                                                for (o=1; o<72; o++) cout << (char)205;
                                                cout << (char)188 << endl;
                                                gotoxy(17,11);
                                                system("pause"); /// Fin del mensaje

                                                system("cls"); /// Comienzo del mensaje
                                                cargarAleatorio(vtirada,5,6);
                                                gotoxy(14,2);
                                                for (o=1; o<24; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(14,2);
                                                cout << (char)201;
                                                gotoxy(14,3);
                                                cout << (char)186 << "     ULTIMO TIRO! " << endl;
                                                gotoxy(37,3);
                                                cout << (char)186;
                                                gotoxy(9,4);
                                                for (o=1; o<33; o++) cout << (char)205;
                                                cout << (char)187;
                                                gotoxy(9,4);
                                                cout << (char)201;
                                                gotoxy(37,4);
                                                cout << (char)202;
                                                gotoxy(14,4);
                                                cout << (char)202;
                                                gotoxy(9,5);
                                                cout << (char)186 << " NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos;
                                                gotoxy(41,5);
                                                cout << (char)186;
                                                gotoxy(9,6);
                                                for (o=1; o<33; o++) cout << (char)205;
                                                gotoxy(9,6);
                                                cout << (char)200;
                                                gotoxy(41,6);
                                                cout << (char)188; /// Fin del mensaje

                                               mostrarDados(vtirada,5, 6);
                                                for (o=1; o<50; o++) cout << (char)205;
                                                cout << endl;
                                                cantDadosRep = contarNumerosRepetidos(vtirada,5,numGeneradorPuntos);
                                                if (cantDadosRep==0){
                                                    gotoxy(9,14); /// Comienzo del menasje
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    cout << (char)187;
                                                    gotoxy(9,14);
                                                    cout << (char)201;
                                                    gotoxy(9,15);
                                                    cout << (char)186 << "       PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    gotoxy(41,15);
                                                    cout << (char)186;
                                                    gotoxy(1,16);
                                                    for (o=1; o<49; o++) cout << (char)205;
                                                    gotoxy(1,16);
                                                    cout << (char)201;
                                                    gotoxy(9,16);
                                                    cout << (char)202;
                                                    gotoxy(41,16);
                                                    cout << (char)202;
                                                    gotoxy(49,16);
                                                    cout << (char)187;
                                                    gotoxy(1,17);
                                                    cout << (char)186 << "No hubo dados con el numero generador de puntos" << (char)186 << endl;
                                                    gotoxy(1,18);
                                                    for (o=1; o<49; o++) cout << (char)205;
                                                    gotoxy(1,18);
                                                    cout << (char)200;
                                                    gotoxy(49,18);
                                                    cout << (char)188;
                                                    cout << endl;/// Fin del mensaje
                                                }
                                                else{
                                                    puntajeacumulado = puntosapostados*cantDadosRep;
                                                    gotoxy(9,14);
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    cout << (char)187;
                                                    gotoxy(9,14);
                                                    cout << (char)201;
                                                    gotoxy(9,15);
                                                    cout << (char)186 << "       PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    gotoxy(41,15);
                                                    cout << (char)186;
                                                    gotoxy(9,16);
                                                    for (o=1; o<33; o++) cout << (char)205;
                                                    gotoxy(9,16);
                                                    cout << (char)200;
                                                    gotoxy(41,16);
                                                    cout << (char)188;
                                                    cout << endl;
                                                    puntajefinal2 = puntajefinal2 + puntajeacumulado;
                                                    }
                                           }
                                           else{
                                                if (sumamax<=19){
                                                        puntajefinal2 = puntajefinal2 - puntosapostados;
                                                        if (puntajefinal2<=0){
                                                            puntajefinal2=0;
                                                        }
                                                        gotoxy(9,5);
                                                        for (o=1; o<51; o++) cout << (char)205;
                                                        cout << (char)187;
                                                        gotoxy(9,5);
                                                        cout << (char)201;
                                                        gotoxy(9,6);
                                                        cout << (char)186 << "Se restan los puntos apostados a su puntaje total" << endl;
                                                        gotoxy(59,6);
                                                        cout << (char)186;
                                                        gotoxy(9,7);
                                                        for (o=1; o<51; o++) cout << (char)205;
                                                        gotoxy(9,7);
                                                        cout << (char)200;
                                                        gotoxy(59,7);
                                                        cout << (char)188;
                                                        gotoxy(18,7);
                                                        cout << (char)203;
                                                        gotoxy(50,7);
                                                        cout << (char)203;
                                                        gotoxy(18,8);
                                                        cout << (char)186 << " Su nuevo puntaje es de: " << puntajefinal2 << endl;
                                                        gotoxy(50,8);
                                                        cout << (char)186;
                                                        gotoxy(18,9);
                                                        for (o=1; o<33; o++) cout << (char)205;
                                                        gotoxy(18,9);
                                                        cout << (char)200;
                                                        gotoxy(50,9);
                                                        cout << (char)188;
                                                        cout << endl;
                                                    }
                                               }
                                        }
                                }
                                system("pause");
                                system("cls");
                            }
                            /// OPCION 3 CASE: PUNTUACION MAS ALTA
                            if(puntajefinal1 >= puntajefinal2){
                                    if(puntajefinal1 >= highestScore){
                                        highestScore = puntajefinal1;
                                        strcpy(highestScorePlayer,player1);
                                    }
                            }
                            else{
                                if(puntajefinal2 >= puntajefinal1){
                                    if(puntajefinal2 >= highestScore){
                                        highestScore = puntajefinal2;
                                        strcpy(highestScorePlayer,player2);
                                    }
                                }
                            }
                            ///DATOS DE SALIDA PARA ESTA OPCION
                            if(puntajefinal1>=puntajefinal2){
                                if(puntajefinal1>puntajefinal2){
                                    gotoxy(14,2);
                                    cout << (char)201;
                                    gotoxy(15,2);
                                    for (o=1; o<23; o++) cout << (char)205;
                                    cout << (char)187;
                                    gotoxy(14,3);
                                    cout << (char)186 << "       GANADOR: ";
                                    gotoxy(37,3);
                                    cout << (char)186 << endl;
                                    gotoxy(14,4);
                                    cout << (char)186 << "     " << player1;
                                    gotoxy(37,4);
                                    cout << (char)186;
                                    gotoxy(14,5);
                                    cout << (char)204;
                                    gotoxy(15,5);
                                    for (o=1; o<23; o++) cout << (char)205;
                                    gotoxy(37,5);
                                    cout << (char)185;
                                    gotoxy(14,6);
                                    cout << (char)186 << " PUNTAJE FINAL: " << puntajefinal1;
                                    gotoxy(37,6);
                                    cout << (char)186;
                                    gotoxy(14,7);
                                    cout << (char)200;
                                    gotoxy(15,7);
                                    for (o=1; o<23; o++) cout << (char)205;
                                    gotoxy(37,7);
                                    cout << (char)188;
                                }
                                else{
                                    gotoxy(14,2);
                                    cout << (char)201;
                                    gotoxy(15,2);
                                    for (o=1; o<23; o++) cout << (char)205;
                                    cout << (char)187;
                                    gotoxy(14,3);
                                    cout << (char)186 << "        EMPATE. ";
                                    gotoxy(37,3);
                                    cout << (char)186 << endl;
                                    gotoxy(14,4);
                                    cout << (char)204;
                                    gotoxy(15,4);
                                    for (o=1; o<23; o++) cout << (char)205;
                                    gotoxy(37,4);
                                    cout << (char)185;
                                    gotoxy(14,5);
                                    cout << (char)186 << " PUNTAJE FINAL: " << puntajefinal1;
                                    gotoxy(37,5);
                                    cout << (char)186;
                                    gotoxy(14,6);
                                    cout << (char)200;
                                    gotoxy(15,6);
                                    for (o=1; o<23; o++) cout << (char)205;
                                    gotoxy(37,6);
                                    cout << (char)188;
                                }
                            }
                            else{
                                gotoxy(14,2);
                                cout << (char)201;
                                gotoxy(15,2);
                                for (o=1; o<23; o++) cout << (char)205;
                                cout << (char)187;
                                gotoxy(14,3);
                                cout << (char)186 << "       GANADOR: ";
                                gotoxy(37,3);
                                cout << (char)186 << endl;
                                gotoxy(14,4);
                                cout << (char)186 << "     " << player2;
                                gotoxy(37,4);
                                cout << (char)186;
                                gotoxy(14,5);
                                cout << (char)204;
                                gotoxy(15,5);
                                for (o=1; o<23; o++) cout << (char)205;
                                gotoxy(37,5);
                                cout << (char)185;
                                gotoxy(14,6);
                                cout << (char)186 << " PUNTAJE FINAL: " << puntajefinal2;
                                gotoxy(37,6);
                                cout << (char)186;
                                gotoxy(14,7);
                                cout << (char)200;
                                gotoxy(15,7);
                                for (o=1; o<23; o++) cout << (char)205;
                                gotoxy(37,7);
                                cout << (char)188;
                            }
}

void puntuacionAlta(){
    cout << "PUNTUACION MAS ALTA: " << highestScore << endl;
    for (o=1; o<44; o++) cout << (char)205;
    cout << endl;
    cout << "JUGADOR: " << highestScorePlayer << endl;
}

void modoSimulado(){
    for(k=0 ; k<=5 ; k++){
        vnumgenerador[k]=20+k;
        }
    cout << "MODO SIMULADO (CARGA DE DATOS MANUAL)." << endl;
                        for (o=1; o<55; o++) cout << (char)205;
                        cout << endl;
                        cout << "1. "<< (char)254 << " JUEGO NUEVO PARA UN JUGADOR." << endl;
                        cout << "2. "<< (char)254 << " JUEGO NUEVO PARA DOS JUGADORES." << endl;
                        cout << "Seleccione el modo de juego: ";
                        cin >> opcM;
                        system("cls");
                        if(opcM==1){ /// JUEGO NUEVO 1 JUGADOR
                            cout << "Ingrese nombre del jugador: ";
                            cin >> player1;
                            cout << endl;
                            cout << "Cantidad de rondas que desea jugar: ";
                            cin >> cantRondas;
                            cout << endl;
                            puntajefinal=0;
                            cRondas0=0;
                            cRondasP=0;
                            for (i=1; i<=cantRondas; i++){ /// RONDAS
                                system("cls");
                                for (o=1; o<55; o++) cout << (char)205;
                                cout << endl << "Cuantos puntos quiere apostar para esta ronda?: "<<endl;
                                for (o=1; o<55; o++) cout << (char)205;
                                gotoxy(49,2);
                                cin >> puntosapostados;
                                system("cls");
                                ntirada=0;
                                ponerCero(vmaximos,5);
                                for(j=5; j>=1; j--){ /// TIRADAS
                                        cout << "JUGADOR: " << player1 << " " << (char)186;
                                        cout << " RONDA N" << (char)167 << i << " " << (char)186;
                                        ntirada++;
                                        cout << "TIRADA N" << (char)167 << ntirada << endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl;

                                        ponerCero(vtirada,5);
                                        cargarMostrarDados(vtirada, j, 3);

                                        maximo=valormaximoVector(vtirada,5);
                                        vmaximos[j-1]=maximo;

                                        cout <<  endl;
                                        for (o=1; o<55; o++) cout << (char)205;
                                                cout << endl;
                                                cout << "DADOS CON PUNTAJES MAXIMOS DE CADA TIRADA:";

                                                invertirVector(vmaximos, vmaximosInv, 5);
                                                mostrarDados(vmaximosInv, 5, 12);

                                                cout << endl;
                                                cout << (char)168 << "Lanzar dados? ";
                                                system("pause");
                                                system("cls");
                                        if(j<=1){ /// Ingreso despues de la ultima tirada
                                            sumamax=sumarVector(vmaximos,5);
                                            cout << "PUNTAJE ACUMULADO: " << sumamax << endl;
                                               if(sumamax>=20){ /// TIRO DE PUNTAJE
                                                    numGeneradorPuntos = 1 + posicionNumeroEnVector(vnumgenerador,6,sumamax);
                                                    if(numGeneradorPuntos == 0){
                                                        numGeneradorPuntos = 6;
                                                    }
                                                    cout << "NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos << endl;
                                                    cout << "ULTIMO TIRO DE LA RONDA. POR CADA DADO CON EL VALOR " << numGeneradorPuntos  << " SE SUMAN PUNTOS." << endl;
                                                    for (o=1; o<55; o++) cout << (char)205;
                                                    cout << endl;
                                                    system("pause");

                                                    ponerCero(vtirada,5);
                                                    cargarMostrarDados(vtirada, 5, 6);

                                                    cout << endl;
                                                    cantDadosRep = contarNumerosRepetidos(vtirada,5,numGeneradorPuntos);
                                                    if (cantDadosRep==0){
                                                        puntajeacumulado=0;
                                                        cout << "No hubo dados con el numero generador de puntos." << endl << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                        cRondas0++;
                                                    }
                                                    else{
                                                        puntajeacumulado = puntosapostados*cantDadosRep;
                                                        cout << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                    }
                                               }
                                               else{
                                                    if (sumamax<=19){
                                                            cout << "Se restan los puntos de apuesta a su puntaje final." << endl;
                                                            puntajeacumulado = puntajeacumulado - puntosapostados;
                                                            if (puntajeacumulado<=0){
                                                                puntajeacumulado=0;
                                                                cRondas0++;
                                                            }
                                                            cout << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                            cRondasP++;
                                                    }
                                               }
                                        }
                                }
                                puntajefinal = puntajefinal + puntajeacumulado;

                                system("pause");
                                 system("cls");

                                for (o=1; o<44; o++) cout << (char)205;
                                cout << endl;
                            }
                            if(puntajefinal>=highestScore){
                                highestScore=puntajefinal;
                                strcpy(highestScorePlayer,player1);
                            }
                            ///DATOS DE SALIDA PARA ESTA OPCION

                            cout << "JUGADOR: " << player1 << endl;
                            if(cRondas0==0){
                                    cout << "No hubo rondas sin puntos." << endl;
                            }
                            else{
                                cout << "Total de rondas sin puntos: " << cRondas0 << endl;
                            }
                            if(cRondasP==0){
                                cout << "No hubo rondas con perdida de puntos." << endl;
                            }
                            else{
                                cout << "Total de rondas con perdida de puntos: " << cRondasP << endl;
                            }

                            cout << "PUNTAJE FINAL: " << puntajefinal << endl;
                            system("pause");
                            system("cls");

                        }
                        else{
                            if(opcM==2){ /// JUEGO NUEVO 2 JUGADORES
                                cout << "JUEGO NUEVO PARA 2 JUGADORES." << endl;
                                for (o=1; o<44; o++) cout << (char)205;
                                cout << endl;
                                cout << "Ingrese nombre del JUGADOR 1: ";
                                cin >> player1;
                                cout << endl;
                                cout << "Ingrese nombre del JUGADOR 2: ";
                                cin >> player2;
                                cout << endl;
                                cout << "Cantidad de rondas que desean jugar: ";
                                cin >> cantRondas;
                                system("cls");
                                puntajefinal1=0;
                                puntajefinal2=0;
                                for (i=1; i<=cantRondas; i++){/// RONDAS
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl << player1 << ", cuantos puntos quiere apostar para esta ronda?:" << endl;
                                        gotoxy(1,4);
                                        for (o=1; o<55; o++) cout << (char)205;
                                        gotoxy(1,3);
                                        cin >> puntosapostados;
                                        system("cls");
                                        puntajeacumulado=0;
                                        ntirada=0; /// reinicio el numero de tirada en cada ronda
                                        ponerCero(vmaximos,5); /// 0 al vmaximos de tiradas, en cada ronda
                                        for(j=5; j>=1; j--){/// TIRADAS
                                                cout << "JUGADOR: " << player1 << " " << (char)186;
                                                cout << " RONDA N" << (char)167 << i << " " << (char)186;
                                                ntirada++;
                                                cout << " TIRADA N" << (char)167 << ntirada << endl;
                                                for (o=1; o<55; o++) cout << (char)205;
                                                cout << endl;

                                                ponerCero(vtirada,5);
                                                cargarMostrarDados(vtirada, j, 3);  /// Carga los dados y los muestra simultaneamente

                                                maximo=valormaximoVector(vtirada,j);
                                                vmaximos[j-1]=maximo;
                                                cout << "El valor maximo es: " << maximo << endl;
                                                for (o=1; o<55; o++) cout << (char)205;
                                                cout << endl;
                                                cout << "DADOS CON PUNTAJES MAXIMOS DE CADA TIRADA:";

                                                invertirVector(vmaximos, vmaximosInv, 5);
                                                mostrarDados(vmaximosInv, 5, 12);

                                                cout << endl;
                                                cout << (char)168 << "Lanzar dados? ";
                                                system("pause");
                                                system("cls");
                                                if(j<=1){ /// Ingreso despues de la ultima tirada
                                                    sumamax=sumarVector(vmaximos,5);
                                                    cout << "PUNTAJE ACUMULADO: " << sumamax << endl;
                                                       if(sumamax>=20){ /// TIRO DE PUNTAJE
                                                            numGeneradorPuntos = 1 + posicionNumeroEnVector(vnumgenerador,6,sumamax);
                                                            if(numGeneradorPuntos == 0){
                                                                numGeneradorPuntos = 6;
                                                            }
                                                            cout << "NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos << endl;
                                                            cout << "ULTIMO TIRO DE LA RONDA. POR CADA DADO CON EL VALOR " << numGeneradorPuntos  << " SE SUMAN PUNTOS." << endl;
                                                            for (o=1; o<55; o++) cout << (char)205;
                                                            cout << endl;
                                                            system("pause");

                                                            ponerCero(vtirada,5);
                                                            cargarMostrarDados(vtirada, 5, 6);

                                                            cantDadosRep = contarNumerosRepetidos(vtirada,5,numGeneradorPuntos);
                                                            if (cantDadosRep==0){
                                                                puntajeacumulado=0;
                                                                cout << "No hubo dados con el numero generador de puntos." << endl;
                                                                cout << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                            }
                                                            else{
                                                                    puntajeacumulado = puntosapostados*cantDadosRep;
                                                                    cout << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                                    puntajefinal1 = puntajefinal1 + puntajeacumulado;
                                                            }
                                                       }
                                                       else{
                                                            if (sumamax<=19){
                                                                    cout << "Se restan los puntos de apuesta a su puntaje final." << endl;
                                                                    puntajefinal1 = puntajefinal1 - puntosapostados;
                                                                    if (puntajefinal1<=0){
                                                                        puntajefinal1=0;
                                                                    }
                                                                    cout << endl << "PUNTAJE PARCIAL: " << puntajefinal1 << endl;
                                                            }
                                                       }
                                                }
                                        }
                                        system("pause");
                                        system("cls");
                            ///JUGADOR 2
                                        for (o=1; o<55; o++) cout << (char)205;
                                        cout << endl << player2 << ", cuantos puntos quiere apostar para esta ronda?:" << endl;
                                        gotoxy(1,4);
                                        for (o=1; o<55; o++) cout << (char)205;
                                        gotoxy(1,3);
                                        cin >> puntosapostados;
                                        system("cls");
                                        puntajeacumulado=0;
                                        ntirada=0;
                                        ponerCero(vmaximos,5);
                                        for(j=5; j>=1; j--){ /// TIRADAS
                                                cout << "JUGADOR: " << player2 << " " << (char)186;
                                                cout << " RONDA N" << (char)167 << i << " " << (char)186;
                                                ntirada++;
                                                cout << " TIRADA N" << (char)167 << ntirada << endl;
                                                for (o=1; o<55; o++) cout << (char)205;
                                                cout << endl;

                                                ponerCero(vtirada,5);
                                                cargarMostrarDados(vtirada, j, 3);  /// Carga los dados y los muestra simultaneamente

                                                maximo=valormaximoVector(vtirada,j);
                                                vmaximos[j-1]=maximo;
                                                cout << "El valor maximo es: " << maximo << endl;
                                                for (o=1; o<55; o++) cout << (char)205;
                                                        cout << endl;
                                                        cout << "DADOS CON PUNTAJES MAXIMOS DE CADA TIRADA:";

                                                        invertirVector(vmaximos, vmaximosInv, 5);
                                                        mostrarDados(vmaximosInv, 5, 12);

                                                        cout << endl;
                                                        cout << (char)168 << "Lanzar dados? ";
                                                        cout << endl<< endl<< endl<< endl;
                                                        system("pause");
                                                        system("cls");
                                                if(j<=1){ /// Ingreso despues de la ultima tirada
                                                    sumamax=sumarVector(vmaximos,5);
                                                    cout << "PUNTAJE ACUMULADO: " << sumamax << endl;
                                                       if(sumamax>=20){ /// TIRO DE PUNTAJE
                                                            numGeneradorPuntos = 1 + posicionNumeroEnVector(vnumgenerador,6,sumamax);
                                                            if(numGeneradorPuntos == 0){
                                                                numGeneradorPuntos = 6;
                                                            }
                                                            cout << "NUMERO GENERADOR DE PUNTOS: " << numGeneradorPuntos << endl;
                                                            cout << "ULTIMO TIRO DE LA RONDA. POR CADA DADO CON EL VALOR " << numGeneradorPuntos  << " SE SUMAN PUNTOS." << endl;
                                                            for (o=1; o<55; o++) cout << (char)205;
                                                            cout << endl;
                                                            system("pause");

                                                            ponerCero(vtirada,5);
                                                            cargarMostrarDados(vtirada, 5, 6);

                                                            cout << endl;
                                                            cantDadosRep = contarNumerosRepetidos(vtirada,5,numGeneradorPuntos);
                                                            if (cantDadosRep==0){
                                                                puntajeacumulado=0;
                                                                cout << "No hubo dados con el numero generador de puntos." << endl;
                                                                cout << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                            }
                                                            else{
                                                                    puntajeacumulado = puntosapostados*cantDadosRep;
                                                                    cout << "PUNTAJE PARCIAL: " << puntajeacumulado << endl;
                                                                    puntajefinal2 = puntajefinal2 + puntajeacumulado;
                                                            }
                                                       }
                                                       else{
                                                            if (sumamax<=19){
                                                                    cout << "Se restan los puntos de apuesta a su puntaje final." << endl;
                                                                    puntajefinal2 = puntajefinal2 - puntosapostados;
                                                                    if (puntajefinal2<=0){
                                                                        puntajefinal2=0;
                                                                    }
                                                                    cout << "PUNTAJE PARCIAL: " << puntajefinal2 << endl;
                                                            }
                                                       }
                                                }
                                        }
                                        system("pause");
                                        system("cls");
                                    }
                                    /// OPCION 3 CASE: PUNTUACION MAS ALTA
                                    if(puntajefinal1 >= puntajefinal2){
                                            if(puntajefinal1 >= highestScore){
                                                highestScore = puntajefinal1;
                                                strcpy(highestScorePlayer,player1);
                                            }
                                    }
                                    else{
                                        if(puntajefinal2 >= puntajefinal1){
                                            if(puntajefinal2 >= highestScore){
                                                highestScore = puntajefinal2;
                                                strcpy(highestScorePlayer,player2);
                                            }
                                        }
                                    }
                                    ///DATOS DE SALIDA PARA ESTA OPCION
                                    if(puntajefinal1>=puntajefinal2){
                                        if(puntajefinal1>puntajefinal2){
                                            gotoxy(14,2);
                                            cout << (char)201;
                                            gotoxy(15,2);
                                            for (o=1; o<23; o++) cout << (char)205;
                                            cout << (char)187;
                                            gotoxy(14,3);
                                            cout << (char)186 << "       GANADOR: ";
                                            gotoxy(37,3);
                                            cout << (char)186 << endl;
                                            gotoxy(14,4);
                                            cout << (char)186 << "     " << player1;
                                            gotoxy(37,4);
                                            cout << (char)186;
                                            gotoxy(14,5);
                                            cout << (char)204;
                                            gotoxy(15,5);
                                            for (o=1; o<23; o++) cout << (char)205;
                                            gotoxy(37,5);
                                            cout << (char)185;
                                            gotoxy(14,6);
                                            cout << (char)186 << " PUNTAJE FINAL: " << puntajefinal1;
                                            gotoxy(37,6);
                                            cout << (char)186;
                                            gotoxy(14,7);
                                            cout << (char)200;
                                            gotoxy(15,7);
                                            for (o=1; o<23; o++) cout << (char)205;
                                            gotoxy(37,7);
                                            cout << (char)188;
                                        }
                                        else{
                                            gotoxy(14,2);
                                            cout << (char)201;
                                            gotoxy(15,2);
                                            for (o=1; o<23; o++) cout << (char)205;
                                            cout << (char)187;
                                            gotoxy(14,3);
                                            cout << (char)186 << "        EMPATE. ";
                                            gotoxy(37,3);
                                            cout << (char)186 << endl;
                                            gotoxy(14,4);
                                            cout << (char)204;
                                            gotoxy(15,4);
                                            for (o=1; o<23; o++) cout << (char)205;
                                            gotoxy(37,4);
                                            cout << (char)185;
                                            gotoxy(14,5);
                                            cout << (char)186 << " PUNTAJE FINAL: " << puntajefinal1;
                                            gotoxy(37,5);
                                            cout << (char)186;
                                            gotoxy(14,6);
                                            cout << (char)200;
                                            gotoxy(15,6);
                                            for (o=1; o<23; o++) cout << (char)205;
                                            gotoxy(37,6);
                                            cout << (char)188;
                                        }
                                    }
                                    else{
                                        gotoxy(14,2);
                                        cout << (char)201;
                                        gotoxy(15,2);
                                        for (o=1; o<23; o++) cout << (char)205;
                                        cout << (char)187;
                                        gotoxy(14,3);
                                        cout << (char)186 << "       GANADOR: ";
                                        gotoxy(37,3);
                                        cout << (char)186 << endl;
                                        gotoxy(14,4);
                                        cout << (char)186 << "     " << player2;
                                        gotoxy(37,4);
                                        cout << (char)186;
                                        gotoxy(14,5);
                                        cout << (char)204;
                                        gotoxy(15,5);
                                        for (o=1; o<23; o++) cout << (char)205;
                                        gotoxy(37,5);
                                        cout << (char)185;
                                        gotoxy(14,6);
                                        cout << (char)186 << " PUNTAJE FINAL: " << puntajefinal2;
                                        gotoxy(37,6);
                                        cout << (char)186;
                                        gotoxy(14,7);
                                        cout << (char)200;
                                        gotoxy(15,7);
                                        for (o=1; o<23; o++) cout << (char)205;
                                        gotoxy(37,7);
                                        cout << (char)188;
                                    }
                                    system("pause");
                                }
                        }
}



#endif // MENU_H_INCLUDED
