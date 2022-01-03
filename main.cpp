#include <iostream>

using namespace std;

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
