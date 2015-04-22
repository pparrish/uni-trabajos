/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  describirDinosaurio.c
 *  
 *  Pide al usuario el nombre de un dinosaurio, su peso en tonelaas y su longitud en pies
 *  Regresa el nombre del dinosaurio, su peso en kg y su longitud en metros.
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>


void main(){

  /*Array de caracteres, usamos 80 por ser un numero lo suficientemente grande para contener cualquier nombre */
  char  nombre[80];
  float pesoT,
        pesoKg,
        longitudFt,
        longitudM;

  /*Entrada de datos*/


  /*Notece que aqui no se esta usando ampersan "&" por que el array de caracteres es
  ya un puntero, una direccion de memoria*/
  printf("Por favor introduce el nombre de un dinosaurio:\n");
  scanf("%s", nombre);
  fflush(stdin);

  printf("Introduce el peso en toneladas del dinosaurio\n");
  scanf("%f", &pesoT);
  fflush(stdin);

  printf("Introduce la longitud en pies del dinosaurio\n");
  scanf("%f", &longitudFt);
  fflush(stdin);  

  /*operaciones*/
  pesoKg = pesoT * 1000;
  longitudM = longitudFt * 0.3048;

  /*Salida de datos*/
  printf("Los datos del dinosaurio:\nnombre: %s\nLonitud: %.3f m\nPeso: %.3f Kg\n", nombre , longitudM, pesoKg);

  #ifdef _WIN32
  getch();
  #endif

  return;

}
