#ifndef COCHES_H
#define COCHES_H
//Bibliotecas
#include <string>
#include <iostream>
#include <sstream>
 //Incluimos la clase padre "Servicios"
#include "Servicios.h"

using namespace std;
//Declaracion de clase Coches la cual es clase hereda de Servicios
class Coches:public Servicios{
  private:
  //Declara las variables de instancia
    string jabones; //tipo de jabon a utilizar en la carroceria dependiendo del acabado que guste el cliente
    string abrillantador; //tamaño de coche
    string lanceta; //tipo de lanceta a utilizar en la k4
  public:
    //constructores
    Coches();
    Coches(int i, string s, string h, string m,int t, int c, string ts, string ta, string jp, string a, string l);
    //Declaro los métodos que va a tener la clase hija/SubClase  Coches
    string get_Jabones();
    string get_Abrillantador();
    string get_Lanceta();
    void set_Jabones(string jp);
    void set_Abrillantador(string a); 
    void set_Lanceta(string ts); 
    string to_String();
};
//Declaro el Constructor por default
Coches::Coches(){  //default
  Servicios();
  jabones = " ";
  abrillantador = " ";
  lanceta = " ";
}
 //Constructor donde recibe valores para llenar las variables de instancia
Coches::Coches(int i, string s, string h, string m,int t, int c, string ts, string ta, string jp, string a, string l):Servicios(i,s,h,m,t,c,ts,ta),jabones(jp), abrillantador(a), lanceta(l){}

/*
 * getter Jabones
 * 
 * @param
 * @return string:tipo  jabones
*/
string Coches::get_Jabones(){
  return jabones;
}
/*
 * getter Abrillantador
 * 
 * @param
 * @return string: tipo de jabones
*/
string Coches::get_Abrillantador(){
  return abrillantador;
}
/*
 * getter Lancetas
 * 
 * @param
 * @return string: tipo de lanceta
*/
string Coches::get_Lanceta(){
  return lanceta;
}

/*
 * setter Jabones
 * 
 * @param string jp
 * @return variable del tipo de jabones
*/
void Coches::set_Jabones(string jp){
  jabones = jp;
}

/*
 * setter Abrillantador
 * 
 * @param string a
 * @return variable del tipo de abrillantador
*/
void Coches::set_Abrillantador(string a){
    abrillantador = a;
}

/*
 * setter Lanceta
 * 
 * @param string l
 * @return variable de la lanceta a utilizar
*/
void Coches::set_Lanceta(string l){
  lanceta = l;
}
/*
 * setter catalogo to_String
 * 
 * @param stringstream
 * @return lista de servicios para coches
*/
string Coches::to_String(){
  stringstream aux;
  // agregar letreros
  aux <<"\nID:"<<idS << "\nServicio:"<<servicio<<"\nHerramienta:"<<herramienta<<"\nMateriales:"<<materiales<<"\nTiempo:"<<tiempo<<"\nCosto:"<<costo<<"\nTipo de servicio:"<<tise<<"\nTamaño"<<tamanio<<"\nJabones"<<jabones<<"\nTipo de Abrillantador"<<abrillantador<<"\nTipo de Lanceta"<<lanceta <<endl;
  return aux.str();
}
#endif
