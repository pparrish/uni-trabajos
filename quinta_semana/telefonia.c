/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/
 *
 *  salidaDesordenada.c
 *
 *  Toma un entero, un numero flotante y un caracter
 *  imprime un caracter, un numero y un flotante
 *
 */
/*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif



#include <stdio.h>

void main(){

  float AN = 2,  /*12*/
        AC = 2.2,/*15*/
        AS = 4.5,/*18*/
        EU = 3.5,/*19*/
        AF = 6,  /*23*/
        OC = 6,  /*25*/
        cl = 0,
        total,
        duracion;

 int clave = 0, err = 0;

 /*Entrada*/
 printf("Introduce la clave y el tiempo de tu llamada en minutos; separados por un espacio:\n"
        "CLAVE DURACION:\n");
 scanf("%d %f", &clave ,&duracion);

 /*Operaciones*/
 switch(clave){
 case 12:
   total = duracion * AN;
   cl = AN;
 	break;
 case 15:
   total = duracion * AC;
   cl = AC;
 	break;
 case 18:
   total = duracion * AS;
   cl = AS;
 	break;
 case 19:
   total = duracion * EU;
   cl = EU;
 	break;
 case 23:
   total = duracion * AF;
   cl = AF;
 	break;
 case 25:
   total = duracion * OC;
   cl = OC;
 	break;
 default:
 err = 1;
 printf("Introduce una clave valida\n");
 }

 /*Salida de datos*/
 if(!err) printf("Tiempo     : %.2f\n"
                 "Costo x min: %.2f\n"
                 "Total      : %.2f\n", duracion, cl, total);



  #ifdef _WIN32
  getch();
  #endif

  return;

}