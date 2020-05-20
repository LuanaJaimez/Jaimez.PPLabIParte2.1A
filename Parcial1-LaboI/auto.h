//#include "cliente.h"
#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{
    int id;
    char patente[20];
    int idMarca;
    int idColor;
    int modelo;
    int isEmpty;
    int idCliente;

}eAuto;

typedef struct
{
    int id;
    char descripcion[20];

}eMarca;

typedef struct
{
    int id;
    char nombreColor[20];

}eColor;

typedef struct
{
    int id;
    char nombre[20];
    char sexo;

}eCliente;


#endif // AUTO_H_INCLUDED


void inicializarAutos(eAuto vec[], int tam);
int buscarLibre(eAuto vec[], int tam);
int altaAuto(int idx, eAuto vec[], int tam, eMarca marca[], int tamM, eColor color[], int tamC);
void mostrarAuto(eAuto x, eMarca marcas[], int tamM, eColor colores[], int tamC, eCliente clientes[], int tamCl);
void mostrarAutos(eAuto vec[], int tam, eMarca marca[], int tamM, eColor color[], int tamC, eCliente clientes[], int tamCl);
int buscarAuto(char patente[], eAuto vec[], int tam);
void modificarAuto(eAuto vec[], int tam, eMarca marca[], int tamM, eColor color[], int tamC, eCliente clientes[], int tamCl);
int menuModificar();

void mostrarMarcas(eMarca vec[], int tam);
void mostrarColores(eColor vec[], int tam);

void bajaAuto(eAuto vec[], int tam, eMarca marca[], int tamM, eColor color[], int tamC, eCliente clientes[], int tamCl);

int cargarDescripcionMarca(char descripcion[], int id, eMarca marcas[], int tam);
int cargarDescripcionColor(char descripcion[], int id, eColor colores[], int tam);
int cargarNombreCliente(char nombre[], int id, eCliente clientes[], int tamCl);
