                         /***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/
 *
 *  ifAsendente.c
 *
 *  lee tres numeros e indica si estan en orden asendente
 *
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <math.h>

void main(){
	int n1,n2,n3;

   printf("Ingresa 3 numeros enteros separados pro espacio\n");
   scanf("%d %d %d", &n1 , &n2, &n3);

   if(n1 <= n2 ){
   	if(n2 <= n3){
       printf("Estan en orden asendente \n");
      }
   }else{
   	printf("no es asendente\n");
   }

   #ifdef _WIN32
   getch();
   #endif

  return;

}