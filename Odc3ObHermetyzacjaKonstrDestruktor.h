#include <iostream>
using namespace std;

class Odc3ObHermetyzacjaKonstrDestruktor{

    private: //domyœlnie s¹ prywatne
    int day, month, year;
    int hour, minutes;
    string name;

    public:
    //tak jak ponizej powinienes stworzyc konstruktor
    //Odc3ObHermetyzacjaKonstrDestruktor(string, int, int, int, int, int);
    //a tak jak ponizej powinienes stworzyc konstruktor z domyslnymi wartosciami
    Odc3ObHermetyzacjaKonstrDestruktor(string="domyslne", int=1, int=1, int=1, int=1, int=1);
    ~Odc3ObHermetyzacjaKonstrDestruktor();
    void load();
    void show();


};
