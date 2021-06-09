//1*
//Dziedziczenie - przekazywanie swoich atrybutow i metod klasom pochodnych
//,która rozszerza mozliwosci swojego rodzica (klasy podstawowej) o kolejne metody i argumenty
//2*
//mamy dzidziczenie jednokrotne i weilokrotne ( w Javie jest tylko jednokrotne)
//3*
//PRZESLONIECIE
//jezeli w klasie pochodnej masz skladnik o tej samej nazwie co co w klasie podstawowej to nastapi jego przesloniecie
//jednakze jezeli chce sie dostac dostac do atrybutu albo metody rodzica to wystarczy ze skorzystam z operatora zasiegu
//Rodzic::setX(1);
//4*
//Hermetyzacja Protected - atrybuty prywatne rodzica s¹ prywatne dla wszystkich innych klas niz rodzica i jego pochodnych
//5*
//nie mozna odziedziczyæ kostruktorow, destruktorow i operatora przypisania
//6*
//trzeba tez wspomniec o tym ze samo dzidzicznie ma klauzule hermetyzacji czyli ze samo dziedziczenie moze byc prywatne, publiczne albo protected
//wtedy wszystkie atrybuty i metody przejmuj¹ nadrzedn¹ formê hermetyzacji
//jezeli dziedziczysz prywatnie jakas klase to wszystkie jej atryubuty  i metody staj¹ siê private (niezaleznie czy wczesniej zostaly zadeklarowane jako protected albo public)
//jezeli dziedziczenie jest protected to wszystko co bylo publiczne odtad staje sie prywatne (private pozostaje private)
//jezeli dziedziczenie jest public to wszystko zostaje tak jak zostalo zadeklarowane
#include <iostream>
#include <cmath>
using namespace std;
#include "odc5ObDziedziczenie.h"

odc5ObPunkt::odc5ObPunkt(string n, float a, float b)
{
    nazwa=n;
    x=a;
    y=b;
}
void odc5ObPunkt::wyswietl()
{
    cout<<nazwa<<"("<<x<<","<<y<<")"<<endl;
}
//KLASA KOLO
odc5ObKolo::odc5ObKolo(string n, float a,float b, float p)
:odc5ObPunkt(n,a,b) //tak w C++ siê inicjalizuje odziedziczony konstruktor
{
    r=p;
    //przez przes³oniecie atrybutu nazwa (tak samo sie nazywa) zeby w klasach ktore dziedzicz¹ z klasy KOLO
    //zeby moc wyswietlic ten argument ( tkory jest tez w klasie PUNKT) [przez to ze jest przesloniety]
    //to musisz przypisac mu argument z konstruktora bo inaczej nie bêdzie siê wyswietlal
    nazwa=n;

}
void odc5ObKolo::wyswietl()
{
    //odc5ObPunkt::x ; odc5ObPunkt::y
    // do tych atrybutow (jezeli bylyby prywatne) to nie da sie dojsc inaczej niz poprzez ponizsza metode
    odc5ObPunkt::wyswietl();
    cout<<"Promien: "<<r<<endl;
    cout<<"Pole kola: "<<M_PI*pow(r,2)<<endl;
}
//KLASA KULA
odc5ObKula::odc5ObKula(string n, float a, float b, float c, float p)
:odc5ObKolo(n,a,b,p)
{
    z=c;
}
void odc5ObKula::wyswietl()
{
    cout<<"N: "<<nazwa<<"("<<x<<","<<y<<","<<z<<")"<<endl;
    cout<<"Promien: "<<r<<endl;
    cout<<"Objetosc Kuli: "<<4/3*M_PI*pow(r,3);
}
