#include <iostream>
using namespace std;

class Odc2ObKlasy
{
    public:

    string temat;
    string nick;

    string tresc;
    string a,b,c,d;
    int nr_pytania;
    string poprawna;
    string odpowiedz;
    int punkt;

    void wczytaj(); //wczytuje pytanie z pliku
    void zadaj();   //pokazuje pytanie, czyta odpowiedzi
    void sprawdz(); //sprawdza poprawnosc odpowiedzi

};
