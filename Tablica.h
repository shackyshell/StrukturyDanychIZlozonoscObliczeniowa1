//
// Created by julia on 09.03.2017.
//

#ifndef PROJEKT1_TABLICA_H
#define PROJEKT1_TABLICA_H


class Tablica{
private:
    int *tab;
    int rozmiar;

public:
    Tablica(int rozmiar);
    ~Tablica();
    void wczytaj(std::string nazwapliku);
    void wyswietl();
    void dodaj(int indeks,int wartosc);
    void usun(int indeks);
    bool wyszukaj(int wartosc);
};


#endif //PROJEKT1_TABLICA_H
