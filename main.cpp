/*
    Roznice w JAVIE w stosunku do C++:
        -wskazniki
        -destruktory
        -wielodziedziczenie (a w Javie interfejsy)
*/
//nazwa_bibl c++ reference - wszystkie biblioteki sprawdzisz po wpisaniu tej frazy w google
#include <iostream>  //standardowa biblioteka
#include <cstdlib>   //potrzbna do funkcji: system("pause"); exit(0); odmierzania czasu;
#include <stdio.h>   //potrzebna do wyczszczenia ekranu konsoli: system("cls");
#include <conio.h>   //potrzebna do funkcji pobierania znakow(chary) bez nacisniecia entera: getch()
#include <time.h>    //potrzebna do pobrania czasu od czasu zerowego: srand(time(NULL));
                     //do odmierzania czasu|| clock_t start,stop; start=clock();stop=clock();czas=(double)(stop-start)/CLOCKS_PER_SEC;

#include <windows.h> //potrzebna do przerwy: Sleep(1000); wraz z biblioteka time.h potrzebna do losowego generowania liczb: rand()%1000+1;
#include <fstream>   //potrzebna do zapisu i odczytu z pliku
#include <algorithm> //potrzebna do: uppercase to lowercase:: transform(odpowiedz.begin(),odpowiedz.end(),odpowiedz.begin(), ::tolower);
#include <string>    //potrzebna rowniez do operacji na łancuchach
                     //konkatenacja jeden+drugi ;; jeden.append(drugi);;
                     //zamiana na duze/male litery transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
                     //szukanie napisu wewnatrz napisu napis.find("cos"); //zwraca zmienna size_t
                     //usuwanie/wstawianie tekstu w lancuch znakow |erase(5,3)(w piątym miejscu 3 znaki)| insert(11,"mama")(w 11 miejscu wstaw "mama")|
                     //zastepowanie czsci lancucha znakow napisem |napis.replace(3,4,"psa")|(w trzecim miejscu, 4 pola, napisem "psa"
                     //wyciaganie kawalka teksu z lancucha znakow i zapisywanie tego do nowej zmiennej |zmienna=napis.subst(4,7) | wyciagnij od 4 pola 7 znakow
                     //string c++ reference - reszta funkcji;

//void odc10___WSKAZNIKI___PODSUMOWANIE() // wszystko o WSKAZNIKACH

#include <array>     //potrzebna do wielkosci tablicy:      end(tab)-begin(tab)
#include <cmath>     //potrzebna do funkcji matematycznych opisanych w void'zie: odc17FunkcjeMatematyczne()
#include <iomanip>   //potrzebna do funkcji która pokazuję ilośc miejsc po przecinku bez zapisu z e - cout<<setprecision(20);

using namespace std;
//Opisy poszczególnych rzeczy związanych z programowaniem obiektowym znajdziesz
//w plikach cpp
#include "Odc2ObKlasy.h"
#include "Odc3ObHermetyzacjaKonstrDestruktor.h"
#include "Odc4ObFunkcjeZaprzyjaznione.h"
#include "odc5ObDziedziczenie.h"
#include "Odc6ObPolimorfizm.h"

//NAGŁÓWKI FUNKCJI - deklaracja funkcji WYMAGANA;
//można też umiescic pola i nagłówki funkcji w pliku z rozszerzeniem .h ;a ciała funkcji do pliku z rozszerzeniem .cpp

void odc6ObObliczenia1(odc6Ksztalt *x);
void odc6Ob();
void odc5Ob();
void odc4ObSedzia(odc4Punkt pkt, odc4Prostokat p);
void odc4Ob();
void odc3Ob();
void odc2Ob();
void odc1Ob();
void odc17FunkcjeMatematyczne();
void odc16StrukturyDanych();
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void odc15kompilacjaProgramowCPlusPlusWLinuxie();
char *odc15funkcjaPolskieOgonki(char *str);
void odc15polskieZnaki();
void odc14sortowanieQuicksortRosnace(int * tablica, int lewy, int prawy);
void odc14sortowanieBabelkoweRosnace(int *tab, int n);
void ODC14_SORTOWANIE();
unsigned long long int odc13silniaRekurencyjnie(int numer);
unsigned long long int odc13silniaIteracyjnie(int numer);
unsigned long long int odc13CiagFibbonacciegoRekurencyjnie(int numer);
unsigned long long int odc13CiagFibbonacciegoIteracyjnie(int numer);
unsigned long long int odc13FunkcjaPotegowanieRekurencyjne(int podstawa, int wykladnik);
unsigned long long int odc13FunkcjaPotegowanieIteracyjne(int podstawa, int wykladnik);
int odc13FunkcjaRekurencyjneDodawanie(int n);
void odc13Rekurencja();
void odc12AlgorytmyPolskiSPOJ();
void odc11AlgorytmNajblizszasredniej();
void odc11AlgorytmNajwiekszaLiczba();
float odc10WskaznikiSrednia(float *tab, int ile);
void odc10___WSKAZNIKI___PODSUMOWANIE();
void odc10zapisWskazniki();
void odc10wskazniki();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float odc9ileJardow(float x);
void odc9funkcje();
float odc9ileCali(float m);
void odc8dzialanieNaStringach();
void odc8lancuchyZnakow();
void odc7pomiaryZapisywanieOdczytywanieDanych();
void odc7quizOdczytywanieDanych();
void odc7zapisywanieDanych();
void odc7odczytywanieDanych();
void odc6instrukcjaSwitch();
void odc6instrukcjaSwitch2();
void odc4liczbaLosowa();
void odc4wygaszenie();
void odc4totolotekLiczbaLosowa();
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
string PIN_bank= "0179";
string napis(int ileLudzi, int ileCukierkow);
bool odc2ify2(string PIN_bank);
bool odc2ify3();
bool odc2ify();
void odc5tablice2Fibonacci(int n);
float odc5tablice1();
int odc3Petle(int liczbaBakterii);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void odc0TaksonomiaBlooma();
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    odc6Ob();
    //odc5Ob();
    //odc4Ob();
    //odc3Ob();
    //odc2Ob();
    //odc1Ob();
    //odc17FunkcjeMatematyczne();
    //odc16StrukturyDanych();
    ///////////////////////////////////////////////////////////////////
    //odc15polskieZnaki();
    //ODC14_SORTOWANIE();
    //odc13Rekurencja();
    //odc12AlgorytmyPolskiSPOJ();
    //odc11AlgorytmNajblizszasredniej();
    //odc11AlgorytmNajwiekszaLiczba();
    //odc10zapisWskazniki();
    //odc10wskazniki();
    //odc9funkcje();
    //odc8dzialanieNaStringach();
    //odc8lancuchyZnakow();
    //odc7pomiaryZapisywanieOdczytywanieDanych();
    //odc7quizOdczytywanieZapisywanieDanych();
    //odc7odczytywanieDanych();
    //odc7zapisywanieDanych();
    //odc6instrukcjaSwitch2();
    //odc6instrukcjaSwitch();
    ////////////////////////////////////////////////////////////////////
    //odc5tablice2Fibonacci(56);
    //cout<<odc5tablice1();
    //odc4totolotekLiczbaLosowa();
    //odc4wygaszenie();
    //odc4liczbaLosowa();
    //odc3Petle(2);
    //odc2ify2(PIN_bank);
    //odc2ify();
    //odc2ify3();
    /*
    int ileLudzi=5;
    int ileCukierkow=23;
    string wyswietlenie=napis(ileLudzi,ileCukierkow);
    */
    ////////////////////////////////////////////////////////////////
    //odc0TaksonomiaBlooma();
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CIAŁA FUNKCJI:
void odc6ObObliczenia1(odc6Ksztalt *x)
{
    x->oblicz_pole();
}
void odc6Ob()
{
    odc6Kolo k1(1);
    odc6Kwadrat kw1(2);
    odc6Ksztalt *wsk;
    wsk=&k1;
    wsk->oblicz_pole();
    wsk=&kw1;
    wsk->oblicz_pole();
    odc6ObObliczenia1(wsk);
}

