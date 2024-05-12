#include <iostream>
#include <string>
using namespace std;

class Vehiculo
{
    private:
        string modelo;
        string marca;
        int fechafabricacion;
        float precio;
    public:
        Vehiculo(string _modelo,string _marca, int _fechafabricacion, float _precio) :  //Constructor
        modelo(_modelo), marca(_marca),fechafabricacion(_fechafabricacion),precio(_precio){}

        void Detalles()
        {
            cout << "Modelo: " <<  modelo << endl;
            cout << "Marca: " <<  marca << endl;
            cout << "Fecha de Fabricacion: " <<  fechafabricacion << endl;
            cout << "Precio: S/" <<  precio << endl;

        } 
};

class Automovil : private Vehiculo
{
    private:
        int nropuertas;
        string combustible;

    public:
        Automovil(string _modelo,string _marca, int _fechafabricacion, float _precio, int _nropuertas, string _combustible): //Constructor 
        Vehiculo(_modelo, _marca,_fechafabricacion, _precio), nropuertas(_nropuertas), combustible(_combustible){}

    void Detalles()
    {
        Vehiculo::Detalles();
        cout << "Numero de puertas: " <<  nropuertas << endl;
        cout << "Combustible: " <<  combustible << endl;
    }

};

class Motocicleta : private Vehiculo
{
    private:
        float cilindrada; // volumen total de los cilindros de un motor
    public:
        Motocicleta(string _modelo,string _marca, int _fechafabricacion, float _precio, float _cilindrada): //Constructor 
        Vehiculo(_modelo, _marca,_fechafabricacion, _precio), cilindrada(_cilindrada) {}

    void Detalles()
    {
        Vehiculo::Detalles();
        cout << "Cilindrada: " <<  cilindrada << "Galones" << endl;
    }


};

int main()
{
    Automovil auto01("Delorean", "DMC-12", 1981, 120000,2,"Gasolina");
    cout << "-----Automovil-----" << endl;
    auto01.Detalles();

    Motocicleta moto01("Honda", "CBR500R", 2021, 24000, 500);
    cout << "-----Motocicleta-----" << endl;
    moto01.Detalles();
}