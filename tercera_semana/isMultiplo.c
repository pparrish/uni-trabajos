/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  isMultiplo.c
 *  
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){

  int numero1;
  int numero2;

  /*Entrada de datos*/
  printf("Introdusza dos numeros enteros separados por espacio porfavor:\n verificaremos si el segundo es multiplo del primero\n");
  scanf("%d %d",&numero1, &numero2);

  /*Usamos directamente los numeros para dividirlos con % este operador nos regresa unicamente
  el resto de una divicion por lo cual si es 0, significa que el numero es multiplo de este
  lo encerramos entre parentesis por tener mas claridad y por colocar el signo de negacion*/
  if( !(numero1 % numero2) )
    printf("%d es multiplo de %d\n", numero2, numero1);
  else
    printf("%d no es multiplo de %d\n", numero2, numero1 );

  #ifdef _WIN32
  getch();
  #endif

  return;

}