void odc5Ob()
{
    odc5ObKolo k1("KoloPrzyklad",2,2,2);
    //odc5ObKolo k1;
    k1.wyswietl();
    cout<<endl;
    odc5ObKula kula1;
    kula1.wyswietl();
}
void odc4ObSedzia(odc4Punkt pkt, odc4Prostokat p)
{
    if(pkt.x>p.x && pkt.x<(p.x+p.szerokosc) && pkt.y>p.y && pkt.y<(p.y+p.wysokosc))
    {
        cout<<"punkt nalezy do prostokata"<<endl;
    }
    else cout<<"punkt nie nalezy do prostokata"<<endl;
}
void odc4Ob()
{
    odc4Punkt pkt1("A",3,1);
    //pkt1.wczytaj();
    odc4Prostokat p1("Prostokat",0,0,6,4);
    //p1.wczytaj();
    odc4ObSedzia(pkt1,p1);

}
void odc3Ob()
{
    Odc3ObHermetyzacjaKonstrDestruktor konstruktorDomyslny;
    Odc3ObHermetyzacjaKonstrDestruktor event1("Apokalisa",6,8,2045,8,15);
    event1.show();
    event1.load();
    event1.show();


}
void odc2Ob()
{
    int sumaPunktow=0;
    Odc2ObKlasy p[5];
    for(int i=0; i<5; i++){
        p[i].nr_pytania=i+1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
    }
    for(int i=0; i<5; i++){
        sumaPunktow+=p[i].punkt;
    }
    cout<<"SumaPunktow wynosi: "<<sumaPunktow<<endl;
}
class odc1ObZwierze
{
    public:
    //atrybuty || pola
    string imie;
    string gatunek;
    int wiek;

    //metody
    void dodaj_zwierze()
    {
        cout<<"Dodawanie nowego zwierzecia: "<<endl;
        cout<<"Podaj gatunek: "<<endl;
        cin>>gatunek;
        cout<<"Podaj imie: "<<endl;
        cin>>imie;
        cout<<"Podaj wiek: "<<endl;
        cin>>wiek;
    }
    void daj_glos()
    {
        if (gatunek=="kot") cout<<imie<<" lat:"<<wiek<<": Miau";
        else if (gatunek=="koza") cout<<imie<<" lat:"<<wiek<<": beeee";
        else if (gatunek=="krowa") cout<<imie<<" lat:"<<wiek<<": Muuu";
        else cout<<"nieznany gatunek"<<endl;
    }
};
void odc1Ob()
{
    //tworzenie obiektow bez konstruktora
    odc1ObZwierze z1;
    z1.dodaj_zwierze();
    z1.daj_glos();
}
void odc17FunkcjeMatematyczne()
{
    //WARTOŚĆ BEZWZGLEDNA  -  abs() || fabs() -dla floatów
        int x=31,R,D,o1,o2;
        cout<<"(1947-2014) Ile razy LA Lakers wystapili w finale NBA?"<<endl;
        cout<<"Rick: "<<endl;
        cin>>R;
        cout<<"Daryl: "<<endl;
        cin>>D;
        o1= abs(x-R);
        o2= abs(x-D);
        if(o1<o2) cout<<"Wygral Rick!";
        else if(o1>o2) cout<<"Wygral Daryll!";
        else cout<<"Mamy remis";

    //POTEGOWANIE p^w - pow(p,w)
        //wielkosc bajtowa inta:
        int a;
        cout<<sizeof(a)<<endl;
        //najwiekszy rozmiar inta
        int y=pow(2,32)/2-1;
        cout<<setprecision(20);
        cout<<"Max size of int wynosi: "<<y<<endl;
        //najwiekszy rozmiar int w zakresie liczb dodatnich
        unsigned int z=pow(2,32)-1;
        cout<<"Max size of unsigned int wynosi: "<<z<<endl;

    //PIERWIASTKOWANIE
      //pierwiastek kwadratowy sqrt(a) ;;
      //pierwiastek sześcienny cbrt(a) ;;
      //pierwiastek n-tego stopnia pow(p,1.0/n.0) - 1/n musi byc zapisane jako double czyli np 1.0/3.0 ;;

        //przeciwprostokątna w trojkacie prostokatnym
        float x1,x2,y1,y2,d;
        cout<<"WPISZ A(x1,y1): ";
        cin>>x1>>y1;
        cout<<"WPISZ B(x2,y2): ";
        cin>>x2>>y2;
        d=sqrt(pow(abs(x2-x1),2)+pow(abs(y2-y1),2));
        cout<<"przeciwprostokatna w trojkacie prostokatnym wynosi: "<<d<<endl;

    //ZAOKRĄGLANIE LICZB
      //,0-,49 w dół i,50-,99 w górę ==> round(a) ;;
      //w górę - ceil(a) ;;
      //w dół - floor(a) ;;
      //obcinanie po przecinku (od truncate) - trunc(a) ;;
        float liczba;
        cout<<"Podaj liczbe do zaokraglenia: "<<endl;
        cin>>liczba;
        cout<<"round: "<<round(liczba)<<endl;
        cout<<"ceil: "<<ceil(liczba)<<endl;
        cout<<"floor: "<<floor(liczba)<<endl;
        cout<<"trunc: "<<trunc(liczba)<<endl;

    //STAŁE: pi - M_PI ;; euler - M_E ;;
        cout<<setprecision(25);
        cout<<"liczba PI: "<<M_PI<<endl;
        cout<<"stałe Eulera: "<<M_E<<endl;

    //FUNKCJE TRYGONOMETRZYCZNE: sin: sin() || cos: cos() || tg: tan() || ctg: 1/tan()
        //stopnie na radiany ==> *M_PI/180
        //radiany na stopnie ==> *180/M_PI
        float kat;
        cout<<"Podaj wartosc kata w stopniach: "<<endl;
        cin>>kat;
        cout<<"sinus: "<<sin(kat*M_PI/180.0)<<endl;
        cout<<"cosinus: "<<cos(kat*M_PI/180.0)<<endl;
        cout<<"tangens: "<<tan(kat*M_PI/180.0)<<endl;
        cout<<"cotangens: "<<1/tan(kat*M_PI/180.0)<<endl;

}
void odc16StrukturyDanych()
{
    //STOS:
    //LIFO - Last In First Out
    //Stos = struktura liniowo uporządkowanych danych z których jedynie ostatni element
    //(zwany wierzchołkiem) jest w danym momencie dostępny
        //push() ;; pop(); size(); empty();
}
void odc15kompilacjaProgramowCPlusPlusWLinuxie()
{
    //sudo su
    //apt-get install g++
    //g++ nazwa_pliku.cpp -o program1   //kompilacja||-o czyli output i nazwa programu ktory ma zostac utworzony
    // ./program1                       //odpalenie programu (nie trzeba wpisywać .exe bo to linux)
}
char *odc15funkcjaPolskieOgonki(char *str)
  {
   static char buff[256];
   char cp[]="\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĆĘŁŃÓŚŻŹ";
   if(strlen(str)>=sizeof(buff)) return str;
   char *bf=buff;
   while(*str)
     {
      char *pos=strchr(cp+18,*str);
      *(bf++)=pos?*(pos-18):*str;
      ++str;
     }
   *bf=0;
   return buff;
  }
