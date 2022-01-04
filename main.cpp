#include <iostream>

using namespace std;

int main()
{
    //Variables
    int numProveedor=0, cantProductos=0, numProducto=0, conProveedor=0;
    float precioProducto=0, factA=0, factB=0, factC=0;
    char tipoFactura;
    //ID Proveedor
    cout << "Ingrese el numero de proveedor: "; cin >> numProveedor;
    //While corte
    while(numProveedor!=0){
        conProveedor++;
        int proveedorActual=numProveedor, precioVenta=0, mayorVenta=0;
        //While sublotes
        while(numProveedor==proveedorActual){
            //ID
            cout << "Ingrese el tipo de factura (A, B, C)"; cin >> tipoFactura;
            cout << "Ingrese el numero de producto: "; cin >> numProducto;
            cout << "Ingrese el precio del producto: "; cin >> precioProducto;
            cout << "Ingrese la cantidad de productos vendida: "; cin >> cantProductos;
                //Calculo venta
                precioVenta=precioProducto*cantProductos;
                //Mayor venta por proveedor
                if(precioVenta>mayorVenta){
                    mayorVenta=precioVenta;
                }

                if(tipoFactura=='A'){
                    factA+=precioVenta;
                }else if(tipoFactura=='B'){
                    factB+=precioVenta;
                }else{
                    factC+=precioVenta;
                }

                //ID Proveedor
                cout << "Ingrese el numero de proveedor: "; cin >> numProveedor;
            }


                //OUT Mayor venta por proveedor
    cout << "La mayor venta del proveedor N " << conProveedor << " fue $" << mayorVenta << endl;

        }






    //OUT inversion anual
    cout << "La inversion total del año fue: " << endl;
    cout << "Factura A: $" << factA << endl;
    cout << "Factura B: $" << factB << endl;
    cout << "Factura C: $" << factC << endl;

    return 0;
}
