/*
 * Jose luis Miranda
 * A01703867
 * 04/12/2020
 * Proyecto agencia coches/motos honda
 */

/**
 * Descripcion este proyecto es hacerca de mi negocio
 * El cual es un programa que te ofrecera todos los servicios
*/

//Bibliotecas
#include <iostream>   
//Incluimos las subclases, clases y clases que componen
#include "Catalogo.h"
#include "Tapiceria.h"    
#include "Servicios.h" //donde estan los serivios.
#include "Coches.h" //donde estan los serivios de los coches.

using namespace std;

// Menu de moficacion de datos de coches
void menu_modifica(){
   cout << "Modificaciones\n";
   cout << "1. Costo\n";
   cout << "2. Jabones\n";
   cout << "3. Tiempo\n";
   cout << " Que deseas  modificar\n";
}

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    //menu cliente
    cout << "Menu:\n";
    cout << "1. Mostrar servicios de coche. \n";
    cout << "2. Mostrar servicios de tapiceria. \n";
    cout << "3. Cotizacion Coches. \n";
    cout << "4. Cotizacion tapiceria. \n";
    //menu para el admin
    cout << "5. Agregar servicios coches. \n";
    cout << "6. Agregar servicios Tapiceria. \n";
    cout << "7. Modificar serivicios coches. \n";
    cout << "8. Modificar serivicios tapiceria. \n";
    cout << "9. Salir \n";
}

