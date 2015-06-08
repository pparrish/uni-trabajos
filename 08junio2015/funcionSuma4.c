/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  
 *  
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
/*Version 4 ahora todo nuestro programa ira dentro de suma*/

/*Declaracion*/ 
void suma();

void main(){
  
  /*
  int r;

  Esto es lo que eliminamos
  int d1,d2,d3;

  printf("Dame tres numeros\n");
  scanf("%d %d %d", &d1, &d2, &d3);
  
  
  r = suma();

  printf("%d\n",r);

  */

  suma();

  
  #ifdef _WIN32
  getch();
  #endif

  return;

}

/*Definicion*/
/*Eliminaremos los argumentos de la funcion*/
void suma(){
  /*Esto lo eliminamos
  printf("%d\n",a+b+c);
  */
  int d1,d2,d3, r;

  printf("Dame tres numeros\n");
  scanf("%d %d %d", &d1, &d2, &d3);
  r = d1+d2+d3;
  printf("%d\n",r);

}
