/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  promedio.c
 *  
 *  obtenemos 5 calificaciones una matricula numerica y obtenemos el promedio
 *  si el promedio es mayor a 6 imprime aprobado , matricula y promedio
 *  si no es aprobado solo imprime la matricula y el promedio
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <math.h>

void main(){

  long int matricula;
  float calf[5], promedio;

  printf("Ingresa tu matricula\n");
  scanf("%ld", &matricula);

  printf("Ingresa la calificacion de 5 materias, separadas por un espacio\n");
  scanf("%f %f %f %f %f", &calf[0], &calf[1], &calf[2], &calf[3], &calf[4]);

  promedio = (calf[0] + calf[1] + calf[2] + calf[3] + calf[4] ) /5;

  if(promedio > 6){
    printf("Aprobado : %ld ::: %.1f \n", matricula, promedio );
  }else{
    printf("%ld ::: %.1f \n", matricula, promedio  );
  }

  #ifdef _WIN32
  getch();
  #endif

  return;

}
