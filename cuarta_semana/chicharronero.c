/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  chicharronero.c
 *  
 *  Calcula las raizes de 3 numeros a b c dados utilizando la formula genereral
 *
 *
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <math.h>

void main(){


  /*Valores de prueba: los usaremos en vez del if, pues conocemos la respuesta */
  int a = 2, b = 3, c= -5,d = 0;
  double x1 = 0, x2 = 0;

  /*Obtenemos primero el determinante y en base a el actuamos*/
  d= (b*b)-(4*a*c);

  /*Imprimimos el determinante solo para tener una referencia (esto lo quitaremos en la
  version final) */
  printf("%lf\n",d);


  if(d > 0 ){
    x1 = ( -b - sqrt(d) ) / (2*a);
    x1 = ( -b + sqrt(d) ) / (2*a);
  }else if (d = 0){
    x1 = ( -b - sqrt(d) ) / (2*a);
    x1 = ( -b + sqrt(d) ) / (2*a);
  }else{
    printf("No tiene solucion (solucion compleja) \n")
  }


  printf("%lf\n%lf\n",x1, x2);

  #ifdef _WIN32
  getch();
  #endif

  return;

}