/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  
 *  
 *                                                                                                      
 */

#include <stdio.h>

void main(){

  int n, y , x, z, c;
  char op;

  do{
  printf("Introduzca el tipo de piramide que desea imprimir\n"
         "1- Asendente\n"
     "2- Desendente\n"
     "3- Asendente invertido\n"
     "4- Desendente invertido\n"
     "x- Salir\n"
     "\n"
     "Elija la opcion:\n");

  
  scanf("%c", &op );
  while ( (c = getchar()) != '\n' && c != EOF ) { }

  if(op != 'x'){
    printf("Dimencion de la piramide:");
    scanf("%d", &n);
    while ( (c = getchar()) != '\n' && c != EOF ) { }
  }
  

  switch(op){
  case '1':
    printf("\n\n\n\n\n");
    for(y=1; y <= n; y++){
      for(x=1; x<=y; x++){
        printf("%d",x);
      }
      printf("\n");
    }
    printf("\n\n\n\n\n");
  break;
  case '2':
    printf("\n\n\n\n\n");
    for(y=1; y <= n; y++){

      for(x=y; x>=1; x--){
        printf("%d",x);
      }
      printf("\n");
    }
    printf("\n\n\n\n\n");
  break;
  case '3':

    printf("\n\n");
    for(y=0; y < n; y++){
      for(z=1; z<(n-y); z++){
        printf(" ");
      }

      for(x=z; x<=n; x++){
        printf("%d",x);
      }

      printf("\n");
    }
    printf("\n\n");

  break;
  case '4':

    printf("\n\n");
    for(y=0; y < n; y++){
      
      for(x=n; x>=(n-y); x--){
        printf("%d",x);
      }

      for(x; x>0; x--){
        printf(" ");
      }

      printf("\n");
    }
    printf("\n\n");

  break;
  case 'x': 
  break;
  default:
    printf("No elegiste una opcion valida!!!!\n");
  break;
  }
  
  
  }while(op != 'x');

  return;

}
