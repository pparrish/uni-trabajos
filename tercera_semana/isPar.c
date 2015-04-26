/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  isPAr.c
 *  
 *  Determina si un numero es par, impar o nulo
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){

  int numero;

  printf("Ingresa un numero entero;\n");
  scanf("%d", &numero);

  if(numero == 0)
    printf("tu numero es nulo\n");
  else if(numero % 2 == 0)
    printf("Es par\n");
  else
    printf("Es impar\n");

  
  #ifdef _WIN32
  getch();
  #endif

  return;

}
