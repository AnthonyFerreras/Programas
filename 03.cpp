//Crear un programa con un motherclass animal, dentro definir nombre y edad como variables.

#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
protected:
    int age; char name[10];
public:
    void set_data(int a, char b[10])
    {
        age = a;
      strcpy(b, name); 
    }

};

class Zebra :public Animal
{
public:

    void message_zebra()
    {
        cout << "El nombre de la Zebra " << name << " Tiene " << age << "years old. The zebra comes from Africa. \n";
    }
};

class Dolphin : public Animal
{
public:

    void message_dolphin()
    {
        cout << "El nombre del Dolphin " << name << " Tiene " << age << "years old. The dolphin comes from New Zeland.\n";
    }
};


int main()
{
    Zebra zeb;
    Dolphin dol;
    char n1[10] = "Ana";
    char n2[10] = "Jin";

    zeb.set_data(5, n1);
    dol.set_data(2, n2);

    zeb.message_zebra();
    dol.message_dolphin();

    return 0;
}