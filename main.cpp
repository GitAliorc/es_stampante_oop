#include "stampante.h"

int main(){
    int c,m,y,k,scelta;
    std::cout << "Inserire le percentuali di carica dell'inchiostro" << std::endl;
    std::cout << "C    >>> "; std::cin >> c;
    std::cout << "M    >>> "; std::cin >> m;
    std::cout << "Y    >>> "; std::cin >> y;
    std::cout << "K    >>> "; std::cin >> k;
    Stampante s = Stampante(c,m,y,k);
    loop:
    s.menu();
    std::cout << ">>> "; std::cin >> scelta;
    switch(scelta){
        case 1:
            int cR, mR, yR, kR, copie;
            std::cout << std::endl << "Selezionare il numero di copie   >>> "; std::cin >> copie;
            std::cout << std::endl << "Inserire percentuale di C necessario   >>> "; std::cin >> cR;
            std::cout << std::endl << "Inserire percentuale di M necessario   >>> "; std::cin >> mR;
            std::cout << std::endl << "Inserire percentuale di Y necessario   >>> "; std::cin >> yR;
            std::cout << std::endl << "Inserire percentuale di K necessario   >>> "; std::cin >> kR;
            s.stampa(copie, cR,mR,yR,kR);
            break;
        case 2:
            char sceltaInchiostro;
            std::cout << std::endl << "Inserire la lettera dell'inchiostro da analizzare: "; std::cin >> sceltaInchiostro;
            s.percentuale(sceltaInchiostro);
            break;
        case 3:
            char sceltaCambio;
            std::cout << std::endl << "Inserire la lettera dell'inchiostro da cambiare: "; std::cin >> sceltaCambio;
            s.sostituzione(sceltaCambio);
            break;
    };
    int continuo;
    std::cout << "Continuare? ( 1 = SI ) ( 2 = NO )" << std::endl << ">>> "; std::cin >> continuo;
    if(continuo == 1)
        goto loop;
    else
        std::cout << std::endl << std::endl << "Alla prossima !!!";
    return 0;
}