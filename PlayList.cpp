#include <iostream>
#include <vector>
#include <list>
#include "Cancion.cpp"
#include <algorithm>
#include <functional>
using namespace std;
bool CompararTiempos(Cancion &Cancion1, Cancion &Cancion2)
{
  return Cancion1.getTiempoTotal() < Cancion2.getTiempoTotal();
}
bool ComparaPuntuaciones(Cancion &Cancion1, Cancion &Cancion2)
{
  return Cancion1.getPuntuacion() < Cancion2.getPuntuacion();
}
class PlayList
{
private:
    string nombreLista;
    string descripcion;
    list<Cancion> listaCanciones;
public:
void agregarCancion(Cancion c)
{
    listaCanciones.push_back(c);
}
    
void eliminarCancion(int nrocancion)
{
      auto it=listaCanciones.begin();
      std::advance(it,nrocancion-1);
      listaCanciones.remove(*it);
}

void verLista()
{
  int i=0;
  list<Cancion>::iterator it = listaCanciones.begin();
  while(it!=listaCanciones.end())
  {
    cout<<i<<" ";
    i++;
    it->verInfo();
    it++;
  }
}

Cancion buscarCancion(string buscartitulo)
{
    list<Cancion>::iterator it=listaCanciones.begin();
    while(it->getTitulo()!=buscartitulo)
    {
      it++;
    }
    it->verInfo();
    return *it;
}

void limpiarlista()
{
      listaCanciones.clear();
}
void clonarlista(PlayList &lista)
{
    lista.limpiarlista();
    list<Cancion>::iterator it=listaCanciones.begin();
    while(it!=listaCanciones.end())
    {
      lista.agregarCancion(*it);
      it++;
    }
}
void importarlista(PlayList &lista)
{
list<Cancion>::iterator it=listaCanciones.begin();
while(it!=listaCanciones.end())
{
  lista.agregarCancion(*it);
  it++;
}
}
void MenoraMayorTiempo()
{ 
listaCanciones.sort(CompararTiempos);
int i=0;
  list<Cancion>::iterator it = listaCanciones.begin();
  while(it!=listaCanciones.end())
  {
    cout<<i<<" ";
    i++;
    it->verInfo();
    it++;
  }  
}
void MayoraMenorTiempo()
{ 
listaCanciones.sort(CompararTiempos);
listaCanciones.reverse();
int i=0;
  list<Cancion>::iterator it = listaCanciones.begin();
  while(it!=listaCanciones.end())
  {
    cout<<i<<" ";
    i++;
    it->verInfo();
    it++;
  }  
}
void CancionesTopMenoraMayor()
{
  listaCanciones.sort(ComparaPuntuaciones);
  int i=0;
  list<Cancion>::iterator it = listaCanciones.begin();
  while(it!=listaCanciones.end())
  {
    cout<<i<<" ";
    i++;
    it->verInfo();
    it++;
  }  
}
void CancionesTopMayoraMenor()
{
  listaCanciones.sort(ComparaPuntuaciones);
  listaCanciones.reverse();
  int i=0;
  list<Cancion>::iterator it = listaCanciones.begin();
  while(it!=listaCanciones.end())
  {
    cout<<i<<" ";
    i++;
    it->verInfo();
    it++;
  }  
}
};