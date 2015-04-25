/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  adivinarSuma.c
 *  
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){

  int numero1, numero2, suma;

  /*Entrada de datos*/ 
  printf("Coloca dos numeros y la posible suma de estos\n Coloca el primer numero entero:");
  scanf("%d", &numero1);
  fflush(stdin);

  printf("Ingresa el segundo numero entero:\n");
  scanf("%d", &numero2);
  fflush(stdin);

  printf("Ingresa la posible suma de los numeros");
  scanf("%d" &suma);

  /*salida de datos*/
  if(suma == numero1 + numero2) {
    printf("Enorabuena, acertaste.");
  } else {
    printf("La suma no es correcta");
  }

  #ifdef _WIN32
  getch();
  #endif

  return;

}
