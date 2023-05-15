#include <iostream>
#include <vector>
#include <list>
#include "PlayList.cpp"
#include <algorithm>
using namespace std;
void imprimirRocola(list<Cancion>lista)
{
    int i;
 list<Cancion>::iterator it = lista.begin();
  do
  {
    cout<<i<<" ";
    it->verInfo();
    i++;
    it++;
  } while(it!=lista.end());
}

int main()
{
      list<Cancion> rocola;
        Cancion c;
        int cancionbusc , nrocancion;
        int op2;
        string buscartitulo;
        rocola.push_back(Cancion(5,"Un Verano Sin Ti", 2, 29));
        rocola.push_back(Cancion(4,"Solia", 2, 40));
        rocola.push_back(Cancion(3,"Otro Atardecer", 4, 5));
        rocola.push_back(Cancion(5,"Sometimes", 3, 42));
        rocola.push_back(Cancion(5,"Girls Like You", 4, 31));
        rocola.push_back(Cancion(5,"She Will Be Loved", 4, 29));
        rocola.push_back(Cancion(3,"Donde estas", 2, 45));
        rocola.push_back(Cancion(5,"Viva La Vida", 4, 3));
        rocola.push_back(Cancion(2,"Ferxxo 100", 2, 49));
        rocola.push_back(Cancion(1,"Desaparecer", 2, 45));
        rocola.push_back(Cancion(1,"Mejor No Nos Vemos", 3, 10));
        rocola.push_back(Cancion(2,"Apocalypse", 4, 51));
        rocola.push_back(Cancion(5,"Monaco", 3, 34));
        rocola.push_back(Cancion(1,"Roi", 3, 50));
        rocola.push_back(Cancion(3,"Me rehuso", 3, 26));
        rocola.push_back(Cancion(3,"Amanecemos", 3, 20));
        rocola.push_back(Cancion(2,"Nubes", 2, 56));
        rocola.push_back(Cancion(3,"Curame", 3, 9));
        rocola.push_back(Cancion(5,"Less Than Zero", 3, 22));
        rocola.push_back(Cancion(2,"Under Pressure", 3, 48));
        rocola.push_back(Cancion(1,"Discoteca", 4, 9));
        rocola.push_back(Cancion(4,"Todo o Nada", 2, 38));
        rocola.push_back(Cancion(5,"Mi Error", 5, 24));
        rocola.push_back(Cancion(3,"Transmission", 4, 2));
        rocola.push_back(Cancion(4,"Deep Six", 4, 11));
        rocola.push_back(Cancion(5,"Paranoid", 2, 52));
        rocola.push_back(Cancion(5,"NIB", 6, 8));
        rocola.push_back(Cancion(2,"The Monster", 5, 19));
        rocola.push_back(Cancion(1,"Quizas", 3, 42));
        rocola.push_back(Cancion(2,"Me Olvide De Los 2", 3, 4));
        rocola.push_back(Cancion(3,"Nightcall", 4, 17));
        PlayList list1;
        PlayList listaFavoritos, listaLatinos;
        PlayList *currentlist, *currentlist2;
    int op, op3;   
    do {
  
        cout << "Rocola USFX de Diego" << endl;
        cout << "Seleccione sobre que playlist quiere trabajar" << endl;
        cout << "1 Lista 1" << endl;
        cout << "2 lista Favoritos" << endl;
        cout << "3 lista latinos" << endl;
        cout << "4. Salir" << endl;
        cin >> op;
        if(op == 1)
        currentlist = &list1;
        if(op == 2)
        currentlist = &listaFavoritos;
        if(op == 3)
        currentlist = &listaLatinos;
        if(op == 4)
        return 0;
    do{
        cout << "Que desea hacer en esta Playlist?" << endl;
        cout<< "1. Añadir Cancion" << endl;
        cout<< "2. Ver Lista" << endl;
        cout<< "3. Buscar Cancion" << endl;
        cout<< "4. Eliminar Cancion" << endl;
        cout<< "5. Importar a una lista" << endl;
        cout<< "6. Clonar lista" << endl;
        cout<< "7. Ver orden por tiempo (Menor a Mayor)"<< endl;
        cout<< "8. Ver orden por tiempo (Mayor a Menor)"<< endl;
        cout<< "9. Ver Top de canciones (Menor a Mayor)" << endl;
        cout<< "10. Ver Top de canciones (Mayor a Menor)" << endl;
        cout<< "11. Salir" << endl;
        cin>>op2;
        if(op2 == 1)
        {
            cout << "Canciones Disponibles" << endl;
            imprimirRocola(rocola);
            cout<<"Que cancion desea añadir"<<endl;
            cin>>cancionbusc;
            auto it = rocola.begin();
            std::advance(it, cancionbusc);
            currentlist->agregarCancion(*it);
        }
        if(op2 == 2)
        {
                currentlist->verLista();
        }
        if(op2 == 3)
        {
                cout<<"Que cancion desea buscar" << endl;
                cin>>buscartitulo;
                currentlist->buscarCancion(buscartitulo);
        }
        if(op2 == 4)
        {
            cout<<"Que numero de cancion desea eliminar" << endl;
                currentlist->verLista();
                cin>>nrocancion;
                currentlist->eliminarCancion(nrocancion);
        }
        if(op2 == 5)
        {
            cout << "A que lista desea importar la Playlist" << endl;
            if(currentlist == &list1)
            {
                cout << "1. lista Favoritos" << endl;
                cout << "2. lista latinos" << endl;
                cin>>op3;
                if(op3==1)
                {currentlist2= &listaFavoritos;
                currentlist->importarlista(*currentlist2);}
                if(op3==2)
                {currentlist2= &listaLatinos;
                currentlist->importarlista(*currentlist2);}
            }
            if(currentlist == &listaFavoritos)
            {
                  cout << "1. list1" << endl;
                cout << "2. lista latinos" << endl;
                cin>>op3;
                if(op3==1)
                {currentlist2= &list1;
                currentlist->importarlista(*currentlist2);}
                if(op3==2)
                {currentlist2= &listaLatinos;
                currentlist->importarlista(*currentlist2);}
            }
            if(currentlist == &listaLatinos)
            {
                  cout << "1. list1" << endl;
                cout << "2. lista Favoritos" << endl;
                cin>>op3;
                if(op3==1)
                {currentlist2= &list1;
                currentlist->importarlista(*currentlist2);}
                if(op3==2)
                {currentlist2= &listaFavoritos;
                currentlist->importarlista(*currentlist2);}
            }
        }
        if(op2 == 6)
        {
            cout << "A que lista desea clonar la Playlist" << endl;
            if(currentlist == &list1)
            {
                cout << "1. lista Favoritos" << endl;
                cout << "2. lista latinos" << endl;
                cin>>op3;
                if(op3==1)
                {currentlist2= &listaFavoritos;
                currentlist->clonarlista(*currentlist2);}
                if(op3==2)
                {currentlist2= &listaLatinos;
                currentlist->clonarlista(*currentlist2);}
            }
            if(currentlist == &listaFavoritos)
            {
                  cout << "1. list1" << endl;
                cout << "2. lista latinos" << endl;
                cin>>op3;
                if(op3==1)
                {currentlist2= &list1;
                currentlist->clonarlista(*currentlist2);}
                if(op3==2)
                {currentlist2= &listaLatinos;
                currentlist->clonarlista(*currentlist2);}
            }
            if(currentlist == &listaLatinos)
            {
                  cout << "1. list1" << endl;
                cout << "2. lista Favoritos" << endl;
                cin>>op3;
                if(op3==1)
                {currentlist2= &list1;
                currentlist->clonarlista(*currentlist2);}
                if(op3==2)
                {currentlist2= &listaFavoritos;
                currentlist->clonarlista(*currentlist2);}
            }

        }
        if(op2 == 7)
        {
            cout<<"Orden por Tiempo" << endl;
            currentlist->MenoraMayorTiempo();
        }
         if(op2 == 8)
        {
            cout<<"Orden por Tiempo" << endl;
            currentlist->MayoraMenorTiempo();
        }
         if(op2 == 9)
        {
            cout<<"Orden por Tiempo" << endl;
            currentlist->CancionesTopMenoraMayor();
        }
         if(op2 == 10)
        {
            cout<<"Orden por Tiempo" << endl;
            currentlist->CancionesTopMayoraMenor();
        }
    }while(op2 < 11);
    } while (op < 4);


    return 0;
}