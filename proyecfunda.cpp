#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    // Arreglos
    string productos[5] = {"Hamburguesa", "Pizza", "Pollo", "Papas", "Gaseosa"};
    double precios[5] = {3.50, 5.00, 4.25, 1.75, 1.25};
    int stock[5] = {10, 8, 12, 15, 20};
    int carritoCantidades[5] = {0,0,0,0,0};
    /////////////////////////////////////////////////////
    int opcion = 0;
    int id, cantidad;
    int accion= 0;
    double subtotal = 0;
    double total = 0;
    double descuento = 0;

    char otro;
    char confirmar;

    while(opcion != 7)
    {
        cout << "\n========== MENU ==========" << endl;
        cout << "1. Ver menu" << endl;
        cout << "2. Realizar pedido" << endl;
        cout << "3. Modificar pedido" << endl;
        cout << "4. Calcular total" << endl;
        cout << "5. Cancelar compra" << endl;
        cout << "6. Guardar factura" << endl;
        cout << "7. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {

        //****************************
        // OPCION 1
        //****************************

        case 1:

            cout << "\nMENU DISPONIBLE\n" << endl;

            for(int i=0; i<5; i++)
            {
                cout << "ID: " << i << endl;
                cout << "Producto: " << productos[i] << endl;
                cout << "Precio: $" << precios[i] << endl;
                cout << "Stock: " << stock[i] << endl;
                cout << "------------------------" << endl;
            }

            break;

        //****************************
        // OPCION 2
        //****************************

        case 2:

            otro='S';

            while(otro=='S' || otro=='s')
            {
                cout << "\nIngrese el ID del producto: ";
                cin >> id;

                if(id>=0 && id<5)
                {
                    cout << "Cantidad: ";
                    cin >> cantidad;

                    if(cantidad>0)
                    {
                        if(cantidad<=stock[id])
                        {
                            carritoCantidades[id] += cantidad;
                            stock[id] -= cantidad;

                            cout << "Producto agregado al carrito." << endl;
                        }
                        else
                        {
                            cout << "Stock insuficiente." << endl;
                        }
                    }
                    else
                    {
                        cout << "Cantidad invalida." << endl;
                    }
                }
                else
                {
                    cout << "ID invalido." << endl;
                }

                cout << "Desea agregar otro producto? (S/N): ";
                cin >> otro;
            }

            break;
