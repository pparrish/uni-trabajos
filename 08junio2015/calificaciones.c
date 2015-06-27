#include <stdio.h>

const int TAM= 100;

void clean_stdin(void);

int main(){
  int boletas[TAM];
  float calficaciones[TAM];
  int tam = 0;
  int i=0;
  int c=0;
  char r=0;
  float menor = 10;
  float mayor =0;
  int pmenor =0;

  printf("Introduce las calificaciones que deseas, cuando termines escribe s\n");
  
  do{
    
    printf("Numero de boleta\n");
    scanf("%d", &boletas[tam]);
    clean_stdin();
    
    printf("Calificacion\n");
    scanf("%f", &calficaciones[tam]);
    clean_stdin();
    
    printf("terminar\n");
    scanf("%c", &r);
    clean_stdin();
    
    tam++;

  }while(r != 's');

  for(i=0; i<tam; i++){
      if( calficaciones[i] <= menor){
        menor = calficaciones[i];
      }
  }

  for(i=0; i<tam; i++){
      if( calficaciones[i] >= mayor){
        mayor = calficaciones[i];
      }
  }
  
  printf("Mayores\n");
  for(i=0; i<tam; i++){
      if( calficaciones[i] == menor){
        printf("boleta: %d : %.2f\n", boletas[i], calficaciones[i] );
      }
  }

  printf("Mayores\n");
  for(i=0; i<tam; i++){
      if( calficaciones[i] == mayor){
        printf("boleta: %d : %.2f\n", boletas[i], calficaciones[i] );
      }
  }



  /*
  for(i=0; i<tam; i++){
    printf("%d\n",i);
    menor=10;
    for(c=i; c<tam; c++){
      printf("%d\n", c );
      if(calficaciones[c]<= menor){
        menor = calficaciones[c];
        pmenor = c;
        printf("%f\n", menor);
      }
    }
  
    float aux = calficaciones[i];
    calficaciones[i]      = calficaciones[pmenor];
    calficaciones[pmenor] =  aux;
    int aux2              = boletas[i];
    boletas[i]            =  boletas[pmenor];
    boletas[pmenor]       = aux2;
    
  }
  */
  /*
  for(i=0; i < tam; i++){
    printf("Boleta %d : %.1f \n", boletas[i], calficaciones[i]);
  }
  */

}


/*Reemplazo de la funcion fflush que no esta definida para los sitemas opetarivos
esta funcion servira siempre*/
void clean_stdin(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}