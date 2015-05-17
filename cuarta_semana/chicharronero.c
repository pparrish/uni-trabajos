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
  
  /*Valores de prueba: los usaremos en vez del if, pues conocemos la respuesta
  d esta inicializado para evitar problemas*/
  int a, b, c, d = 0;
  
  /*valores dobles pues trabajaremos con raizes, es mejor para obtener mayor presicion*/
  double  x1 = 0, x2 = 0;

  /*entrada de datos*/
  printf("Por favor, dame ::a b c:: de ::: ax2 bx c :: \n");
  scanf("%d %d %d", &a, &b, &c);


  /*Operaciones*/

  /*Obtenemos primero el determinante y en base a el actuamos*/
  d= (b*b)-(4*a*c);

  /*Imprimimos el determinante solo para tener una referencia (esto lo quitaremos en la
  version final) 
  printf("%d \n %lf\n",d, sqrt(d) );
  
  */

  /*Si el determinante es 0 o positivo existira una raiz*/
  if(d >= 0 ){
    
    /*si el determinante es igual a 0 se tomara una sola raiz*/
    if(d == 0){
      x1 = (sqrt(d)-b ) / (2*a);
      printf("La unica raiz posible es :\nX1=%.2lf\n", x1 );
    }
    /*si el determinante es positivo y no 0 imprime las dos raizes*/
    else{
      x1 = ( -b+sqrt(d) ) / (2*a);
      x2 = ( -b-sqrt(d) ) / (2*a);
      printf("Las raizes son :\nX1=%.2lf\nX2=%.2lf\n", x1, x2 );
    }

  }else{
    /*Si el determinante es negativo no exisitira la raiz en la formula*/
     x1 = ( -b+d ) / (2*a);
     x2 = ( -b-d ) / (2*a);
    printf("La ecuacion tiene una solucion compleja. Pruebe con otra\n");
  }

  #ifdef _WIN32
  getch();
  #endif

  return;

}