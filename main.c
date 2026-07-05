#include <stdio.h>
#include "empleados.h"

int main()
{
    int opcion;

    do
    {
        printf ("\n");
        printf ("====================================\n");
        printf ("  SISTEMA DE GESTION DE EMPLEADOS\n");
        printf ("====================================\n");
        printf ("1. Registrar empleado\n");
        printf ("2. Listar empleados\n");
        printf ("3. Buscar empleado\n");
        printf ("4. Actualizar empleado\n");
        printf ("5. Eliminar empleado\n");
        printf ("6. Salir\n");

        printf ("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
                printf("Registrar empleado\n");
                break;

            case 2:
                printf("Listar empleados\n");
                break;

                case 3:
                printf("Buscar empleados\n");
                break;

                case 4:
                printf("Actualizar empleado\n");
                break;

                case 5:
                printf("Eliminar empleado\n");
                break;

                case 6:
                printf("Saliendo del programa...\n");
                break;

                default:
                printf("Opcion no valida\n");
        }

    }while(opcion != 6);

    return 0;
}