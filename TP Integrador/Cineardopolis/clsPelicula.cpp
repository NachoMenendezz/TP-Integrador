#include <iostream>
#include <cstring>
#include "clsPelicula.h"

using namespace std;

Pelicula::Pelicula() {
    idPelicula = 0;
    tipoGenero = 0;
    clasificacionPelicula = 0;
    nombrePelicula[0] = '\0';
    apellidoNombreDirector[0] = '\0';
    fechaEstreno = Fecha();
    estado = false;
}

// SETTERS

void Pelicula::setIdPelicula(int id) {
    idPelicula = id;
}

void Pelicula::setTipoGenero(int genero) {
    tipoGenero = genero;
}

void Pelicula::setClasificacionPelicula(int clasificacion) {
    clasificacionPelicula = clasificacion;
}

void Pelicula::setNombrePelicula(const char *nombre) {
    strcpy(nombrePelicula, nombre);
}

void Pelicula::setApellidoNombreDirector(const char *director) {
    strcpy(apellidoNombreDirector, director);
}

void Pelicula::setEstado(bool est) {
    estado = est;
}

void Pelicula::setFechaEstreno(Fecha fecha) {
    fechaEstreno = fecha;
}

// GETTERS

int Pelicula::getIdPelicula() {
    return idPelicula;
}

int Pelicula::getTipoGenero() {
    return tipoGenero;
}

int Pelicula::getClasificacionPelicula() {
    return clasificacionPelicula;
}

const char *Pelicula::getNombrePelicula() {
    return nombrePelicula;
}

const char *Pelicula::getApellidoNombreDirector() {
    return apellidoNombreDirector;
}

Fecha Pelicula::getFechaEstreno() {
    return fechaEstreno;
}

bool Pelicula::getEstado() {
    return estado;
}

// CARGAR

void Pelicula::Cargar() {

    // EL ID SE SOLICITA Y VERIFICA EN EL MENU DE ALTA
    // ANTES DE CARGAR EL RESTO DE LOS DATOS.

    cout << "INGRESE EL NOMBRE DE LA PELICULA: ";
    cin.ignore();
    cin.getline(nombrePelicula, 50);

    cout << "INGRESE EL NOMBRE Y APELLIDO DEL DIRECTOR: ";
    cin.getline(apellidoNombreDirector, 50);

    cout << "INGRESE EL ID DEL GENERO: ";
    cin >> tipoGenero;

    cout << "INGRESE LA CLASIFICACION (1: ATP, 2: +14, 3: +18): ";
    cin >> clasificacionPelicula;

    int dia, mes, anio;

    cout << "INGRESE EL DIA DE ESTRENO: ";
    cin >> dia;

    cout << "INGRESE EL MES DE ESTRENO: ";
    cin >> mes;

    cout << "INGRESE EL ANIO DE ESTRENO: ";
    cin >> anio;

    fechaEstreno.setDia(dia);
    fechaEstreno.setMes(mes);
    fechaEstreno.setAnio(anio);

    estado = true;
}

// MOSTRAR

void Pelicula::Mostrar() {
    cout << "ID PELICULA: " << idPelicula << endl;
    cout << "NOMBRE: " << nombrePelicula << endl;
    cout << "DIRECTOR: " << apellidoNombreDirector << endl;
    cout << "ID GENERO: " << tipoGenero << endl;
    cout << "CLASIFICACION: " << clasificacionPelicula << endl;

    cout << "FECHA DE ESTRENO: "
         << fechaEstreno.getDia() << "/"
         << fechaEstreno.getMes() << "/"
         << fechaEstreno.getAnio() << endl;
}
