#ifndef INCLUDED
#define INCLUDED
#include<iostream>

class Stampante{
    public:
        Stampante(int c,int m,int y,int k);
        void sostituzione(char x);
        void stampa(int copie, int c, int m, int y, int k);
        void percentuale(char x);
        void menu();
    private:
        int C, M, Y, K;
};


#endif // !INCLUDED