#ifndef DADOS_H_INCLUDED
#define DADOS_H_INCLUDED

/// DECLARACION DE FUNCIONES

void cara1(); /// Cara 1
void cara2(); /// Cara 2
void cara3(); /// Cara 3
void cara4(); /// Cara 4
void cara5(); /// Cara 5
void cara6(); /// Cara 6


/// DEFINICIONES DE FUNCIONES

void cara1(int i, int y){
    gotoxy((10*i+1),(y+1));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+2));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+3));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+3));
    cout<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+3));
    cout<<char(186);
    gotoxy((10*i+1),(y+4));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+5));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara2(int i, int y){
    gotoxy((10*i+1),(y+1));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+2));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+3));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+3));
    cout<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+3));
    cout<<char(186);
    gotoxy((10*i+1),(y+4));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+5));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara3(int i, int y){
    gotoxy((10*i+1),(y+1));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+2));
    cout<<char(186)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+3));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+3));
    cout<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+3));
    cout<<char(186);
    gotoxy((10*i+1),(y+4));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+5));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara4(int i, int y){
    gotoxy((10*i+1),(y+1));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+2));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+3));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+3));
    cout<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+3));
    cout<<char(186);
    gotoxy((10*i+1),(y+4));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+5));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;

}

void cara5(int i, int y){
    gotoxy((10*i+1),(y+1));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+2));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+3));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+3));
    cout<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255);
    gotoxy(((10*i+1)+8),(y+3));
    cout<<char(186);
    gotoxy((10*i+1),(y+4));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+5));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}

void cara6(int i, int y){
    gotoxy((10*i+1),(y+1));
    cout<<char(201)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(187);
    gotoxy((10*i+1),(y+2));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+3));
    cout<<char(186);
    gotoxy(((10*i+1)+1),(y+3));
    cout<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255);
    gotoxy(((10*i+1)+8),(y+3));
    cout<<char(186);
    gotoxy((10*i+1),(y+4));
    cout<<char(186)<<char(255)<<char(254)<<char(255)<<char(255)<<char(255)<<char(254)<<char(255)<<char(186);
    gotoxy((10*i+1),(y+5));
    cout<<char(200)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(205)<<char(188)<<endl;
}
#endif // DADOS_H_INCLUDED
