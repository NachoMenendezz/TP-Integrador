#ifndef CLSPELICULA_H_INCLUDED
#define CLSPELICULA_H_INCLUDED
#include "clsFecha.h"
class Pelicula {
private:
    int idPelicula, tipoGenero,clasificacionPelicula;
    char nombrePelicula[50],apellidoNombreDirector[50];
    Fecha fechaEstreno;
    bool estado;
public:
    // Constructor
    Pelicula();
    //setters
    void setIdPelicula(int);
    void setTipoGenero(int);
    void setClasificacionPelicula(int);
    void setNombrePelicula(const char *);
    void setApellidoNombreDirector (const char *);
    void setEstado(bool);
    void setFechaEstreno(Fecha);
    //getters
    int getIdPelicula();
    int getTipoGenero();
    int getClasificacionPelicula();
    const char *getNombrePelicula();
    const char *getApellidoNombreDirector();
    Fecha getFechaEstreno();
    bool getEstado();

    void Cargar();
    void Mostrar();


};
#endif // CLSPELICULA_H_INCLUDED
