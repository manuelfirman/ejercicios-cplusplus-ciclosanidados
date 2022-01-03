#include <iostream>

using namespace std;

/*
Se dispone de una lista de 10 grupos de números enteros separados entre ellos 
por ceros. Se pide determinar e informar:
a. El número de grupo con mayor porcentaje de números impares 
positivos respecto al total de números que forman el grupo.
b. Para cada grupo, el último número primo y en qué orden apareció en 
ese grupo. Si en un grupo no hubiera números primos, informarlo con 
un cartel aclaratorio.
c. Informar cuántos grupos están formados por todos números ordenados 
de mayor a menor
*/
int main()
{
    //VARIABLES MAIN
    int inNum;
    int gMaxImparesPositivos, pgMaxImparesPositivos;
    int conOrdenados=0; // CONTADOR ORDENADOS
    for(int x=0; x<4; x++){
        //VARIABLES FOR
        int con=0, conImparesPositivos=0, porcentajeImparesPositivos=0; // CONTADOR DE IMPARES POSITIVOS
        int ultNumPrimo=0, posUltNumPrimo=0; // ULTIMO NUMERO PRIMO
        int gOrdenado=0; // BANDERA ORDENADOS
        int nMayor=0;
        //PEDIDO DE DATOS
        cout << "Ingrese un numero o 0 (cero) para cambiar de sublote: "; cin >> inNum;
        nMayor=inNum;
        while(inNum!=0){
            //VARIABLES WHILE
            int conPrimo=0;
            con++;
            // CONTADOR IMPARES POSITIVOS
            if(inNum%2!=0 && inNum>0){
                    conImparesPositivos++;
            }
            // ULTIMO NUMERO PRIMO
            for(int y=1;y<=inNum;y++){
                if(inNum%y==0){
                    conPrimo++;
                }
            }
            if(conPrimo==2){
                ultNumPrimo=inNum;
                posUltNumPrimo=x+1;
            }
            //GRUPO ORDENADO DE MAYOR A MENOR
            if(inNum<=nMayor){
                nMayor=inNum;
            }else{
                gOrdenado=1;
            }
            //PEDIDO DE DATOS DENTRO DEL WHILE
            cout << "Ingrese un numero o 0 (cero) para cambiar de sublote: "; cin >> inNum;
        }
        //CALCULO PORCENTAJE IMPARES POSITIVOS POR GRUPO
        porcentajeImparesPositivos=(conImparesPositivos*100)/con;
        //GRUPO MAYOR IMPARES POSITIVOS
        if(porcentajeImparesPositivos>gMaxImparesPositivos){
            gMaxImparesPositivos=porcentajeImparesPositivos;
            pgMaxImparesPositivos=x+1;
        }
        //CONTADOR DE GRUPOS ORDENADOS
        if(!gOrdenado){
            conOrdenados++;
        }
        // MENSAJE ULTIMO PRIMO
        if(ultNumPrimo!=0){
            cout << "-- El ultimo numero primo ingresado por el Grupo N " << posUltNumPrimo << " fue el " << ultNumPrimo << " --" << endl;
        }else{
            cout << "-- No se han ingresado numeros primos en el Grupo N " << x+1 << " --" << endl;
        }
    }
    //MENSAJES SALIDA GRUPO MAYOR IMPAR POSITIVO
    cout << "El grupo con mayor porcentaje de numeros impares positivos es el Grupo N " << pgMaxImparesPositivos << " con %" << gMaxImparesPositivos << endl;
    //MENSAJE DE SALIDA GRUPOS ORDENADOS
    cout << "Existen " << conOrdenados << " grupos que fueron ingresados de manera ordenada." << endl;


    return 0;
}
