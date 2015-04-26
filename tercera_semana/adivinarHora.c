/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  adivinarHora.c
 *  
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <time.h>

void main(){
 
  /*La fecha y hora del sistema se obtienen primero incluyendo la libreria time.h
  Esta libreria ofrese un tipo de dato llamada time_t y otra
  estructura que se llama tm
  Nesesitamos primero la funcion time, pasando como parametro la direccion de memoria
  de un time_t (&) para que este recoja la hora el sistema en el dato time

  por ultimo nesesitamos integrar time_t en una estructura con la que hay que trabajar 
  para eso usamos un puntero a una estructura tm y la funcion localtime(&time_t) siendo time_t
  la variable que capturamos antes, con esta estructura podremos trabajar mediante
  tm->tm_hour
  tm->tm_min
  tm->tm_sec

  siendo tm el nombre de la estructura que generamos
  
  estos serian las sentencias que usaremos
  time_t fecha_sistema;
  time(&fecha_sistema);
  struct tm *hora = localtime(&fecha_sistema);
  
  */
  time_t fecha_sistema;
  int hour,
      min,
      sec;
  /*Entrada de datos*/
  scanf("%d:%d:%d", &hour, &min, &sec);

  /*obtenemos la hora del sistema*/
  time(&fecha_sistema);
  struct tm *ahora = localtime(&fecha_sistema);

  /*salida de datos*/
  if( (ahora->tm_sec == sec) && (ahora->tm_min == min) && (ahora->tm_sec <= sec) )
    printf("hora correcta\n");
  else
    printf("hora incorrecta\n");

  #ifdef _WIN32
  getch();
  #endif

  return;

}
