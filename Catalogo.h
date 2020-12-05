#ifndef CATALOGO_H
#define CATALOGO_H
//Bibliotecas
#include <string>
#include <iostream>
#include <sstream>
//Incluimos las subclases y clases 
#include "Servicios.h"
#include "Coches.h"
#include "Tapiceria.h"

//Declaracion de clase Tapiceria la cual es clase hija/subClase de Servicios
class Catalogo{
    private:
    //Declara las variables de instancia
    int cuantosC;
    int cuantosT;
    Coches listaScoches[20];
    Tapiceria listaStapiceria[20];
    
    public:
     //constructores
    Catalogo();
    //Declaro los métodos que va a tener la composicion
    void set_cuantosC (int cc);
    void set_cuantosT (int ct);
    int get_cuantosC();
    int get_cuantosT();
    void agrega_SC (Coches c);
    void agrega_ST (Tapiceria t);
    string to_StringC();
    string to_StringT();
    int obten_costo_C(int id);
    int obten_costo_T(int id);
    void modifica_costoSC(int id,int costo_nvo);
    void modifica_costoST(int id,int costo_nvo);
    void modifica_tiempoSC(int id,int tiempo_nvo);
    void modifica_tiempoST(int id,int tiempo_nvo);
};
//Declaro el Constructor por default
Catalogo::Catalogo(){
    cuantosC=0;
    cuantosT=0;
}
/*
 * getter CuntosC
 * 
 * @param
 * @return int: Cuantos de servicios de coches 
*/
int Catalogo::get_cuantosC(){
    return cuantosC;
}

/*
 * getter Lancetas
 * 
 * @param
 * @return int: Cuantos servicios de Tapiceria
*/
int Catalogo::get_cuantosT(){
    return cuantosT;
}

/*
 * setter catalogo agrega_SC
 * 
 * @param
 * @return lista de coches
*/
void Catalogo::agrega_SC (Coches c){
    if (cuantosC < 20 ){
        listaScoches [cuantosC]=c;
        cuantosC++;
    }
}

/*
 * setter catalogo agrega_ST
 * 
 * @param
 * @return lista de tapiceria
*/
void Catalogo::agrega_ST (Tapiceria t){
    if (cuantosT < 20 ){
        listaStapiceria [cuantosT] = t;
        cuantosT++;
    }
}

/*
 * setter catalogo to_StringC
 * 
 * @param stringstream
 * @return lista de servicios para coches
*/
string Catalogo::to_StringC(){
    stringstream aux;
    aux<<" ";
    int i;
    // Objetos de servicios de coches
    for (i=0;i < cuantosC; i++){
        aux<<listaScoches[i].to_String()<<endl;
    }
    
    return aux.str();
}

/*
 * setter catalogo to_StringT
 * 
 * @param stringstream
 * @return lista de servicios para tapiceria
*/
string Catalogo::to_StringT(){
    stringstream aux;
    aux<<" ";
    int i;
    // Objetos de servicios de tapiceria
  for (i=0;i < cuantosT; i++){
        aux<<listaStapiceria[i].to_String()<<endl;
    }
  
    return aux.str();
}

/*
 * setter catalogo obten_costo_C
 * 
 * @param int id
 * @return lista de servicios para tapiceria
*/
int Catalogo::obten_costo_C(int id){
    int i = 0, posi = -1, costo = -1;
    while (i < (cuantosC-1) && posi == -1) {
        if (listaScoches[i].get_Ids() == id) {
            posi = i;
            costo = listaScoches[i].get_Costo();
        }    
        i++;
    }
    return costo;
}

/*
 * setter catalogo obten_costo_C
 * 
 * @param int id
 * @return lista de servicios para tapiceria
*/
int Catalogo::obten_costo_T(int id){
    int i = 0, posi = -1, costo = -1;
    while (i < (cuantosC-1) && posi == -1) {
        if (listaScoches[i].get_Ids() == id) {
            posi = i;
            costo = listaScoches[i].get_Costo();
        }    
        i++;
    }
    return costo;
}

/*
 * setter catalogo modifica_costoSC
 * 
 * @param int id, int costo_nvo
 * @return lista de servicios para tapiceria MOIFICADA
*/
void Catalogo:: modifica_costoSC(int id, int costo_nvo){
    int i = 0, posi = -1, costo = -1;
    while (i < (cuantosC-1) && posi == -1) {
        if (listaScoches[i].get_Ids() == id) {
            posi = i;
            listaScoches[i].set_Costo(costo_nvo);
        }    
        i++;
    }
}

/*
 * setter catalogo modifica_tiempoSC
 * 
 * @param int id, int tiempo_nvo
 * @return lista de servicios para tapiceria MOIFICADA
*/
void Catalogo:: modifica_costoST(int id, int costo_nvo){
    int i = 0, posi = -1, costo = -1;
    while (i < (cuantosT-1) && posi == -1) {
        if (listaStapiceria[i].get_Ids() == id) {
            posi = i;
            listaStapiceria[i].set_Costo(costo_nvo);
        }    
        i++;
    }
}

/*
 * setter catalogo modifica_costoSC
 * 
 * @param int id, int costo_nvo
 * @return lista de servicios para tapiceria MOIFICADA
*/
void Catalogo:: modifica_tiempoSC(int id, int tiempo_nvo){
    int i = 0, posi = -1, tiempo = -1;
    while (i < (cuantosT-1) && posi == -1) {
        if (listaStapiceria[i].get_Ids() == id) {
            posi = i;
            listaScoches[i].set_Tiempo(tiempo_nvo);
        }    
        i++;
    }
}

/*
 * setter catalogo modifica_costoST
 * 
 * @param int id, int costo_nvo
 * @return lista de servicios para tapiceria MOIFICADA
*/
void Catalogo:: modifica_tiempoST(int id, int tiempo_nvo){
    int i = 0, posi = -1, tiempo = -1;
    while (i < (cuantosT-1) && posi == -1) {
        if (listaStapiceria[i].get_Ids() == id) {
            posi = i;
            listaStapiceria[i].set_Tiempo(tiempo_nvo);
        }    
        i++;
    }
}
#endif
