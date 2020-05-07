#include <iostream>
#include <list>

using namespace std;

class Contacto 
{
    private:
        string nombre, Email;
        int telefono;


    
    public:
        Contacto(){}

        ~Contacto(){}

        void setContacto(string nom, int tel , string Em)  
        {
            nombre = nom ;
            Email = Em ;
            telefono = tel ;

        }

        string getNombre() 
        {
            return nombre;
        }
        string getEmail()
        {
            return Email;
        }
        int getTelefono() 
        {
            return telefono;
        }
};

class Agenda 
{
    private:    
        list <Contacto*> listaDeContactos;

    
    public:
        ~Agenda() {}

        void addContacto(Contacto* nContacto)
        {
           listaDeContactos.push_back(nContacto);
        }

        void listarContactos()
        {
            cout<<"-------------------------"<<endl;
            cout<<"   Agenda de Contactos    "<<endl;
            cout<<"-------------------------"<<endl;

           
                for(Contacto* currentContact : listaDeContactos)
                {
                    cout << "Nombre:  " << currentContact->getNombre() << endl;
                    cout << "Telefono:  " << currentContact->getTelefono() << endl;
                    cout << "Correo Electronico:  " <<currentContact->getEmail() << endl;
                }

            cout<<"-------------------------"<<endl;
        }
};

int main() 
{
        Contacto* contacto = new Contacto();
        contacto->setContacto("Celes", 4324324, "celes@hotmail.com") ;
        //cout<<contacto->getNombre()<<endl;

        Contacto* contacto2 = new Contacto();
        contacto2->setContacto("Luis", 9399929, "luis@gmail.com") ;

        Agenda* agenda = new Agenda();

        agenda->addContacto(contacto);
        agenda->addContacto(contacto2);

        agenda->listarContactos();

        delete contacto;
        delete agenda;
        cin.ignore ();
        cin.get();
        return 0;
        }
