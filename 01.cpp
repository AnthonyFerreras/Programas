//programa que defina una clase de shape con un constructor que dé valor al ancho y al alto.
#include <iostream>
using namespace std;

class Shape1
{
protected:
    float width, height;
public:
    void set_data (float a, float b)
    {
        width = a;
        height = b;
    }
};
class Rectangle1: public Shape1
{
public:
    float area ()
    {
        return (width * height);
    }
};
class Triangle1: public Shape1
{
public:
    float area ()
    {
        return (width * height / 2);
    }
};
int main (){
//Valores
    Rectangle1 rect;
    Triangle1 tri;
    rect.set_data (8,6);
    tri.set_data (5,8);
    cout << rect.area() << endl;
    cout << tri.area() << endl;
    return 0;
}