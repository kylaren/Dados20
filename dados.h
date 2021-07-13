#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

/// DECLARACION DE VARIABLES

extern int i; /// extern para declarar sin inicializar la variable (ya se inicializo en menu)


/// DECLARACION DE FUNCIONES

void cara1(); /// cara 1
void cara2(); /// cara 2
void cara3(); /// cara 3
void cara4(); /// cara 4
void cara5(); /// cara 5
void cara6(); /// cara 6


/// DEFINICIONES DE FUNCIONES

void cara1(){
    cout << char(218);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(191) << endl;
    cout << char(179) << "       " << char(179) << endl;
    cout << char(179) << "   " << char(254) << "   " << char(179) << endl;
    cout << char(179) << "       " << char(179) << endl;
    cout << char(192);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(217) << endl;
}

void cara2(){
    cout << char(218);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(191) << endl;
    cout << char(179) << " " << char (254) << "     " << char(179) << endl;
    cout << char(179) << "       " << char(179) << endl;
    cout << char(179) << "     " << char(254) << " " << char(179) << endl;
    cout << char(192);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(217) << endl;
}

void cara3(){
    cout << char(218);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(191) << endl;
    cout << char(179) << " " << char (254) << "     " << char(179) << endl;
    cout << char(179) << "   " << char(254) << "   " << char(179) << endl;
    cout << char(179) << "     " << char(254) << " " << char(179) << endl;
    cout << char(192);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(217) << endl;
}

void cara4(){
    cout << char(218);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(191) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(179) << "       " << char(179) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(192);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(217) << endl;
}

void cara5(){
    cout << char(218);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(191) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(179) << "   " << char(254) << "   " << char(179) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(192);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(217) << endl;
}

void cara6(){
    cout << char(218);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(191) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(179) << " " << char (254) << "   " << char(254) << " " << char(179) << endl;
    cout << char(192);
    for (i=1; i<8; i++) cout << (char)196;
    cout << char(217) << endl;
}
#endif // DADOS_H_INCLUDED
