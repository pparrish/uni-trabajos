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


void suma(int, int);
int resta(int, int);
void multiplicacion(void);
int divicion(void);


void main(){

  int a,b;
  

  printf(" Dos numeros para sumar\n");
  scanf("%d %d", &a, &b );
  suma(a,b);

  printf(" Dos numeros para restar\n");
  scanf("%d %d", &a, &b );
  printf("resta : %d\n", resta(a,b) );

  multiplicacion();

  printf("divicion : %d\n", divicion() );  

  #ifdef _WIN32
  getch();
  #endif

  return;

}

void suma(int a, int b){
  int suma;
  suma = a+b;
  printf(" Suma %d\n", suma);
}

int resta(int a, int b){
  int resta;
  resta = a-b;
  return resta;
}

void multiplicacion(void){
  int a,b;
  printf(" Dos numeros para Multiplicar\n");
  scanf("%d %d", &a, &b );
  printf("multiplicacion: %d\n", a*b );
}

int divicion(){
  int a,b;
  
  printf(" Dos numeros para divicion\n");
  scanf("%d %d", &a, &b );

  return a/b;
}