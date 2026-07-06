#include <stdio.h>
#include "empleados.h"

int main()
{
    Empleado empleados[MAX_EMPLEADOS];
    int total = 0;
    int opcion;
    cargarEmpleados(empleados, &total);

    do
    {
        printf("\n");
        printf("=====================================\n");
        printf("   SISTEMA DE GESTION DE EMPLEADOS\n");
        printf("=====================================\n");
        printf("1. Registrar empleado\n");
        printf("2. Listar empleados\n");
        printf("3. Buscar empleado\n");
        printf("4. Actualizar empleado\n");
        printf("5. Eliminar empleado\n");
        printf("6. Guardar cambios en archivo\n");
        printf("7. Salir\n");

        printf("\nSeleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                registrarEmpleado(empleados, &total);
                break;

            case 2:
                listarEmpleados(empleados, total);
                break;

            case 3:
                buscarEmpleado(empleados, total);
                break;

            case 4:
                actualizarEmpleado(empleados, total);
                break;

            case 5:
                eliminarEmpleado(empleados, &total);
                break;

            case 6:
                guardarEmpleados(empleados, total);
                printf("Cambios guardados correctamente.\n");
                break;

            case 7:
                guardarEmpleados(empleados, total);
                printf("Datos guardados. Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida.\n");
        }

    } while(opcion != 7);

    return 0;
}