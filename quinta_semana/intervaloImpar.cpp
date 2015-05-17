/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/
 *
 *
 *       Calculadora.c
 *       Pregunta por una operacion y resuelve con dos operandos
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>

void main(){
   int num1, num2, err = 0;

	printf("Ingresa dos numeros separados por un espacio para imprimir los numeros pares dentro\n");
   scanf("%d %d", &num1, &num2);
   printf("\n\n\n");
   if(num1 < num2){
   	num1 = (num1%2 == 0)? num1: num1 +1;

		do{
   	printf("%d\n", num1);
   	num1 = num1 + 2;
   	}while(num1 <= num2);
   }else{
   	num1 = (num1%2 == 0)? num1 : num1 +1;

		do{
   	printf("%d\n", num1);
   	num1 = num1 - 2;
   	}while(num1  >= num2);
   }




  #ifdef _WIN32
  getch();
  #endif

  return;

}