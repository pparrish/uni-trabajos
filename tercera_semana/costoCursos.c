/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  costoCursos.c
 *  
 *  Imprime el total del costo de los cursos a tomar dependiendo de su estado academico             
 *                                                                                         
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){

  float COSTO_REGULAR = 50;
  float COSTO_IRREGULAR = 30;
  /*Usamos un pequeno truco, el usuario escribira regular o irregular, pero nosotros solo
  contemplaremos  un caracter que es r o i*/
  char estado;
  int cursos;
  float total;

  /*Hay que limpiar el buffer despues de esta operacion*/
  printf("Introduzca el estado del alumno\n");
  scanf("%c", &estado);
  fflush(stdin);

  printf("Ingrese el numero de cursos a tomar:\n");
  scanf("%d", &cursos);

  /*Si el alumno es irregular:  es decir si existe la letra i o I
  nos mostrara a*/
  if(c === 'i' || c === 'I') {
    total = COSTO_IRREGULAR * cursos;
    printf("---Irregular---\ncursos : %d\ntotal: %.2f\n", cursos, total);
  } else {
    total = COSTO_REGULAR * cursos;
    printf("---Regular----\ncursos : %d\ntotal: %.2f\n", cursos, total);
  }

  #ifdef _WIN32
  getch();
  #endif

  return;

}
