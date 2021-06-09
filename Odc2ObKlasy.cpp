#include <iostream>
#include <fstream>  //potrzebna do wczytania/zapisania pliku
#include <cstdlib>  //potrzebna do funkcji exit(0);
#include <algorithm>

using namespace std;
#include "odc2ObKlasy.h"
//1*
//biblioteki zapisane przy pomocy < > program szuka w katalogu codeblocks'a
//a te zpisane w cudzyslowiu szuka w folderzez z projektem

//2*
//Klasy można zapisać zarówno poprzez stworzenie nowych plików jak również w mainie
//tylko wtedy musi się to znajdować powyżej funkcji tworzącej obiekt takiej klasy

//3*
//mamy dwa rodzaje plików Pierwszy z rozszerzeniem .h gdzie przechowuje się pola oraz nagłówki funkcji
//a drugi z rozszerzeniem .cpp gdzie masz ciała funkcji z danej klasy

//4*
//w plikach gdzie chcesz użyć tych funkcji musisz zaincludować plik z rozszerzeniem .h (tj w pliku cpp oraz w mainie) (pliku .cpp nie potrzeba includowac)

//5*
//w pliku cpp ciała funkcji zapisujesz podając nazwę klasy, operator zasięgu (::) i nazwę funkcji

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Odc2ObKlasy::wczytaj()
{
    fstream plik;
    string linia;
    int licznik=1;
    int nrObiektu=(nr_pytania-1)*6+3;


    plik.open("quiz.txt",ios::in);
    if(plik.good()==false){
        cout<<"plik nie istnieje"<<endl;
        exit(0);
    }
    else{
        while(getline(plik,linia)){
            if(licznik==nrObiektu)tresc=linia;
            if(licznik==nrObiektu+1)a=linia;
            if(licznik==nrObiektu+2)b=linia;
            if(licznik==nrObiektu+3)c=linia;
            if(licznik==nrObiektu+4)d=linia;
            if(licznik==nrObiektu+5)poprawna=linia;
            licznik++;
        }
        plik.close();
    }
}
void Odc2ObKlasy::zadaj()
{
    cout<<endl<<tresc<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"----------------"<<endl;
    cout<<"Twoja Odpowiedz: ";
    cin>>odpowiedz;
}
void Odc2ObKlasy::sprawdz()
{
    transform(odpowiedz.begin(),odpowiedz.end(),odpowiedz.begin(), ::tolower);
    if(odpowiedz==poprawna) punkt=1;
    else punkt=0;
}
