#include <iostream>
using namespace std;

class odc6Ksztalt
{
public:
    virtual void oblicz_pole()=0;
    //czysta funkcja wirtualna;
};
class odc6Kolo :public odc6Ksztalt
{
private:
    float r;
public:
    odc6Kolo(float=1);
    virtual void oblicz_pole();
};
class odc6Kwadrat :public odc6Ksztalt
{
private:
    float a;
public:
    odc6Kwadrat(float=1);
    virtual void oblicz_pole();
};
