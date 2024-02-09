/*************************************************************

NOMBRE: Roberto perez Zamora
FECHA: 08/02/24
PROGRAMA: Actividad de programacion - 3.cpp
CENTRO UNIVERSITARIO DE LOS ALTOS / UNIVERSIDAD DE GUADALAJARA
INGENIERIA EN COMPUTACION / 2DO SEMESTRE
PROFESOR: Sergio Franco Casillas
DESCRIPCION: Elaborar un programa en C++ donde se le pida un número al usuario, y que tome en cuenta las siguientes condiciones:

Si el número es mayor a 0 y menor a 500, subir de 5 en 5, 100 veces.
Si el número es mayor a 500 y menor a 1000, subir el número de 10 en 10, 50 veces
Si el número es mayor a 1000, “No se puede calcular el valor”.
Debe hacer un ciclo en donde pregunte si desea terminar el programa.
Contar con las veces que realizó una operación.
En todo momento mostrar valores
Elaborar diagrama de flujo.

*************************************************************/

// Bibliotecas
// Incluir biblioteca estandar
#include <iostream>

// 
int main() 
{
    // number y count para guardar el número y el contador
    int number;
    int count = 0;

    // Iniciar el ciclo do-while
    do {
        // Solicitar un numero al usuario
        std::cout << "Ingresar Numero: ";
        std::cin >> number;

        // Condiciones para saber cuantas veces se va a repetir la operación

        // Si el número es mayor a 0 y menor a 500, subir de 5 en 5, 100 veces.
        if (number < 500) {
            // Ciclo for para sumar de 5 en 5 100 veces
            for (int i = 0; i < 500; i += 5) 
            {
                number += 5;
                count++;
                std::cout << "Valor: " << number << std::endl;
            }
        } else if (number <= 1000) {
            // Ciclo for para sumar de 10 en 10 50 veces
            for (int i = 0; i < 500; i += 10) 
            {
                number += 10;
                count++;
                std::cout << "Valor: " << number << std::endl;
            }
        } else 
        {
            std::cout << "No se puede calcular el valor" << std::endl;
        }

            // Mostrar el total de operaciones realizadas
            std::cout << "Total de operaciones Ejecutadas: " << count << std::endl;

        // Preguntar si el usuario quiere terminar el programa o volver a iniciar
        char choice;
        std::cout << "Deseas Terminar el programa? (y/n): ";
        std::cin >> choice;

        // Escenario posibles del menu
        if (choice == 'y' || choice == 'Y') 
        {
            break;
        }

        //Mientras el usuario no quiera terminar el programa, se repetira el ciclo
    } while (true);

    // Regresar 0
    return 0;
    // Fin del programa
}
