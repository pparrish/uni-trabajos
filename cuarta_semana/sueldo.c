/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/
 *
 *  sueldo.c
 *
 *  Lee un sueldo e imprime el sueldo final con una bonificacion menor o mayor
 *
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <math.h>

void main(){
	float sueldo;

	printf("Ingrese su salario\n");
   scanf("%f", &sueldo);

   if(sueldo < 6000){
		sueldo = sueldo + sueldo * .10;
   }else {
   	sueldo = sueldo + sueldo * .05;
   }

   printf("Su sueldo final sera: %.2f\n", sueldo);

   #ifdef _WIN32
   getch();
   #endif

  return;

}