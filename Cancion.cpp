#include <iostream>
#include "Artista.cpp"
#include <list>
#include <algorithm>
using namespace std;
struct Tiempo
{
    int minutos;
    int segundos;
};
/*struct CancionTiempoComparator
{
bool operator ()(Cancion &c1, Cancion &c2)
{
    return c1.getTiempoTotal()<c2.getTiempoTotal();
}
};*/
class Cancion
{
    private:
        string titulo;
        Tiempo duracion;
        Artista artista;
        int puntuacion;
        
    public :
    Cancion()
    {
        titulo = "solia";
        duracion.minutos = 2;
        duracion.segundos = 40;
    }
    Cancion(int punt, string tit, int min, int seg)
    {
        puntuacion = punt;
        titulo = tit;
        duracion.minutos = min;
        duracion.segundos = seg;

    }
    /*Cancion(string tit, Tiempo t)
    {
        titulo = tit;
        duracion = t;
    }
    Cancion(string tit, Tiempo t, Artista art)
    {
        titulo = tit;
        duracion = t;
        artista = art;
    }*/
    void verInfo()
    {
        cout<<" "<<titulo<<" "<<duracion.minutos<< " : "<<duracion.segundos<<" / "<<puntuacion<<" estrellas "<<endl;
    }
    
    string getTitulo()
    {
        return titulo;
    }
    void verInfo2()
    {
        int *TiempoTotalP;
        cout<<" "<<titulo<<" "<<*TiempoTotalP<<" / "<<puntuacion<<" estrellas "<<endl;
    }
    int operator<(Cancion b){
        return duracion.minutos<duracion.minutos;
    }
    int operator==(Cancion b){
        return puntuacion==puntuacion;
    }
    int getTiempoTotal()
    {
        return (duracion.minutos*60)+duracion.segundos;
    }
    int getPuntuacion()
    {
        return puntuacion;
    }
};