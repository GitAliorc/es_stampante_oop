#include<stampante.h>

Stampante::Stampante(int c,int m , int y,int k){C = c; M = m; Y = y; K = k;};

void Stampante::sostituzione(char x){
    x = std::toupper(x);
    switch (x)
    {
    case 67:
        C = 100;
        break;
    case 77:
        M = 100;
        break;
    case 89:
        Y = 100;
        break;
    case 75:
        K = 100;
        break;
    }
};

 void Stampante::percentuale(char x){
    x = std::toupper(x);
    switch (x)
    {
    case 67:
        std::cout << "C: " << C << "%";
        break;
    case 77:
        std::cout << "M: " << M << "%";
        break;
    case 89:
        std::cout << "Y: " << Y << "%";
        break;
    case 75:
        std::cout << "K: " << K << "%";
        break;
    }
};

void Stampante::stampa(int copie, int c, int m, int y, int k){
    if(C > c * copie && M > m * copie && Y > y * copie && K > k * copie){
        std::cout << copie << " copia/e eseguite con successo";
        C -= c*copie; M -= m*copie; Y -= y*copie; K -= k*copie;
    }else{
        std::cout << "Livello di inchiostro troppo basso!" << std::endl;
    }
};

void Stampante::menu(){
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "*****MENU' STAMPANTE*****" << std::endl
              << "1) Stampa" << std::endl
              << "2) Percentuale inchiostro" << std::endl
              << "3) Ricarica inchiostro" << std::endl;
};