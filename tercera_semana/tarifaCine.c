/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  tarifaCine.c
 *
 * Imprime el total a pagar en el cine dependiendo del numero de personas  
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){

  /*Empezamos colocando variales (que deverian ser globales)
  para tener los precios y el minimo para cambiar de tarifa controlados
  Esto es util si despues hay que hacer modificaciones a estos valores

  Noten que estas variables estan en mayusculas, debido a que se van a considerar 
  globales y constantes del programa */
  float TARIFA1 = 70.5;
  float TARIFA2 = 50.5;
  int  MIN_PARA_TARIFA = 8;

  int personas;
  float total;

  printf("Numero de personas que entraran al cine:\n");
  scanf("%d", &personas);

  /*Si las personas cubren el numero se cobra la segunda tarifa sino la primera*/
  if(personas >= MIN_PARA_TARIFA)
    total = TARIFA2 * personas;
  else
    total = TARIFA1 * personas;

  printf("La cantidad que debe pagar es: $ %.2f \n", total );

  #ifdef _WIN32
  getch();
  #endif

  return;

}
