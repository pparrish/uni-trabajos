/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/
 *
 *  salidaDesordenada.c
 *
 *  Toma un entero, un numero flotante y un caracter
 *  imprime un caracter, un numero y un flotante
 *
 */
/*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif



#include <stdio.h>

void main(){

	int A = 300,
   	 B = 450,
       C = 500,
       D = 700,
       horas,
       total;
   char categoria;

	/*Entrada*/
   printf("Introduce, su categoria como empleado:\n");
   scanf("%c", &categoria);
	fflush(stdin);
   printf("Ahora ingresa la cantidad de horas extra:\n");
   scanf("%d", &horas);

   /*operacioes*/
	switch(categoria) {
   case 'a': case 'A':
   	total = (horas > 30 ? 30 : horas) * A;
   	break;
   case 'b': case 'B':
   	total = (horas > 30 ? 30 : horas) * B;
   	break;
   case 'c': case 'C':
   	total = (horas > 30 ? 30 : horas) * C;
   	break;
   case 'd': case 'D':
   	total = (horas > 30 ? 0 : 30) * D;
   	break;
   }

   /*salida*/
   printf("Categoria: %c\n"
   		 "horas    : %d\n"
          "salario  : %d\n",categoria, horas, total);
  #ifdef _WIN32
  getch();
  #endif

  return;

}
