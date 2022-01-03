#include <iostream>

using namespace std;

int main()
{
    int inZona, numeroCliente;

    cout << "Ingrese el Numero de Zona: "; cin >> inZona;
    //While corte
    while(inZona!=0){
        //Variables
        float zonaActual=inZona, conClientes=0, cantidadUsuarios=0, acuKw=0, importeTotal=0, kiloWatts=0;
        //While sublote (zonas)
        while(inZona==zonaActual){
            cout << "Ingrese el Numero de Cliente: "; cin >> numeroCliente;
            cout << "Ingrese los kilowatts consumidos: "; cin >> kiloWatts;
            conClientes++;
            acuKw+=kiloWatts;
            cout << "Ingrese el Numero de Zona: "; cin >> inZona;
        }
        //Calculo costo por kilowatt
        if(acuKw>201){
            importeTotal=acuKw*0.15;
        }else{
            if(acuKw>101){
                importeTotal=acuKw*0.12;
            }else{
                importeTotal=acuKw*0.10;
            }
        }
    //OUT GENERAL
    cout << "Zona " << zonaActual << endl;
    cout << "Cantidad de usuarios en la zona: " << conClientes << endl;
    cout << "Total facturado en la zona: $" << importeTotal << ". (" << acuKw << " kw)" << endl;
    }


    return 0;
}
