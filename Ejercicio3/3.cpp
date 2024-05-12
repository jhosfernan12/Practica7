#include <iostream>
#include <string>
using namespace std;

class Movil
{
public:
    string marca;
    string modelo;
    string sistemaoperativo;


    Movil(string _marca, string _modelo, string _sistemaoperativo) : marca(_marca), modelo(_modelo), sistemaoperativo(_sistemaoperativo) {}  // Constructor


    ~Movil() // Destructor
    {
        cout << "Se ha destruido un objeto de Movil: " << marca << " " << modelo << endl;  
    }

    void Detalles()
    {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Sistema Operativo: " << sistemaoperativo << endl;
    }
};

class Telefono : public Movil
{
public:
    Telefono(string _marca, string _modelo, string _sistemaoperativo) : Movil(_marca, _modelo, _sistemaoperativo) {}  // Constructor

    ~Telefono() // Destructor
    {
        cout << "Se ha destruido un objeto de Telefono: " << marca << " " << modelo << endl;  
    }

    void Detalles()
    {
        Movil::Detalles();
    }

};

class Tablet : public Movil
{
public:
    Tablet(string _marca, string _modelo, string _sistemaoperativo) : Movil(_marca, _modelo, _sistemaoperativo) {}  // Constructor


    ~Tablet()  // Destructor
    {
        cout << "Se ha destruido un objeto de Tablet: " << marca << " " << modelo << endl; 
    }

    void Detalles()
    {
        Movil::Detalles();
    }

};

int main()
{
    cout << "--------Telefono-------" << endl;
    Telefono telefono01("Samsung", "Galaxy S21", "Android");
    telefono01.Detalles();

    cout << "--------Tablet-------" << endl;
    Tablet tablet01("Apple", "iPad Air", "iPadOS");
    tablet01.Detalles();

    return 0;
}
