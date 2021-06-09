//1*
//w czasie kompilacji NIE MUSI BYC ZNANY TYP OBIEKTU dla wywolan funkcji wirtualnych
//dzieki polimorfizmowi mozemy tworzyc UNIWERSALNE metody z wiazaniem dynamicznym,
//przetwarzajace obiekty wszystkich klas pochodnych od abstrakcyjnej klasy podstawowej.
//2*
//wiaze sie to z zastosowaniem polimorficznego wskaznika do abstrakcyjnej klasy podstawowej
//oraz z klasa abstrakcyjna od ktorej beda dziedziczyc inne klasy
//3*
//w klasie abstrakcyjnej czeœæ metod nigdy nie bedzie miec cia³a funkcji
//dlatego trzeba do nich napisac przedrostek virtual w klasie abstrakcyjnej
//w klasach konkretnych (ktore juz beda posiadac ciala funkcji) tez dopisujje sie przedrostek virtual ale nie jest to wymagane
//w klasie abstrakcyjnej w metodzie abstrakcyjnej zamiast ciala funkcji wpisuje sie "=0" np virtual void method()=0;
//4*
//wiazanie statyczne jest wtedy gdy tworzysz obiekt i przypisujesz go do referencji
//wiazanie dynamiczne jest wtedy gdy tworzysz wskaznik i przypisujesz do niego adres obiektu(tego statycznego)(poprzez ampersanda &)
//dzieki temu wskaznik mozna przestawiac na dowolny obiekt klasy pochodnej
//5*
//wywolanie funkcji wirtualnych (abstrakcyjnych):
//  Object *wsk;
//  wsk->onClick();

#include <iostream>
using namespace std;

#include "Odc6ObPolimorfizm.h"

odc6Kolo::odc6Kolo(float a)
{
    r=a;
}
void odc6Kolo::oblicz_pole()
{
    cout<<"Pole kola: "<<3.14*r*r<<endl;
}

odc6Kwadrat::odc6Kwadrat(float x)
{
    a=x;
}
void odc6Kwadrat::oblicz_pole()
{
    cout<<"Pole kwadratu: "<<a*a<<endl;
}




