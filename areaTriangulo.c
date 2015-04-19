/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *      
 *  areaTriangulo.c
 *  
 *  Pide la base y la altura de un triangulo 
 *  e imprime el area de este.
 *                                                                                                      
 */
/*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif


#include <stdio.h>

void main(){

  float base, altura, area;

  /*Entrada de datos*/
  printf("Introduzca la base de su triangulo:\n");
  scanf("%f", &base);
  printf("Introduzca la altura de su triangulo:\n");
  scanf("%f", &altura);

  /*operaciones*/
  area = (base * altura)/2;

  /*salida de datos*/
  printf("El area de su triangulo es: %.2f\n", area);



  #ifdef _WIN32
  getch();
  #endif

  return;

}
