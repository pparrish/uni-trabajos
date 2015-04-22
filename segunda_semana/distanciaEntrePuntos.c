/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  distanciaEntrePuntos.c
 *  
 *  Pide al usuario dos puntos en el plano
 *  Regresa la distancia entre estos   
 *
 *  Compilar con -lm para que se pueda anexar la libreria math                                                                                                 
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <math.h>

void main(){

  int x1, x2, y1, y2;
  double distancia;

  /*Entrada de datos*/


  /*observar la salida estandar de datos la cual pide un formato*/
  printf("Porfavor introduce el primer punto del plano de la forma:x  y (ejemplo:\"5 5\")\n");
  scanf("%d %d", &x1, &y1);
  fflush(stdin);

  printf("Porfavor introduce el segundo punto del plano de la forma:x y\n");
  scanf("%d %d", &x2, &y2);
  fflush(stdin);


  /*operaciones*/

  /* La funcion sqrt calcula raices cuadradas, entre el parentesis
  tenemos la suma de dos funciones llamadas pow que se usan para exponentes
  estas a su vez reciben la diferencia de las X y las Y  */
  distancia = sqrt( pow( x1 - x2, 2) + pow( y1 - y2, 2) );

  /*Salida de datos */
  printf("La distancia entre los dos puntos es  : %.3f\n", distancia ); 
  #ifdef _WIN32
  getch();
  #endif

  return;

}