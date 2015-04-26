/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  promedio.c
 *  
 *  Recibe una matricula y tres calificaciones, regresa el promedio de estas con la matricula
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
  float cal1,
        cal2,
        cal3,
        promedio;

  printf("Digite su matricula\n");
  scanf("%li", &matricula);
  fflush(stdin);
  printf("Digite su primera calificacion\n");
  scanf("%f", &cal1);
  fflush(stdin);
  printf("Digite su segunda calificacion\n");
  scanf("%f", &cal2);
  fflush(stdin);
  printf("Digite su tercera calificacion\n");
  scanf("%f", &cal3);
  fflush(stdin);

  promedio = (cal1+cal2+cal3)/3;
  /*Podemos separar nuestros enunciados en cada linea si colocamos comillas
  en cada enunciado pero sin poner comas , el preprocesador unira las cadenas solo*/
  printf( "Su matricula es: %li\n"
          "Calificaciones : %.1f  %.1f  %.1f\n"
          "Su promedio total es : %.1f\n", matricula , cal1, cal2, cal3, promedio);

   #ifdef _WIN32
  getch();
  #endif

  return;

}
