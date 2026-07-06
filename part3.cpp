        //****************************
        // OPCION 4
        // CALCULAR TOTAL
        //****************************

        case 4:

            subtotal = 0;

            cout << "\n===== CARRITO =====" << endl;

            for(int i = 0; i < 5; i++)
            {
                if(carritoCantidades[i] > 0)
                {
                    cout << productos[i]
                         << "  Cantidad: " << carritoCantidades[i]
                         << "  Subtotal: $" << carritoCantidades[i] * precios[i]
                         << endl;

                    subtotal = subtotal + (carritoCantidades[i] * precios[i]);
                }
            }

            if(subtotal == 0)
            {
                cout << "El carrito esta vacio." << endl;
            }
            else
            {
                cout << "\nSubtotal: $" << subtotal << endl;

                cout << "¿Desea aplicar descuento? (S/N): ";
                cin >> confirmar;

                if(confirmar == 'S' || confirmar == 's')
                {
                    double porcentaje;

                    cout << "Ingrese el porcentaje de descuento: ";
                    cin >> porcentaje;

                    descuento = subtotal * (porcentaje / 100);
                    total = subtotal - descuento;

                    cout << "Descuento: $" << descuento << endl;
                }
                else
                {
                    total = subtotal;
                }

                cout << "Total a pagar: $" << total << endl;
            }

            break;

        //****************************
        // OPCION 5
        // CANCELAR COMPRA
        //****************************

        case 5:

            cout << "¿Seguro que desea cancelar la compra? (S/N): ";
            cin >> confirmar;

            if(confirmar == 'S' || confirmar == 's')
            {
                for(int i = 0; i < 5; i++)
                {
                    stock[i] = stock[i] + carritoCantidades[i];
                    carritoCantidades[i] = 0;
                }

                subtotal = 0;
                total = 0;

                cout << "Compra cancelada correctamente." << endl;
            }
            else
            {
                cout << "La compra continua." << endl;
            }

            break;