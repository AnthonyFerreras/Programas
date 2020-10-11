//Escriba un programa con un motherclass y una clase inherited daughterclass.
#include <iostream>
using namespace std;

class motherclass{
public:
    void display ()
    {
        cout << "motherclass: display function\n";
    }
};

class inheriteddaughterclass : public motherclass{
public:
    void display ()
    {
        cout << "Hola, soy Josefina, hija de Maria.\n\n";
    }
};

int main ()
{
    inheriteddaughterclass Josefina;
    Josefina.display();
    return 0;
}