int main(int argc, char* argv[]){


    int opcion = 0,t_modifica = 0;
    int t_idS;// t es de temporal y es la variable en la que vamos a pedir el valor para las variable de instancia
    string t_servicio;
    string t_herramienta;
    string t_materiales;
    int t_tiempo;
    int t_costo;    
    string t_tise;
    string t_tamanio;
    string t_jabones;
    string t_abrillantador;
    string t_lanceta;
    string t_ttela;
    string t_tmancha;
    string t_tdetergente;

    // Creamos el catálogo vacio la primera vez
   Catalogo catalogo;
   // Se crean objetos para poblar la clase que conteniene la agregarcion, Catalogo
   //catalogo coches
   Coches sc1plus(1,"Coches","Kärcher K4 y Aspiradora","Agua y Trapo",25,90,"Lavado Coche/SUV y Aspirado","Pequeño","Ceramico","Interno y Externo","Rines y Carroceria"); 
   catalogo.agrega_SC(sc1plus);
   Coches sc1a(2,"Coches","Aspiradora","Filtros y luz",10,40,"Aspirado Coche/SUV","Pequeño","Ninguno","Interno","Ninguna");
   catalogo.agrega_SC(sc1a);
   Coches sc1(3,"Coches", "Kärcher K4","Agua y Trapo",15,60,"Lavado Coche/SUV","Pequeño","Ceramico","Externo","Rines y Carroceria");
   catalogo.agrega_SC(sc1);
   Coches sc2plus(4,"Coches","KärcherK4 y Aspiradora","Agua y Trapo",35,110,"Lavado Camioneta y Aspirado","Grande","Ceramico","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_SC(sc2plus);
   Coches sc2a(5,"Coches","Aspiradora","Filtros y luz",15,50,"Aspirado Camioneta","Grande","Ninguno","Interno","Ninguna");
   catalogo.agrega_SC(sc2a);
   Coches sc2(6,"Coches","Kärcher K4","Agua y Trapo",20,80,"Lavado Camioneta","Grande","Ceramico","Externo","Rines y Carroceria");
   catalogo.agrega_SC(sc2);
   Coches sc3plus(7,"Coches","Kärcher K4 y Aspiradora","Agua y Trapo",35,130,"Lavado PickUp y Aspirado","Mediano","Ceramico","Interno y Externo","Rines Carroceria y carroceria");
   catalogo.agrega_SC(sc3plus);
   Coches sc3a(8,"Coches","Aspiradora","Filtros y luz",15,50,"Aspirado PickUp","Grande","Mediano","Interno","Ninguna");
   catalogo.agrega_SC(sc3a);
   Coches sc3(9,"Coches","Kärcher K4","Agua y Trapo",20,100,"Lavado PickUp","Grande","Ceramico","Mediano","Rines, Carroceria y caja");
   catalogo.agrega_SC(sc3);
   cout << " Servicio de auto agregados"<<catalogo.get_cuantosC()-1<<endl;

   //Crea objetos de Tapciceria y se agregan al Catalogo
   // ****** agregra demás obtejos a el catalogo
   Tapiceria st10(10,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",5,60,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st10);
   Tapiceria st11(11,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",8,80,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st11);
   Tapiceria st12(12,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",25,110,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st12);
   Tapiceria st13(13,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",30,150,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st13);
   Tapiceria st14(14,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",35,170,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st14);
   Tapiceria st15(15,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",40,200,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st15);
   Tapiceria st16(16,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",4,40,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st16);
   Tapiceria st17(17,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",30,400,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st17);
   Tapiceria st18(18,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",35,500,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st18);
   Tapiceria st19(20,"Tapiceria","Kärcher Puzzi, Aspiradora, Kärcher SC2","Agua, luz y cepillo",40,600,"Lavado, Desinfeccion y Aspirado","Pequeño","sdgkhs","Interno y Externo","Rines y Carroceria");
   catalogo.agrega_ST(st19);
   

    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 9 && opcion > -1){

  		//Impresion de menu
  		menu();
  		//Leer indice que selecciona la opcion del menu
  		cin >> opcion;
        cout << opcion;
  		//Switch donde dependiendo la eleccion efectua un diferente procedimiento
  		switch(opcion){

  			//Caso 1 "imprimira" los servicios de coches.
  			case 1:
              cout << catalogo.to_StringC()<<endl;
  			break;
            //Caso 2 "imprimira" los servicios de tapiceria.
         case 2:
              cout << catalogo.to_StringT()<<endl;
         break;
         //Caso 3 "cotizara" un serivicio de coches.
         case 3:
              cout << "Indica el id del servicio de acuerdo al catalogo"<<endl;
              cin >> t_idS;
              t_costo = catalogo.obten_costo_C(t_idS);
              if (t_costo == -1)
                  cout << "Ese servicio no existe" << endl;
              else
                  cout << " El servicio solicitado tiene un costo de $ "<<t_costo<<endl;
         break;
         //Caso 4 "cotizara" un serivicio de tapiceria.
         case 4:
               cout << "Indica el id del servicio de acuerdo al catalogo"<<endl;
               cin >> t_idS;
               t_costo = catalogo.obten_costo_T(t_idS);
               if (t_costo == -1)
                     cout << "Ese servicio no existe" << endl;
               else
                     cout << " El servicio solicitado tiene un costo de $ "<<t_costo<<endl;
         break;
        //Caso 5 "agregara" un serivicio de coches.
        case 5:{
         //     Coches(int i, string s, string h, string m,int t, int c, string ts, string ta, string jp, string a, string l);
  
              cout << "Indica el id del servicio"<<endl;
              cin >> t_idS;
              cout << "Indica las herramientas a utilizar para este servicio de auto"<<endl;
              cin >> t_herramienta;
              cout << " Indica los materiales a utilizar para este servicio"<<endl;
              cin >> t_materiales;
              cout << "Indica el tiempo para este servicio"<<endl;
              cin >> t_tiempo;
              cout << "Indica el costo para este servicio "<<endl;
              cin >> t_costo;
              cout << " Indica el tipo de servicio( aspirado , lavado o completo"<<endl;
              cin >> t_tise;
              cout << "Indica el tamaño de auto (chico/mediano/grande)"<<endl;
              cin >> t_tamanio;
              cout << "Indica el tipo de jabón (cerámico/normal/espumoso)"<<endl;
              cin >> t_jabones;
              cout << "Indiac el abrillantador (interno/externo/ambos)"<<endl;
              cin >> t_abrillantador;
              cout << "Indica la lanceta a emplear (rines/carrocería/cajuela)"<< endl;
              cin >> t_lanceta;
              Coches s_C(t_idS,t_servicio,t_herramienta,t_materiales,t_tiempo,t_costo,t_tise,t_tamanio,t_jabones,t_abrillantador,t_lanceta);
              catalogo.agrega_SC(s_C);
              }
         break;
         //Caso 6 "agregara" un serivicio de tapiceria.
         case 6:{
              cout << "Indica el id del servicio"<<endl;
              cin >> t_idS;
              cout << "Indica las herramientas a utilizar para este servicio de auto"<<endl;
              cin >> t_herramienta;
              cout << " Indica los materiales a utilizar para este servicio"<<endl;
              cin >> t_materiales;
              cout << "Indica el tiempo para este servicio"<<endl;
              cin >> t_tiempo;
              cout << "Indica el costo para este servicio "<<endl;
              cin >> t_costo;
              cout << " Indica el tipo de servicio( aspirado , lavado o completo"<<endl;
              cin >> t_tise;
              cout << "Indica el tamaño de auto (chico/mediano/grande)"<<endl;
              cin >> t_tamanio;
              cout << "Indica el tipo de tela (tela/piel/gamusa)"<<endl;
              cin >> t_ttela;
              cout << "Indica el tipo de mancha (organica/liquida/polvo)"<<endl;
              cin >> t_tmancha;
              cout << "Indica el tipo de detergente (manchas faciles/manchas de tinta/manchas dificiles)"<<endl;
              cin >> t_tdetergente;
              Tapiceria S_T(t_idS,t_servicio,t_herramienta,t_materiales,t_tiempo,t_costo,t_tise,t_tamanio,t_ttela,t_tmancha,t_tdetergente);
              catalogo.agrega_ST(S_T);
         }
         break;
         //Caso 7 "midificara" un tiempo o costo de un servicio de coches.
         case 7:
              menu_modifica();
              cin >> t_modifica;
              cout << "Indica el id del servicio a modificar "<<endl;
              cin >> t_idS;
              // Opcion costo
              if (t_modifica == 1){
                 cout << "Indica el nuevo costo"<<endl;
                 cin >> t_costo;
                 if ((t_idS >=0) && (t_idS <= catalogo.get_cuantosC()-1)) {
                     catalogo.modifica_costoSC(t_idS,t_costo);
                 }
              }
              if (t_modifica == 2){
                 cout << "Indica el nuevo tiempo"<<endl;
                 cin >> t_tiempo;
                 if ((t_idS >=0) && (t_idS <= catalogo.get_cuantosC()-1)) {
                     catalogo.modifica_tiempoSC(t_idS,t_costo);
                 }
              }
         break;
        //Caso 7 "midificara" un tiempo o costo de un servicio de tapiceria.
         case 8:
                    menu_modifica();
              cin >> t_modifica;
              cout << "Indica el id del servicio a modificar "<<endl;
              cin >> t_idS;
              // Opcion costo
              if (t_modifica == 1){
                 cout << "Indica el nuevo costo"<<endl;
                 cin >> t_costo;
                 if ((t_idS >=0) && (t_idS <= catalogo.get_cuantosT()-1)) {
                     catalogo.modifica_costoST(t_idS,t_costo);
                 }
              }
              if (t_modifica == 2){
                 cout << "Indica el nuevo tiempo"<<endl;
                 cin >> t_tiempo;
                 if ((t_idS >=0) && (t_idS <= catalogo.get_cuantosT()-1)) {
                     catalogo.modifica_tiempoST(t_idS,t_costo);
                 }
              }
         break;
          

  		}
    }
    
 
}
