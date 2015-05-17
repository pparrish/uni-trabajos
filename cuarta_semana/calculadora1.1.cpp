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

	float a,b,r;
   char opc;

   printf("Por favor seleccione una opcion\n"
   		 "a Suma\n"
          "b Multiplicacion\n"
          "c Resta\n"
          "d Multiplicacion\n"
          "\nSeleccione una opcion\n");
   scanf("%c", &opc);
   printf("Deme los dos operandos : a b\n");
   scanf("%f %f", &a, &b);

   switch(opc){
   case '1':
   case 'a':
   case 'A':
      r= a+b;
   	break;
   case '2':
   case 'b':
   case 'B':
   	if(a != 0 || b!=){
      	r= a*b;
      }else{
      	return;
		}
   	break;
   case '3':
   case 'c':
   case 'C':
   	if(a >= b){
      	r= a-b;
      }else{
      	return;
      }
   	break;
   case '4':
   case 'd':
   case 'D':
   	if(b != 0){
      	r= a/b;
      }else {
      	return;
      }
   	break;
   default:
   	printf("Opcion no valida\n");
      #ifdef _WIN32
      getch();
  		#endif
      return;
   }

   printf("El resultado = %.2f ", r);

  #ifdef _WIN32
  getch();
  #endif

  return;

}
