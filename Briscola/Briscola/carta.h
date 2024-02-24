#ifndef CARTA_H
#define CARTA_H
#include <iostream>

using namespace std;


class Carta {
    private:
        string seme, nome, path;
        int numero, punteggio;
    public:
        Carta();
        Carta(string seme, string nome, string path, int numero, int punteggio);
        ~Carta();
        void setSeme(string seme);
        void setNome(string nome);
        void setNumero(int numero);
        string getSeme();
        string getNome();
        string getPath();
        int getPunteggio();
        int getNumero();
        void setPath(string nome, string seme);
        void setPunteggio(int punteggio);
        Carta confronta(Carta c2, Carta briscola);
        int operator+(Carta c2);
        Carta& operator=(Carta carta);
};

#endif
