#ifndef TAPICERIA_H
#define TAPICERIA_H
//Bibliotecas
#include <string>
#include <iostream>
#include <sstream>
 //Incluimos la clase padre "Servicios"
#include "Servicios.h"

using namespace std;
//Declaracion de clase Tapiceria la cual es clase hereda de Servicios
class Tapiceria: public Servicios{
    private:
    //Declara las variables de instancia
    string ttela; //tipo de tela a lavar
    string tmancha; //tipo de mancha a quitar
    string tdetergente; //tipo de desmanchador o detergente para la tela/piel a lavar
    public:
    //constructores
    Tapiceria();
    Tapiceria(int i,string s, string h, string m, int t, int c, string ts, string ta, string tt, string tm, string td);
   //Declaro los métodos que va a tener la clase hija/SubClase Tapiceria
    string get_Ttela();
    string get_Tmancha();
    string get_Tdetergente();
    void set_Ttela(string tt);
    void set_Tmancha(string tm);
    void set_Tdetergente(string td);
    string to_String();
};
//Declaro el Constructor por default
Tapiceria::Tapiceria(){
    Servicios();
    ttela = "";
    tmancha = "";
    tdetergente = "";
}
//Constructor donde recibe valores para llenar las variables de instancia
Tapiceria::Tapiceria(int i,string s, string h, string m, int t, int c, string ts, string ta, string tt, string tm, string td):Servicios(i,s,h,m,t,c,ts,ta), ttela(tt), tmancha(tm), tdetergente(td){}

/*
 * getter Ttela
 * 
 * @param
 * @return string: tipo de tela
*/
string Tapiceria::get_Ttela(){
    return ttela;
}
/*
 * getter Tmancha
 * 
 * @param
 * @return string: tipo de mancha
*/
string Tapiceria::get_Tmancha(){
    return tmancha;
}
/*
 * getter Tdetergente
 * 
 * @param
 * @return string: tipo de detergente
*/
string Tapiceria::get_Tdetergente(){
    return tdetergente;
}

/*
 * setter Ttela
 * 
 * @param string tt
 * @return variable del tipo de tela
*/
void Tapiceria::set_Ttela(string tt){
    ttela=tt;
}

/*
 * setter Tmancha
 * 
 * @param string tm
 * @return variable del tipo de mancha
*/
void Tapiceria::set_Tmancha(string tm){
    tmancha=tm;
}

/*
 * setter Tdetergente
 * 
 * @param string td
 * @return variable del tipo de detergente
*/
void Tapiceria::set_Tdetergente(string td){
    tdetergente=td;
}

/*
 * setter catalogo to_String
 * 
 * @param stringstream
 * @return lista de servicios para Tapiceria
*/
string Tapiceria::to_String(){
  stringstream aux;
  // agregar letreros
 aux <<"ID:"<<idS << "\nServicio:"<<servicio<<"\nHerramienta:"<<herramienta<<"\nMateriales:"<<materiales<<"\nTiempo:"<<tiempo<<"\nCosto:"<<costo<<"\nTipo de servicio:"<<tise<<"\nTamaño"<<tamanio<<"\nTipo de Tela/Piel:"<<ttela<<"\nTipo de mancha"<<tmancha<<"\nTipo de de desmanchador/detergente"<<tdetergente <<endl;
  return aux.str();
}

#endif