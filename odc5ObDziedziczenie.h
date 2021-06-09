#include <iostream>
using namespace std;

class odc5ObPunkt
{
  protected:
  //private:
    float x,y;
    string nazwa;
  public:
      odc5ObPunkt(string="S", float=0, float=0);
      void wyswietl();

};
class odc5ObKolo :public odc5ObPunkt //dziedziczysz klasê Punkt w sposob public
{
  protected:
  //private:
    float r;
    string nazwa; //przesloniecie atrybutu nazwa
  public:
    odc5ObKolo(string="Kolo", float=10, float=10, float=1);
    void wyswietl();
};
class odc5ObKula :public odc5ObKolo
{
  private:
    float z;
  public:
    odc5ObKula(string="Kula",float=11,float=12,float=13,float=3);
    void wyswietl();
};
