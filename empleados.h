#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#define MAX_EMPLEADOS 100
#define VALOR_HORA_EXTRA 5

typedef struct
{
    char codigo[16];
    char nombre[50];
    char cargo[50];
    float sueldoBase;
    int horasExtra;

} Empleado;

void registrarEmpleado(Empleado empleados[], int *total);
void listarEmpleados(Empleado empleados[], int total);
float calcularSueldoTotal(Empleado empleado);
int buscarPorCodigo(Empleado empleados[], int total, char codigo[]);

#endif