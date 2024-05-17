#include <iostream>
using namespace std;




class Base 
{
    public:
        int atributoPublico;
        
        void metodoPublico() 
        {
            cout << "Metodo publico de la clase Base" << endl;
        }
        
    protected:
        int atributoProtegido;
        
        void metodoProtegido() 
        {
            cout << "Metodo protegido de la clase Base" << endl;
        }
        
    private:
        int atributoPrivado;
        
        void metodoPrivado() 
        {
            cout << "Metodo privado de la clase Base" << endl;
        }
};




class DerivadaPublica : public Base 
{
    public:
        void accederMiembrosBase() 
        {
            atributoPublico = 1;
            metodoPublico();
        }
};


class DerivadaProtegida : protected Base 
{
    public:
        void accederMiembrosBase() 
        {
            atributoProtegido = 1;
            metodoProtegido();
        }
};


class DerivadaPrivada : private Base 
{
    public:
        void accederMiembrosBase() 
        {
            // No se puede acceder directamente a los miembros de la clase base
            // atributoPrivado = 1; // Esto generaria un error
            // metodoPrivado(); // Esto generaria un error
        }
};


int main() 
{
    //  herencia publica
    DerivadaPublica objPublica;
    objPublica.accederMiembrosBase();


    //  herencia protegida
    DerivadaProtegida objProtegida;
    // objProtegida.accederMiembrosBase();  Esto generaria un error porque accederMiembrosBase() es miembro publico


    // herencia privada
    DerivadaPrivada objPrivada;
    // objPrivada.accederMiembrosBase();  Esto generaria un error porque accederMiembrosBase() es miembro publico


    return 0;
}
