#include <iostream>
#include "Odc3ObHermetyzacjaKonstrDestruktor.h"
using namespace std;
//1*
//hermetyzacja odbywa siê w pliku .h gdzie wszystko co znajduje sie ponizej kluczowych s³ow public, protected lub private
//gdzie public - wszyscy maj¹ do tego dostêp ;; protected - dostep tylko w klasie i w klasach pochodnych ;; private - dostep tylko w danej klasie i w funkcjach zaprzyja¿nionych
//domyœlnie masz modyfikator private

//2*
//KONSTRUKTOR:
//metoda wywolywana w momencie tworzenia obiektow - konstruktor nie tworzy obiektu tylko jest metoda wywolana po utworzeniu obiektu

//w pliku .h konstruktor ma w argumentach wpisane tylko typ zmiennych zamiast typów i nazw np:
//Konstruktor(string, int, int, int, int, int);
////wtedy w pliku cpp tworzysz zwyczajny konstruktor:
////Konstruktor(string n, int d, int m, int y, int h, int minut)
//////a w mainie wywolujesz go:     Konstruktor event1("Apokalisa",6,8,2045,8,15);

//jezeli chcesz ¿eby konstruktor mia³ wartosci domyslne to w w pliku .h przy typach zmiennych wpisujesz wartosci domyslne
//Konstruktor(string="spotkanie", int=1, int=1, int=2, int=3, int=3);
////wtedy w pliku cpp konstruktor zapisujesz w ten sposób:
////Konstruktor(string n, int d, int m, int y, int h, int minut)
//////a w mainie wywolujesz go:     Konstruktor event1;

//Mozna miec kilka konstruktorow w klasie i je przeciazac (moga sie roznic iloscia argumentow)

//3
//DESTRUKTOR:
//Metoda wywolywana w momencie niszczenia obiektu - desturktor nie niszczy obiektu tylko jest wywolywany tuz przed usunieciem tegoz obiektu
//destruktor sprzata po obiekcie - tzn ze po usunieciu obiektu wszystkie wskazniki wskazujace na obiekt ale jego pola zostan¹ przekierowane na NULL

//destruktor jest automatycznie wywolywany kiedy obiekt klasy jest likwidowany
//destruktor nie ma argumentow i moze stniec tylko jeden destruktor
////destruktor podstawowy w pliku .h wyglada tak:
////przyklad: ~Odc3ObHermetyzacjaKonstrDestruktor();
//////w destruktorze mozna wywolac inne metody ktore beda sprawdzac poprawnosc danych itp
//////jesli w klasie nie ma zdefiniowanego destruktora to program sam go wygeneruje

Odc3ObHermetyzacjaKonstrDestruktor::Odc3ObHermetyzacjaKonstrDestruktor(string n, int d, int m, int y, int h, int minut){
    name=n;
    day=d;
    month=m;
    year=y;
    hour=h;
    minutes=minut;
    cout<<"obiekt stworzony"<<endl;
}
Odc3ObHermetyzacjaKonstrDestruktor::~Odc3ObHermetyzacjaKonstrDestruktor(){
    cout<<"ten destruktor wywo³ujê siê automatycznie na koniec porgramu i mimo i¿ na razie nic nie robi to w przypadku wskaznikow bylby bardzo przydatny"<<endl;
}
void Odc3ObHermetyzacjaKonstrDestruktor::load()
{
    cout<<endl<<"Nazwa wydarzenia: ";
    cin>>name;
    cout<<endl<<"Dzien: ";
    cin>>day;
    cout<<endl<<"Miesiac: ";
    cin>>month;
    cout<<endl<<"Rok: ";
    cin>>year;
    cout<<endl<<"Godzina: ";
    cin>>hour;
    cout<<endl<<"Minut: ";
    cin>>minutes;
}
void Odc3ObHermetyzacjaKonstrDestruktor::show()
{
    cout<<endl<<name<<" "<<day<<" "<<month<<" "<<year<<" "<<hour<<":"<<minutes<<endl;
}
