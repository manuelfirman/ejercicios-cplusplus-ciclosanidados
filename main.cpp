#include <iostream>

using namespace std;

int main()
{
    //Variables
    int numPaquete=0, cantidadPersonas=0, precioPersona=0, horasExcursion=0, tipoActividad, personasTotales=0;
    //ID
    cout << "Ingrese el numero de paquete: "; cin >> numPaquete;
    cout << "Ingrese el tipo de actividad (1-Montaña, 2-Trekking, 3-Rafting, 4-Bicicleta, 5-Canopy, 6-Escalar, 7-Sky, 8-Snowboard, 9-Jumping, 10-Parapente): "; cin >> tipoActividad;
    //While Corte
    while(numPaquete!=0){
        int paqVendidos=0, acuPersonas=0, recaud=0, mayorRecaudacion=0;
        int zonaActual=0;
        zonaActual=tipoActividad;
        //While sublotes
        while(tipoActividad==zonaActual){
            cout << "Ingrese la cantidad de personas: "; cin >> cantidadPersonas;
            cout << "Ingrese el precio por persona: "; cin >> precioPersona;
            cout << "Ingrese las horas de excursion: "; cin >> horasExcursion;
            paqVendidos++;
            acuPersonas+=cantidadPersonas;
            //Precio por venta
            recaud=cantidadPersonas*precioPersona;
            cout << "Precio por venta: $" << recaud << endl;
            //ID
            cout << "Ingrese el numero de paquete: "; cin >> numPaquete;
            cout << "Ingrese el tipo de actividad (M-Montaña, T-Trekking, R-Rafting, B-Bicicleta, C-Canopy, E-Escalar, K-Sky, S-Snowboard, J-Jumping, P-Parapente): "; cin >> tipoActividad;
        }
    //Mayor venta
    if(recaud>mayorRecaudacion){
        mayorRecaudacion=recaud;
    }
    cout << "La mayor venta de la aventura " << zonaActual << " es $" << mayorRecaudacion << endl;
    //Personas por temporada
    personasTotales+=acuPersonas;
    //OUT Paquetes vendidos por aventura
    cout << "La aventura " << zonaActual << " ha vendido " << paqVendidos << " paquetes" << endl;
    }
    //OUT personas por temporada
    cout << "La cantidad de personas que disfrutaron la temporada es: " << personasTotales << endl;


    return 0;
}