void odc15polskieZnaki()
{
    //w notepadzie++ poprzez ctrl+h mozesz zamienić wszystkie znaki w kodzie odpowiednimi encjami np dla ć będzie to /206
    //lub mozesz to zrobić specjalną funkcją która będzie zamieniać wszystkie polskie znaki w konsoli nie musząc kombinowac w edytorze
    //teraz w cout'cie musisz przezpuscić tekst przez tę funkcje
    cout<<odc15funkcjaPolskieOgonki("Zażółć gęślą jaźń")<<endl;
    //ale najlepiej sprawdzic jakie masz kodowanie na danym systemie a następnie ustawić takie samo kodowanie w programie "check coding on system ..."
    //następnie w edytorze ==> settings => encoding ==> oem852 || musisz zmienić kodowanie pliku cpp i mozesz to zrobić też w notepadzie++
}
void odc14sortowanieQuicksortRosnace(int * tablica, int lewy, int prawy)//metoda rekurencyjna
//wyznaczasz OŚ (obojętnie gdzie)=>dązysz do tego by wskazniki i oraz j spotkały się z osią=> dązysz do tego by wskażniki i oraz j mineły oś o 1 miejsce=> wywołujesz rekurencyjnie quicksorta dla podtablic
{
    int v=tablica[(lewy+prawy)/2];              //na początku musisz wyznaczyć "OŚ" - czyli liczbę która będzie dzielić tablice na 2 cześci oraz to z nią będziesz porównywał liczby na lewo i na prawo jej
    int i,j,x;
    i=lewy;                                     //indeks i będzie wyznaczał wartość większą od OSI na lewo ;;
    j=prawy;                                    //indeks j będzie wyznaczał wartość mniejszą od OSI na prawo ;;
    do{                                         //specjalnie robisz pętle do while żeby po drodze chociaż raz sprawdzić ifa czy wskaznik i jest mniejszy lub równy wskaznikowi j
        while(tablica[i]<v) i++;            //na początku sprawdzasz wszyskie liczby na lewo od osi czy któraś z nich jest większa lub równa osi - jeśli tak to ustawiony na nią jest wskaźnik i
        while(tablica[j]>v) j--;            //później sprawdzasz wszystkie liczby na prawo od osi czy któraś z nich jest mniejsza lub równa osi - jeśeli tak to na nia jest ustawiany wskaźnik
                                            //do tego momentu zadanie polega na tym żeby wskaźniki i oraz j wskazywały na OŚ
        if(i<=j){                               //specjalnie warunek ustawiony jest na "i mniejsze lub RÓWNE j" a nie tylko "i mniejsze od j" żeby pod sam koniec móc zrobić
                                                //inkrementację i oraz dekrementacje j na jedno miejsce powyżej i poniżej OSI by pózniej wywołać rekurencyjnie quicksorta dla
                                                //tablic od początku do 1 miejsca niżej pod OSIĄ ORAZ od 1 miejsca wyżej od OSI do końca tablicy
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++; j--;
        }
    }while(i<=j);
    if(i<prawy) odc14sortowanieQuicksortRosnace(tablica, i, prawy);
    if(j>lewy) odc14sortowanieQuicksortRosnace(tablica, lewy, j);
}
void odc14sortowanieBabelkoweRosnace(int *tab, int n)
{
    int bufor;
    for(int i=1 ; i<n; i++){            //ilość cykli porowanan - musi byc mniejsza o jeden niz wielkosc tablicy
        for(int j=1; j<=n-i; j++){      //ilość pojedyńczych porównań w każdym cyklu
            if(tab[j]<tab[j-1]){            //- te które zostały juz uszeregowane jako najwieksze czyli te od prawej strony nie wymgaja juz
                bufor=tab[j];               //porownan dlatego porownujesz tylko z tymi ktore jeszcze nie zostaly uszeregowane jako najwieksze
                tab[j]=tab[j-1];            //poprzez odjęcie za każdym razem numeru cyklu porównań
                tab[j-1]=bufor;
            }
        }
    }
}
void ODC14_SORTOWANIE()
{
    //złożoność czasowa - notacja dużego O, czyli sprawdzenie ilosci czasu do
    //najlepsza złożoność algorytmu jest 0*log(n) czyli quicksort - nie ma lepszego algorytmu
    //sprawdzić jeszcze
        //*sortowanie przez scalanie(mergesort)
        //*sortowanie Shella
        //*sortowanie przez wstawianie
        //*sortowanie przez selekcję(wybór)
        //*sortowanie przez kopcowanie(heapsort)

    int ile;
    double czas1,czas2;
    clock_t start, stop;
    cout<<"podaj ile liczb ma miec tablica: ";
    cin>>ile;
    int *tab=new int[ile];
    int *tab2=new int[ile];
    srand(time(NULL));
    for(int i=0; i<ile; i++){
        tab[i]=rand()%1000+1;
        tab2[i]=tab[i];
    }

    cout<<"porownanie czasow sortowania: "<<endl;
    start=clock();
    odc14sortowanieBabelkoweRosnace(tab,ile);
    stop=clock();
    czas1=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"czas sortowania babelkowego wynosi: "<<czas1<<endl;
    /*//posortowane elementy:
    for(int i=0; i<ile); i++){
        cout<<tab[i]<<endl;
    }
    */
    start=clock();
    odc14sortowanieQuicksortRosnace(tab2,0,ile);
    stop=clock();
    czas1=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"czas sortowania quicksort wynosi: "<<czas1<<endl;
    /*//posortowane elementy:
    for(int i=0; i<ile; i++){
        cout<<tab2[i]<<endl;
    }
    */
    delete []tab;
    delete []tab2;

}
unsigned long long int odc13silniaRekurencyjnie(int numer)
{
    if(numer==0)return 1;
    else return odc13silniaRekurencyjnie(numer-1)*numer;
}
unsigned long long int odc13silniaIteracyjnie(int numer)
{
    unsigned long long int wynik=1;
    for(int i=1; i<=numer; i++){
        wynik*=i;
    }
    return wynik;
}
unsigned long long int odc13CiagFibbonacciegoRekurencyjnie(int numer)
{
    if(numer==1 || numer==2) return 1;
    else return odc13CiagFibbonacciegoRekurencyjnie(numer-1)+odc13CiagFibbonacciegoRekurencyjnie(numer-2);

}
unsigned long long int odc13CiagFibbonacciegoIteracyjnie(int numer)
{
    unsigned long long int wynik=1;
    unsigned long long int liczba1=1;
    unsigned long long int liczba2=1;
    for(int i=2; i<numer; i++){
       wynik= liczba1+liczba2;
       liczba1=liczba2;
       liczba2=wynik;
    }
    return wynik;
}
unsigned long long int odc13FunkcjaPotegowanieRekurencyjne(int podstawa, int wykladnik)
{
    if(wykladnik==0) return 1; //przypadek podstawowy - zaczynaj od tego zawsze
    else return odc13FunkcjaPotegowanieRekurencyjne(podstawa,wykladnik-1)*podstawa;
}
unsigned long long int odc13FunkcjaPotegowanieIteracyjne(int podstawa,int wykladnik)
{
    unsigned long long int wynik=1;
    for(int i=1; i<=wykladnik; i++){
        wynik=wynik*podstawa;
    }
    return wynik;
}
int odc13FunkcjaRekurencyjneDodawanie(int n)
{
    if(n==0) return 3; //przypadek podstawowy
    else return  odc13FunkcjaRekurencyjneDodawanie(n-1)+2;

}
void odc13Rekurencja()
{
    //przypadek podstawowy - zaczynaj od tego zawsze


    //cout<<odc13FunkcjaRekurencyjneDodawanie(3)<<endl;

    clock_t start, stop;
    double czas1, czas2;
    //------------------------------------
    start=clock();
    unsigned long long int potegowanieRekurencyjne = odc13FunkcjaPotegowanieRekurencyjne(2,62);
    stop=clock();
    czas1=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"potegowanie rekurencyjne "<<potegowanieRekurencyjne<<" czas: "<<czas1<<endl;
    start=clock();
    unsigned long long int potegowanieIteracyjne = odc13FunkcjaPotegowanieIteracyjne(2,62);
    stop=clock();
    czas2=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"potegowanie iteracyjne "<<potegowanieIteracyjne<<" czas: "<<czas2<<endl;
    cout<<"roznica czasow czas: "<<(czas2-czas1)<<endl<<endl;
    //------------------------------------
    start=clock();
    long long int fibonnaciRekurencyjnie = odc13CiagFibbonacciegoRekurencyjnie(43);
    stop=clock();
    czas1=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"fibonnaci rekurencyjne "<<fibonnaciRekurencyjnie<<" czas: "<<czas1<<endl;
    start=clock();
    long long int fibonnaciIteracyjnie = odc13CiagFibbonacciegoIteracyjnie(43);
    stop=clock();
    czas2=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"fibonnaci iteracyjnie "<<fibonnaciIteracyjnie<<" czas: "<<czas2<<endl;
    cout<<"roznica czasow czas: "<<(czas2-czas1)<<endl<<endl;
    //------------------------------------
    start=clock();
    long long int silniaRekurencyjnie = odc13silniaRekurencyjnie(35);
    stop=clock();
    czas1=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"silnia rekurencyjne "<<silniaRekurencyjnie<<" czas: "<<czas1<<endl;

    start=clock();
    long long int silniaIteracyjnie = odc13silniaIteracyjnie(35);
    stop=clock();
    czas2=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"silnia rekurencyjne "<<silniaIteracyjnie<<" czas: "<<czas2<<endl;
    cout<<"roznica czasow czas: "<<(czas2-czas1)<<endl<<endl;
    //------------------------------------
}
void odc12AlgorytmyPolskiSPOJ()
{
    int ile;
	cin>>ile;
	unsigned long int liczba[ile];
	unsigned long int silnia[ile];
	for(int i=0; i<ile; i++){
		cin>>liczba[i];
	}
	for(int i=0; i<ile; i++){
		if(liczba[i]==0){
			cout<<"0 0"<<endl;
		}else if(liczba[i]==1){
			cout<<"0 1"<<endl;
		}else if(liczba[i]>1){
			for(int j=1; j<=liczba[i]; j++){
				silnia[i]*=j;
			}
			unsigned long int resztaDzies, resztaJedn;
			if(liczba[i]==2 || liczba[i]==3){
				resztaDzies=0;
				resztaJedn=silnia[i];
			}
			else if(liczba[i]==4){
				resztaJedn=silnia[i]%10;
				resztaDzies=(silnia[i]-resztaJedn)/10;
			}else{
				resztaJedn=silnia[i]%10;
				resztaDzies=(silnia[i]-resztaJedn)%100/10;
			}
			cout<<resztaDzies<<" "<<resztaJedn<<endl;
		}
	}
}
void odc11AlgorytmNajblizszasredniej()
{
    double tab[5];
    double suma=0;
    cout<<"podaj 5 liczb po sobie: "<<endl;
    for(int i=0; i<end(tab)-begin(tab);i++) {
            cin>>tab[i];
            suma+=tab[i];
    }
    double srednia=suma/5;
    double najmniejsza=abs(srednia-tab[0]);
    double najblizszy=tab[0];
    for(int i=1; i<end(tab)-begin(tab);i++){
        if(najmniejsza>abs(srednia-tab[i])){
            najmniejsza=abs(srednia-tab[i]);
            najblizszy=tab[i];
        }
    }
    cout<<"srednia wynosi: "<<srednia<<" a najblizsza liczba tej sredniej to: "<<najblizszy;
}
void odc11AlgorytmNajwiekszaLiczba()
{
    int tab[3];
    cout<<"podaj trzy liczby po sobie: ";
    cin>>tab[0]>>tab[1]>>tab[2];
    int najwieksza=tab[0];
    for(int i=1; i<end(tab)-begin(tab); i++){
        if(tab[i]>najwieksza){
            najwieksza=tab[i];
        }
    }
    cout<<"najwieksza liczba to: "<<najwieksza<<endl;
}
void odc10___WSKAZNIKI___PODSUMOWANIE()
{
    //1* DYNAMICZNE ALOKOWANIE PAMIECI
    int *tablica = new int[10];
    cout<<*tablica;   //pokazuje ZAWARTOSC pierwszej komorki w tablicy
    cout<<tablica;   //pokazuje adres pierwszej komorki w tablicy




    ///////////////////////////////////////////////////////////////
    //2* SZYBKI DOSTĘP DO KOMÓRKI POPRZEZ WSKAZNIKI
    //////////przy zmiennych:
    int liczba;
    int *wskaznik=&liczba;
    cout<<*wskaznik;  //pokazuje ZAWARTOSC liczby
    cout<<wskaznik;   //pokazuje adres liczby

    /////////////////////////
    //////////przy tablicach:
    int *tablica2 =new int[10];
    int *wsk=tablica2;         //nazwa tablicy jest jednocześnie jej adresem zerowego elementu
    //LUB
    //int *wsk=&tablica2[0];




    ////tablice mozna wypełnic danymi albo poprzez przypisanie do tablicy
        for(int i=0; i<10; i++) {
            tablica2[i]=i;
        }
    ////albo poprzez przypisanie przez wskaznik
        for(int i=0; i<10; i++) {
            *wsk=i;
            wsk++;    //trzeba pamietac zeby zinkrementowac wskaznik o kolejna komorke
        }
    ///////////////////////////////////////////////////////////////


    //dealokowanie pamieci powinno się odbyc dopiero pod koniec funkcji bo wczesniej
    //nawet dealokując tylko jedna tablice ma to wpływ równiez na reszte
    delete [] tablica;
    delete [] tablica2;

    //////////////////////////////////////////////////////////////
    /*zadeklarowanie funkcji do ktorej przekazuje sie orginalne zmienne poprzez wskaznik
        //POPRZEZ PRZEKAZANIE WSKAZNIKA DO ZMIENNEJ w argumencie
            float odc10WskaznikiSrednia2(float &a, float &b, float &c)
            {
                return (a+b+c)/3;
            }
            //nastepnie wywolanie tejze funkcji
            float a=3.3;
            float a=2.3;
            float a=1.3;
            cout<<"srednia wynosi: "<<odc10WskaznikiSrednia2(a,b,c)<<endl;

        //POPRZEZ PRZEKAZANIE WSKAZNIKA DO TABLICY W argumencie
            float odc10WskaznikiSrednia(float *tab, int ile)
            {
                float suma=0;
                for(int i=0; i<ile; i++){
                    suma+=*tab;
                    tab++;
                }
                return suma/ile;
            }
            //nastepnie wywolanie tejze funkcji
            float tab[3]={1.1,2.2,3.3);
            cout<<"srednia wynosi: "<<odc10WskaznikiSrednia(tab,3)<<endl;
    */
}
float odc10WskaznikiSrednia(float *tab, int ile)
{
    float suma=0;
    for(int i=0; i<ile; i++){
        suma+=*tab;
        tab++;
    }
    return suma/ile;
}
void odc10zapisWskazniki()
{
    clock_t start, stop;
    double czas;
    int ile;

    cout<<"podaj wielkosc tablicy"<<endl;
    cin>>ile;

    //pomiar bez udzialu wskaznikow
    //to co jest tutaj ponizej to dynamiczne alokowanie pamieci
    int *tablica;
    tablica=new int[ile];
    start=clock();
    for(int i=0; i<ile; i++){
        tablica[i]=i;
        tablica[i]+=50;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"czas zapisu bez wskaznika to: "<<czas<<endl;






    //pomiar przy udziale wskaznikow;
    int *wskaznik=tablica;
    tablica=new int[ile];
    start=clock();
    for(int i=0; i<ile; i++){
        *wskaznik=i;
        *wskaznik+=50;
        wskaznik++;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"czas zapisu ze wskaznikiem to: "<<czas<<endl;
    delete [] tablica;
    //dealokowanie pamieci moze się dopiero odbyc pod koniec funkcji a nie wczesniej;


}
void odc10wskazniki()
{
    int liczba=4;
    int *w=&liczba; //do wskaznika w przypisz adres zmiennej liczba
    cout<<*w<<"   *w wskazuje na zawartosc zmiennej liczba"<<endl; //wskazuje zawartosc(4)
    cout<<w<<"   w wskazuje na adres zmiennej liczba"<<endl;  //wskazuje adres zmiennej liczba




    //PLUSY WSKAŻNIKOW:
        //DYNAMICZNE ALOKOWANIE I DEALOKOWANIE PAMIECI
            //poprzez użycie kluczowego słowa new a potem funkcji delete();
            int *tablica=new int [10];
                //+pokaz że adresy zmieniają się co 4 bajty
                for(int i=0; i<10;i++){
                    cout<<tablica<<endl;
                    tablica++;
                }
            //słowa delete uzywamy dopiero na koncu bo nie pozwala stworzyc nowych tablic
            //delete [] tablica;




        //ZWIEKSZENIE SZYBKOSCI ZAPISU I ODCZYTU
            //dynamiczna alokacja tablicy
            int *tablica2=new int[10];
                for(int i=0; i<10; i++) {
                        tablica2[i]=i;
                }
            //przypisanie do wskaznika pierwszej komorki tablicy
            int *x;
            x=&tablica2[0]; //można albo tak albo tak jak ponizej
            x=tablica2;
                for(int i=0; i<10; i++) {
                        *x=i;
                }
            //////////////////////////////
            cout<<"adres pierwszej komorki wskaznika wynosi: "<<x<<endl;
            cout<<"zawartosc pierwszej komorki wynosi: "<<*x<<endl;
            x=x+1;
            cout<<"adres drugiej komorki wskaznika wynosi: "<<x<<endl;
            cout<<"zawartosc drugiej komorki wynosi: "<<*x<<endl;
            x=x+1;
            cout<<"adres trzeciej komorki wskaznika wynosi: "<<x<<endl;
            cout<<"zawartosc drugiej komorki wynosi: "<<*x<<endl;
            //delete [] tablica2;
            //////////////////////////////
            //nazwa tablicy jest jednocześnie jej adresem zerowego elementu
            //czyli zamiast pisać tak
            x=&tablica2[0];
            cout<<x<<endl;
            //mozesz zapisać to tak:
            x=tablica2;
            cout<<x<<endl;
            //////////////////////////////
        //DZIAŁANIE NA ORGINALNYCH ZMIENNYCH
            float tab[3];
            tab[0]=1.5;
            tab[1]=1.3;
            tab[2]=1.8;
            cout<<"srednia wynosi: "<<odc10WskaznikiSrednia(tab,3)<<endl;
        //MOZLIWOSC WSPOLPRACY Z URZADZENIAMI POMIAROWYMI
            delete [] tablica;
            delete [] tablica2;
}
float odc9ileJardow(float x)
{
    return x*1.0936;
}
float odc9ileCali(float m)
{
    return m*39.37;
}
void odc9funkcje()
{
    float metry;
    cout<<"podaj ilosc metrow: ";
    cin>>metry;
    cout<<"ilosc cali wynosi: "<<odc9ileCali(metry)<<endl;


}
void odc8dzialanieNaStringach()
{
    string jeden="Ala ma ";
    string drugi="kota";


    //konkatenacja
    string trzy=jeden+drugi;
    cout<<trzy<<endl;
    trzy=jeden.append(drugi);
    cout<<trzy<<endl;
    string napis=trzy;


    //ziwiekszanie/zmniejszanie liter
    transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
    cout<<napis<<endl;
    transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
    cout<<napis<<endl;


    //wyszukiwanie wyrazu wewnatrz slowa
    size_t pozycja=napis.find("kot");
    if(pozycja!=string::npos)//jesli znaleziono na pozycji
        cout<<"znaleziono na pozycji: "<<pozycja<<endl;
    else
        cout<<"nie znaleziono"<<endl;


    //kasowanie czesci lancucha znakow
    napis.erase(5,3);
    cout<<napis<<endl;


    //wstawianie tekstu do lancucha znakow
    napis.insert(8," kota Filemona");
    cout<<napis<<endl;

    //zastępowanie znakow w lancuchu znakow;
    napis.replace(9,4,"psa");
    cout<<napis<<endl;

    //wyciaganie kawalka teksu z lancucha znakow i zapisywanie tego do nowej zmiennej
    string nowynapis=napis.substr(4,7);
    cout<<nowynapis<<endl;
}
void odc8lancuchyZnakow()
{
    string imie;
    cin>>imie;

    if(imie[imie.length()-1]=='a'){
        cout<<"to jest kobieta"<<endl;
    }else cout<<"to jest mezczyzna"<<endl;
    //""-cudzyslowy stosujemy dla napisow
    //''-apostrofy stosujemy dla pojedynczych znakow
    //bo w napisach na samym koncu napisu jest znak pusty

    string wyraz;
    string marek="marek";
    int licznik=0;
    cout<<"podaj wyraz do odwrocenia"<<endl;
    cin>>wyraz;

    for(int i=wyraz.length()-1;   i>=0; i--)
    {
        cout<<wyraz[i];;
    }

    string napis;
    cout<<"podaj napis"<<endl;
    getline(cin, napis); //dzieki temu pobierzemy caly napis a nie tylko to co jest do spacji
    cout<<napis<<endl;
}
void odc7pomiaryZapisywanieOdczytywanieDanych()
{
    double pomiar[10];
    fstream plik;
    plik.open("pomiar.txt", ios::out );
    cout<<"podaj 10 pomiarow"<<endl;
    for(int i=0; i<2; i++){
        cin>>pomiar[i];
        plik<<pomiar[i]<<endl;
    }
    plik.close();

    string linia;
    float liczby[100];
    int licznik=0;
    plik.open("pomiar.txt", ios::in);
    if(plik.good()==false){
        cout<<"nie mozna, otworzyc pliku"<<endl;
        exit(0);
    }
    while(!plik.eof())//eof()-end of file
    {
        getline(plik,linia);
        liczby[licznik]=atof(linia.c_str());
        licznik++;
    }
    plik.close();
    cout<<"ilosc pomiarow: "<<licznik<<endl;
    for(int i=0; i<licznik; i++){
         cout<<liczby[i]<<endl;
    }
}
void odc7quizOdczytywanieDanych()
{
    string temat,nick;
    string tresc[5];
    string odpA[5], odpB[5], odpC[5], odpD[5];
    string poprawna[5];
    string odpowiedzi[5];
    fstream plik;
    plik.open("quiz.txt",ios::in);
    string zapisanaLinia;
    int licznikSwitchowy=1;
    int licznikTablice=0;
    int punktacja=0;
    if(plik.good()==false){
        cout<<"plik nie istnieje"<<endl;
        exit(0);
    }
    while(getline(plik,zapisanaLinia)){
        switch(licznikSwitchowy)
        {
            case 1:
                {
                    temat=zapisanaLinia;
                    cout<<"Temat quizu to: "<<temat<<endl;
                    break;
                }
            case 2:
                {
                    nick=zapisanaLinia;
                    cout<<"Autor quizu to: "<<nick<<endl;
                    cout<<endl;
                    break;
                }
            case 3:
                {
                    tresc[licznikTablice]=zapisanaLinia;
                    cout<<tresc[licznikTablice]<<endl;
                    break;
                }
            case 4:
                {
                    odpA[licznikTablice]=zapisanaLinia;
                    cout<<"A: "<<odpA[licznikTablice]<<endl;
                    break;
                }
            case 5:
                {
                    odpB[licznikTablice]=zapisanaLinia;
                    cout<<"B: "<<odpB[licznikTablice]<<endl;
                    break;
                }
            case 6:
                {
                    odpC[licznikTablice]=zapisanaLinia;
                    cout<<"C: "<<odpC[licznikTablice]<<endl;
                    break;
                }
            case 7:
                {
                    odpD[licznikTablice]=zapisanaLinia;
                    cout<<"D: "<<odpD[licznikTablice]<<endl;
                    break;
                }
            case 8:
                {
                    poprawna[licznikTablice]=zapisanaLinia;
                    cout<<"podaj poprawna odpowiedz: ";
                    cin>>odpowiedzi[licznikTablice];
                    //zeby zamienic z opcjonalnie duzych liter na male to uzyj ponizszej funkcji
                    //potrzebne do tego dwie biblioteki <algorithm> oraz <string>
                    transform(odpowiedzi[licznikTablice].begin(),odpowiedzi[licznikTablice].end(),odpowiedzi[licznikTablice].begin(), ::tolower);

                    if(odpowiedzi[licznikTablice]==poprawna[licznikTablice]){
                            cout<<"brawo, zdobyles jeden punkt"<<endl;
                            cout<<endl;
                            punktacja++;
                    }else{
                            cout<<"niestety, nie zdobywasz punktu, poprawna odpwoiedz to: "<<poprawna[licznikTablice]<<endl;
                            cout<<endl;
                    }
                    licznikTablice++;
                    licznikSwitchowy=2;
                    break;
                }
        }
       licznikSwitchowy++;
    }
    cout<<endl;
    cout<<"za wszystko zdobyles punktow: "<<punktacja<<endl;
    if(punktacja==5) cout<<"brawo, jest to maksymalna liczba punktow!!!"<<endl;
    plik.close();
}
void odc7odczytywanieDanych()
{
    string imie, nazwisko;
    int nr_tel;

    fstream plik;
    plik.open("wizytowka.txt",ios::in);
    //sciezka zpisu pliku, tryb pobierania danych(strumien wejscia)
    if(plik.good()==false){//funkcja good wskazuje czy program istnieje
        cout<<"plik nie istnieje"<<endl;
        exit(0);//potrzebna biblioteka cstdlib
    }
    //zeby odczytac dane to odczyyjmy je liniami a nie po spacji
    //funkcja getline odczytuje ze zmiennej fstream plik
    //i zapisuje w linie w zmiennej "zapisanaLinia"
    //getline zwróci również fałsz jesli nie będzie wiecej lini do odczytu
    string zapisanaLinia;
    int licznikNrLinii=1;
    while(getline(plik, zapisanaLinia))
    {
        switch(licznikNrLinii)
        {
            case 1:
                {
                    imie=zapisanaLinia;
                    cout<<imie<<endl;
                    break;
                }
            case 2:
                {
                    nazwisko=zapisanaLinia;
                    cout<<nazwisko<<endl;
                    break;
                }
            case 3:
                {
                    nr_tel=atoi(zapisanaLinia.c_str());//konwertowanie stringa na inta
                    cout<<nr_tel<<endl;
                    licznikNrLinii=0;
                    break;
                }
        }
        licznikNrLinii++;
    }
    plik.close();
}
void odc7zapisywanieDanych()
{
string imie, nazwisko;
int nr_tel;

cout<<"podaj imie: ";       cin>>imie;
cout<<"podaj nazwisko: ";   cin>>nazwisko;
cout<<"podaj numer tel: ";  cin>>nr_tel;

fstream plik;//do zapisywania jest potrzebna biblioteka fstream
plik.open("wizytowka.txt",ios::out | ios::app);
//sciezka do pliku, tryb otwarcia || tryp dodawania danych do obecnego pliku (append)
plik<<imie<<endl;//zapisywanie
plik<<nazwisko<<endl;
plik<<nr_tel<<endl;
plik.close();//zamykam polaczenie
}
void odc6instrukcjaSwitch()
{
    float x,y,wynik;
    char wybor=0;
    while(true) //nieskonczona petla
    {
    cout<<"podaj dwie liczby"<<endl;
    cin>>x>>y;
    cout<<"Menu glowne"<<endl;
    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cout<<"3.Mnozenie"<<endl;
    cout<<"4.Dzielenie"<<endl;
    cout<<"5.zakoczenie programu"<<endl;
    cout<<"wybierz opcje"<<endl;
    //cin>>wybor;       // zamiast tej instrukcji uzyjemy ponizszej
    wybor=getch();      // getch() nie czeka na nacisniecie entera
                        //wymaga biblioteki #include <coinio.h">
                        //"trzeba pamietac ze pobiera to chary wiec
                        //w switchu musisz dodac apostrofy
    switch(wybor)
    {
        case '1':
            {
                wynik=x+y;
            }
            break;
        case '2':
            {
                wynik=x-y;
            }
            break;
        case '3':
            {
                wynik=x*y;
            }
            break;
        case '4':
            {
                if(y==0) cout<<"nie dzielimy przez zero"<<endl;
                else wynik=x/y;
            }
            break;
        case '5':
            {
                exit(0);
            }
        default:
            cout<<"nie wybrales dobrej opcji"<<endl;
    }
    cout<<wynik<<endl;
    getchar();getchar();    //czeka na wpisanie znaku (czyli na entera);;

    system("cls");          //wymaga biblioteki: #include "stdio.h"
                            //czyszczenie ekranu;
    }
}
void odc6instrukcjaSwitch2()
{
    char nr_miesiaca;
    cout<<"podaj numer miesiaca ktory cie interesuje"<<endl;
    if(!(cin>>nr_miesiaca))
    {
        cerr<<"to nie jest liczba!"; //wyswietla w przypadku bledu
        exit(0);        //wymaga bilioteki cstdlib
    }
    switch(nr_miesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        {
            cout<<"ten miesiac ma 31 dni"<<endl;
            break;
        }
    case 4:
    case 6:
    case 9:
    case 11:
        {
            cout<<"ten miesiac ma 30 dni"<<endl;
            break;
        }
    case 2:
        {
            int rok;
            cout<<"podaj rok:"<<endl;
            cin>>rok;
            if((rok%4==0 && rok%100!=0)||(rok%400==0)){
                cout<<"jest rok przetepny i luty ma 29 dni"<<endl;
            }
            else{
                cout<<"nie ma roku przestepnego i luty ma 28 dni" <<endl;
            }
            break;
        }
    default: cout<<"nie wybrales zadnej wlasciwej opcji"<<endl;
    }

}
void odc4liczbaLosowa()
{
    cout<<"pomyslalem sobie liczba od 1 do 100; zgadnij ja"<<endl;
    srand(time(NULL));
    int liczba=rand()%100+1;
    cout<<liczba<<endl;
    int zgadywana;
    int proba=0;
    cout<<"wpisz Liczbe"<<endl;
    do{
        cin>>zgadywana;
        proba++;
        if(zgadywana<liczba){
            cout<<"niestety nie udalo sie, liczba jest za mala, sprobuj raz jeszcze"<<endl;
        }else if(zgadywana>liczba){
            cout<<"niestety nie udalo sie,liczba jest za duza, sprobuj raz jeszcze"<<endl;
        }else{
            cout<<"brawo udalo ci sie zgadnac za "<<proba<<" probą"<<endl;
        }
    }while(zgadywana!=liczba);
    system("pause"); //musi zawierac bilioteke <cstdlib>
}
void odc4wygaszenie()
{
    for(int i=10; i>=0; i--)
    {
        system("cls"); //wyczyszczenie ekranu konsoli; potrzebna biblioteka cstdlib
        cout<<i;
        Sleep(1000);
    }
}
void odc4totolotekLiczbaLosowa()
{
    cout<<"witaj w losowaniu, za 3 sekundy nastapi zwolnienie blokady"<<endl;
    for(int i=3; i>=0; i--)
    {
        cout<<i<<"s"<<endl;
        Sleep(1000);        //potrzebna bilioteka <windows.h>
        system("cls");
    }
    srand(time(NULL));      //potrzebna biblioteka <time.h>
    int liczba;
    int tab[6];
    for(int i=0; i<6; i++)
    {
        liczba =rand()%49+1;
        bool flaga=true;
        for(int j=0; j<i; j++)
        {
           if(liczba==tab[j]) flaga=false;
           cout<<"bylo powtorzenie"<<endl;
        }
        if(flaga==false)i--;
        else{
            tab[i]=liczba;
            cout<<tab[i]<<endl;
            Sleep(1000);
        }
    }
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
string napis(int ileLudzi, int ileCukierkow)
{
    int wynik=ileCukierkow/(ileLudzi-1);
    int reszta=ileCukierkow-(wynik*(ileLudzi-1));
    //cout<<"wychodzi ze: "+wynik;
    string napis ="Na jednego ucznia przypadnie: " +to_string(wynik)+" i zostanie "+to_string(reszta)+"  cukierkow";
    cout<<"przypadnie: "<<wynik<< " i zostanie "<<reszta<<" cukierkow"<<endl;
    return napis;
}
bool odc2ify2(string PIN_bank)
{
    string PIN="";
    cout<<"podaj poprawny Pin: ";
    cin>>PIN;
    //if(PIN.equal(PIN_bank))
    if(PIN==PIN_bank)
    {
        cout<<"tak";
        return true;
    }
    else
    {
        cout<<"nie";
        return false;
    }
}
bool odc2ify3()
{
    string login="";
    string haslo="";
    cout<<"podaj login ";
    cin>>login;
    cout<<"podaj haslo ";
    cin>>haslo;


    if((login=="admin")&&(haslo=="szarlotka"))
    {
        cout<<"udalo sie zalogowac";
        return true;
    }
    else
    {
        cout<<"nie udalo sie";
        return false;
    }
}
bool odc2ify()
{
    int wiek=0;
    cout<<"podaj swoj wiek ";
    cin>>wiek;
    if(wiek>=18 &&wiek>=50)
    {
        cout<<"pelnoletni i moze prezydent";
        return true;
    }else if(wiek>=18 && wiek<50)
    {
        cout<<"pelnoletni ale nie prezydent";
        return true;
    }else
    {
        cout<<"niepelnoletni i nie prezydent";
        return false;
    }

}
void odc5tablice2Fibonacci(int n)
{
    long double fib[100000];
    fib[0]=1;
    fib[1]=1;
    for(int i=2 ; i<=n; i++)
    {
        fib[i] =fib[i-1] + fib[i-2];
    }
    for(int i=0; i<n; i++)
    {
        cout<<fib[i]<<endl;
    }
}
float odc5tablice1()
{
  cout<<"podaj 5 ocen:"<<endl;
  float oceny[5];
  float suma=0;
  for(int i=0; i<5; i++)
  {
    cin>>oceny[i];
    suma+=oceny[i];
  }
  return suma/5;
}
int odc3Petle(int liczbaBakterii)
{
    int liczbaGodzin=0;
    while(liczbaBakterii<=1000000)
    {
        cout<<liczbaBakterii<<endl;
        liczbaBakterii=liczbaBakterii*2;
        liczbaGodzin++;
    }
    cout<<liczbaGodzin<<endl;
}
void odc0TaksonomiaBlooma()
{
    //Oceniania
    //Synteza
    //Analiza
    //Zastosowanie
    //Zrozumienie
    //Wiedza
}
