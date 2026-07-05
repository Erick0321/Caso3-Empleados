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

#endif