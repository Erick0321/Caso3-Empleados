#ifndef EMPLEADOS_H
#define EMPLEADOS_H

typedef struct
{
    char codigo[16];
    char nombre[50];
    char cargo[50];
    float sueldoBase;
    int horasExtra;

} Empleado;

#endif