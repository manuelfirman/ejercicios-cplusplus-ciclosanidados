#include <iostream>

using namespace std;

/* CONSIGNA
Hacer un programa para ingresar los valores de los pesos de distintas
encomiendas que se deben enviar a distintos clientes y que finaliza cuando se 
ingresa un peso negativo. Se deben agrupar las encomiendas en camiones que 
pueden transportar hasta 200 kilos en total. 
Por ejemplo:
10, 20, 140, 70, 100, 40, 10, 50, 80, 90, 30, 40, 50, -10.
Camión 1. Camión 2 Camión 3 Camión 4 Camión 5
*/

int main()
{
    //Variables
    int pesoEncomienda=0, numCamion=0, mayorCamion=0, numMayorCamion;
    //ID
    cout << "Ingrese el peso de la encomienda: "; cin >> pesoEncomienda;
    //While corte
    while(pesoEncomienda>0){
        int acuPeso=0, conEncomiendas=0;
        numCamion++;
        //While sublotes
        while((acuPeso+pesoEncomienda)<=200 && pesoEncomienda>0){
                    conEncomiendas++;
                    acuPeso+=pesoEncomienda;
            //ID dentro del while
            cout << "Ingrese el peso de la encomienda: "; cin >> pesoEncomienda;
        }
        //Camion con mas encomiendas
        if(conEncomiendas>mayorCamion){
            mayorCamion=conEncomiendas;
            numMayorCamion=numCamion;
        }
    //Out por camion
    cout << "Camion " << numCamion << ": " << acuPeso << "kg." << endl;
    }
    //Out mayor camion
    cout << "El camion con mayor cantidad de encomiendas es el N " << numMayorCamion << " con " << mayorCamion << " encomiendas." << endl;
    cout << "Se cargaron en total " << numCamion << " camiones." << endl;


    return 0;
}
