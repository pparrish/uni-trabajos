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
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>


int func(int);

int main(int argc, char arcgv[] ){

  int n;
  printf("Un numero");
  scanf("%d", &n);


  n = func(n);

  printf("%d son los numeros pares e impares\n", n);

  #ifdef _WIN32
  getch();
  #endif

  return 0;

}

int func(int n){
  int i,x, y=0, pares=0, impares=0;
  for(i=0;i<n;i++){
    
    printf("Dame otro numero\n");
    fflush(stdin);
    scanf("%d", &x);
    
    if(x>=1){
      if( !(x%2) ){
        pares++;
      }else{
        impares++;
      }
      
    }else{
      printf("El entero no es poitivo\n");
    }
  }

  printf("%d numero de pares\n", pares );
  printf("%d numero de impares\n", impares );

  return pares + impares;

}
