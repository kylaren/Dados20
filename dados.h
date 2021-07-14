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

void cara1(int i, int y){
     ///DADO 1
    gotoxy((10*i+1),(y+5));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+6));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+7));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+7));
    cout<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+7));
    cout<<char(186);
    gotoxy((10*i+1),(y+8));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+9));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara2(int i, int y){
    gotoxy((10*i+1),(y+5));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+6));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+7));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+7));
    cout<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+7));
    cout<<char(186);
    gotoxy((10*i+1),(y+8));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+9));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara3(int i, int y){
    gotoxy((10*i+1),(y+5));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+6));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+7));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+7));
    cout<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+7));
    cout<<char(186);
    gotoxy((10*i+1),(y+8));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+9));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara4(int i, int y){
    gotoxy((10*i+1),(y+5));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+6));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+7));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+7));
    cout<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+7));
    cout<<char(186);
    gotoxy((10*i+1),(y+8));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+9));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

}

void cara5(int i, int y){
    gotoxy((10*i+1),(y+5));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+6));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+7));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+7));
    cout<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+7));
    cout<<char(186);
    gotoxy((10*i+1),(y+8));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+9));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara6(int i, int y){
    gotoxy((10*i+1),(y+5));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+6));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+7));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+7));
    cout<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255);
    gotoxy(((10*i+1)+8),(y+7));
    cout<<char(186);
    gotoxy((10*i+1),(y+8));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+9));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}
#endif // DADOS_H_INCLUDED
