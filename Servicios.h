#ifndef SERVICIOS_H_
#define SERVICIOS_H_
//Bibliotecas
#include <string>
#include <iostream>
#include <sstream>

using namespace std;
//Declaracion de clase Servicios la cual es clase padre de coches y tapicieria
class Servicios{
  protected:// Visibles ante las clases hijas sin getter
   //Declaro variables de instancia
    int idS; //ID del servicio
    string servicio; //tipo de servicio si de tapiceria o coche
    string herramienta; //herramienta o maquinaria a utilizar en el servicio
    string materiales; //materiales a ulizar como trapos 
    int tiempo; //tiempo aprox del servicio
    int costo; //costo del servicio 
    string tise; //tipo de servicio si es tapcieria podria ser lavado de sillones
    string tamanio; //tamaño del servicio
  public:
    //constructores
    Servicios();
    Servicios(int i,string s, string h, string m, int t, int c, string ts, string ta);
    // Declaro los métodos que va a tener clase Servicios
    int get_Ids();
    string get_Servicio();
    string get_Herramienta();
    string get_Materiales();
    int get_Tiempo();
    int get_Costo();
    string get_Tamanio();
    string get_Tise();
    void set_Ids(int i);
    void set_Servicio(string s);
    void set_Herramienta(string h);
    void set_Materiles(string m);
    void set_Tiempo(int t);
    void set_Costo(int c);
    void set_Tamanio(string ta); 
    void set_Tise(string ts); 

};
//Declaro el Constructor por default
Servicios::Servicios(){  //default
  idS = 0;
  servicio = "";
  herramienta = "";
  materiales = "";
  tiempo = 0;
  costo = 0;
  tise = "";
  tamanio = "";
}
 //Constructor donde recibe valores para llenar las variables de instancia
Servicios::Servicios(int i,string s, string h, string m, int t, int c, string ts, string ta):idS(i), servicio(s), herramienta(h), materiales(m), tiempo(t), costo(c), tise(ts), tamanio(ta){};

/*
 * getter IdS
 * 
 * @param
 * @return int: IdS
*/
int Servicios::get_Ids(){
  return idS;
}

/*
 * getter Serbicios
 * 
 * @param
 * @return String: Servios "coches/tapiceria"
*/
string Servicios::get_Servicio(){
  return servicio;
}

/*
 * getter Herramienta
 * 
 * @param
 * @return String: herramienta o herramientas a usar en el servicio
*/
string Servicios::get_Herramienta(){
  return herramienta;
}

/*
 * getter Materiales
 * 
 * @param
 * @return String: Tipo de Matereiasles a usar
*/
string Servicios::get_Materiales(){
  return materiales;
}

/*
 * getter Tiempo
 * 
 * @param
 * @return int: Tiempo del servicio
*/
int Servicios::get_Tiempo(){
  return tiempo;
}
/*
 * getter Costo
 * 
 * @param
 * @return int: IdS
*/
int Servicios::get_Costo(){
  return costo;
}

/*
 * getter Tise
 * 
 * @param
 * @return String: Tipo de Servicios
*/
string Servicios::get_Tise(){
  return tise;  
}

/*
 * getter Tamanio
 * 
 * @param
 * @return String: Tammaño del servicio
*/
string Servicios::get_Tamanio(){
  return tamanio;  
}

/*
 * setter Ids
 * 
 * @param int i
 * @return variable Id del servicio
*/
void Servicios::set_Ids(int i){
  idS = i;
}

/*
 * setter Servicios
 * 
 * @param string s
 * @return variable tipo de servicio "coche/tapiceria"
*/
void Servicios::set_Servicio(string s){
  servicio = s;
}

/*
 * setter Herramientas
 * 
 * @param string h
 * @return variable tipo de herramienta o herramientas a usar
*/
void Servicios::set_Herramienta(string h){
  herramienta = h;
}

/*
 * setter Materiales 
 * 
 * @param string m
 * @return variable tipo de herramienta o herramientas a usar
*/
void Servicios::set_Materiles(string m){
  materiales = m;
}

/*
 * setter Tiempo 
 * 
 * @param int t
 * @return variable de tiempo del servicio
*/
void Servicios::set_Tiempo(int t){
  tiempo = t;
}

/*
 * setter Costo
 * 
 * @param int c
 * @return variable del costo
*/
void Servicios::set_Costo(int c){
  costo = c;
}

/*
 * setter Tise
 * 
 * @param string ts
 * @return variable del tipo de servicio "lavado de coches, lavado de sala, etc."
*/
void Servicios::set_Tise(string ts){
  tise = ts;
}

/*
 * setter Tamanio
 * 
 * @param int ta
 * @return variable de tamaño del servicio
*/
void Servicios::set_Tamanio(string ta){
  tamanio = ta;
}

#endif