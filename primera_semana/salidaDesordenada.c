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

  int numero;
  float flotante;
  char caracter;

  /*Entrada de datos*/
  printf("Introduzca un numero entero, un numero de coma flotante y un caracter:\n");
  scanf("%d %f %c", &numero, &flotante, &caracter);


  /*Salida de datos*/
  printf("Sus datos son :%2c %5d %.2f", caracter, flotante, entero);

  

  #ifdef _WIN32
  getch();
  #endif

  return;

}
