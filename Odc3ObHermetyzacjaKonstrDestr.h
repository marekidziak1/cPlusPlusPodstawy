#include <iostream>
using namespace std;

class Odc3ObHermetyzacjaKonstrDestr{

    private: //domyœlnie s¹ prywatne
    int day, month, year;
    int hour, minutes;
    string name;

    public:
    Odc3ObHermetyzacjaKonstrDestr(string n, int d, int m, int y, int h, int minut);
    ~Odc3ObHermetyzacjaKonstrDestr();
    void load();
    void show();


};
