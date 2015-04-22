/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  ganancia.c
 *  
 *  Recibe un monto de invercion y una taza de interes,
 *  Muestra la ganancia y el monto al final del periodo.
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){

  float invercion,
        ganancia,
        taza,
        total;

  /*Entrada de datos*/
  printf("Introduce el monto a invertir:\n");
  scanf("%f", &invercion);
  fflush(stdin);

  printf("Introduce la taza de interes:\n");
  scanf("%f", &taza);
  fflush(stdin);
  
  /*operaciones*/
  ganancia = invercion * taza/100;
  total = ganancia + invercion;

  /*Salida de datos*/
  printf("Su ganancia es: %.2f\nEl total al final del periodo es: %.2f\n", ganancia, total);

  #ifdef _WIN32
  getch();
  #endif

  return;

}
