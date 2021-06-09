//0*
//funkcja zaprzyjazniona z klas¹ to funkcja ktora mimo iz nie jest skladnikiem klasy to
//ma dostep do wszystkich nawet prywatnych skladnikow klasy
//1*
//klauzula przyjazni umieszczona w pliku naglowkowym .h wewnatrz klasy
//(zawsze klasa deklaruje kto jest jej przyjacielem dlatego trzeba deklaracje przyjazni zapisac wewntarz klas w pliku .h )(sprawdz plik .h)
////friend typ nazwa_funkcji(argumenty);
//w ten sposob jestesmy w stanie dostac siê przy pomocy funkcji do prywatnych argumentow danej klasy (i jej prywatnych funkcji)
// bez koniecznosci robienia ich protected albo public ORAZ bez getterow i setterow
//2*
//w c++ podaj¹c w argumencie obiekt przesy³amy tak na prawde kopiê obiektu
//ale moze te¿ wyslac zawsze orgina³ poprzez operator ampersanda czyli np:
//friend void odc4ObSedzia(odc4Punkt &pkt, odc4Prostokat &p);
//3*
//funkcja zaprzyjazniona nie jest skladnikiem klasy dlatego nie posiada tzw.
//wskaznika this (stad trzeba bedzie do takiej funkcji wysy³ac obiekty)
//4*
//funkcja zaprzyjazniona MOZE BYC PRZYJACIELEM WIECEJ NIZ JEDNEJ KLASY
//czyli moze miec dostep do prywatnych skladnikow kilku klas
//5*
//klasy ronwniez mog¹ byæ zaprzyjaznione pomiedzy soba i wtedy gdy klasa b jest zaprzyjazniona
//to klasa a musi zadeklarowowaæ wewn¹trz kto jest jej przyjacielem (czyli klasa b)
#include <iostream>
#include "Odc4ObFunkcjeZaprzyjaznione.h"
using namespace std;
odc4Prostokat::odc4Prostokat(string n, float xx, float yy, float szer, float wys)
{
    nazwa=n;
    x=xx;
    y=yy;
    szerokosc=szer;
    wysokosc=wys;
}
odc4Prostokat::~odc4Prostokat()
{

}
void odc4Prostokat::wczytaj()
{
    cout<<"podaj x: "; cin>>x;
    cout<<"podaj y: "; cin>>y;
    cout<<"podaj szerokosc: "; cin>>szerokosc;
    cout<<"podaj x: "; cin>>wysokosc;
    cout<<"podaj nazwe: ";cin>>nazwa;
}
odc4Punkt::odc4Punkt(string n, float xx, float yy)
{
    nazwa=n;
    x=xx;
    y=yy;
}
odc4Punkt::~odc4Punkt()
{
}
void odc4Punkt::wczytaj()
{
    cout<<"podaj x: "; cin>>x;
    cout<<"podaj y: "; cin>>y;
    cout<<"podaj nazwe: ";cin>>nazwa;
}


