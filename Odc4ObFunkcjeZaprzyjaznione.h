#include <iostream>
using namespace std;


//poniewaz w klasie odc4Punkt wpisujesz zaprzyjazniona funkcje odc4ObSedzia ktora wykorzystuje klase Prostokat
//ktora jest wpisana dopiero dalej ponizej to trzeba te klase Prostokat zadeklarowac
class odc4Prostokat;
class odc4Punkt
{
        float x,y;
        string nazwa;
    public:
        odc4Punkt(string="A",float=0, float=0);
        virtual ~odc4Punkt();
        void wczytaj();
        //deklaracja zaprzyjaznienia funkcji z klasa
        friend void odc4ObSedzia(odc4Punkt pkt, odc4Prostokat p);

};
class odc4Prostokat
{
        float x,y,szerokosc, wysokosc;
        string nazwa;

    public:
        odc4Prostokat(string="brak",float=0, float=0 ,float=1 ,float=1);
        virtual ~odc4Prostokat();
        void wczytaj();
        friend void odc4ObSedzia(odc4Punkt pkt, odc4Prostokat p);
};
