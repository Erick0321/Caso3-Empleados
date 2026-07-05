#include <stdio.h>
#include <string.h>
#include "empleados.h"

float calcularSueldoTotal(Empleado empleado)
{
    return empleado.sueldoBase + (empleado.horasExtra * VALOR_HORA_EXTRA);
}

int buscarPorCodigo(Empleado empleados[], int total, char codigo[])
{
    for(int i = 0; i < total; i++)
    {
        if(strcmp(empleados[i].codigo, codigo) == 0)
        {
            return i;
        }
    }

    return -1;
}

void registrarEmpleado(Empleado empleados[], int *total)
{
    Empleado nuevo;

    if(*total >= MAX_EMPLEADOS)
    {
        printf("No se pueden registrar mas empleados.\n");
        return;
    }

    printf("\nCodigo del empleado: ");
    scanf("%15s", nuevo.codigo);

    if(buscarPorCodigo(empleados, *total, nuevo.codigo) != -1)
    {
        printf("Error: ya existe un empleado con ese codigo.\n");
        return;
    }

    printf("Nombre: ");
    scanf(" %[^\n]", nuevo.nombre);

    printf("Cargo: ");
    scanf(" %[^\n]", nuevo.cargo);

    printf("Sueldo base: ");
    scanf("%f", &nuevo.sueldoBase);

    if(nuevo.sueldoBase <= 0)
    {
        printf("Error: el sueldo base debe ser mayor a 0.\n");
        return;
    }

    printf("Horas extra: ");
    scanf("%d", &nuevo.horasExtra);

    if(nuevo.horasExtra < 0)
    {
        printf("Error: las horas extra no pueden ser negativas.\n");
        return;
    }

    empleados[*total] = nuevo;
    (*total)++;

    printf("Empleado registrado correctamente.\n");
}

void listarEmpleados(Empleado empleados[], int total)
{
    if(total == 0)
    {
        printf("\nNo hay empleados registrados.\n");
        return;
    }

    printf("\n==============================\n");
    printf("      LISTA DE EMPLEADOS\n");
    printf("==============================\n");

    for(int i = 0; i < total; i++)
    {
        printf("\nEmpleado #%d\n", i + 1);
        printf("Codigo: %s\n", empleados[i].codigo);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Cargo: %s\n", empleados[i].cargo);
        printf("Sueldo Base: %.2f\n", empleados[i].sueldoBase);
        printf("Horas Extra: %d\n", empleados[i].horasExtra);
        printf("Sueldo Total: %.2f\n", calcularSueldoTotal(empleados[i]));

        printf("------------------------------\n");
    }
}