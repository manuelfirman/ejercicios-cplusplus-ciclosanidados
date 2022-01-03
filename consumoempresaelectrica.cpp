#include <iostream>

using namespace std;

/* CONSIGNA
Una compañía de electricidad necesita calcular anualmente el consumo que ha
registrado cada uno de sus usuarios y el monto pagado por cada uno de ellos.
Para ello tiene un lote de registros por cada uno de los usuarios con los 
siguientes datos:
• Zona (numérico entero).
• Número de cliente (número de cuatro dígitos no correlativos).
• Cantidad de kilovatios consumidos en el periodo.
El lote se encuentra agrupado (no ordenado) por zona y finaliza con un registro 
con zona igual a cero.
Se pide generar un listado con el siguiente formato:
Zona: XX
Cantidad de usuarios de la zona: XX
Total facturado en la zona: XX
Zona: XX
Cantidad de usuarios de la zona: XX
Total facturado en la zona: XX

El precio es escalonado según la siguiente escala:
• $ 0.10 por kv por los primeros 100 kv de consumo.
• $ 0.12 por kv por el consumo de 101 a 200 kvs.
• $ 0.15 por kv por el consumo de 201 kvs en adelante.
*/

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
