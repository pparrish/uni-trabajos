#include <stdio.h>
#include <math.h>

int  vec1[100] = {0};
int  vec2[100] = {0};

void clean_stdin(void);

int main(){
  char c = 0;
  int tam1= 0;
  int tam2= 0;
  int k = 0;
  int i = 0;

  printf("Dados dos vectores calcularemos el producto punto\n primer vector\n");
  
  do{
    scanf("%d", &vec1[tam1] );
    clean_stdin();
    printf("vector1 = {");
    for(i=0; i<= tam1; i++){
      printf("%d,", vec1[i] );
    }
    printf("}\n");
    printf("TERMINAMOS?\n");
    scanf("%c", &c);
    clean_stdin();
    tam1++;
  }while(c!='s');

  printf("Vector 2 :\n");

do{
    scanf("%d", &vec2[tam2] );
    clean_stdin();
    printf("vector1 = {");
    for(i=0; i<= tam2; i++){
      printf("%d,", vec2[i] );
    }
    printf("}\n");
    printf("TERMINAMOS?\n");
    scanf("%c", &c);
    clean_stdin();
    tam2++;
  }while(c!='s' || tam2!=tam1);

  for(i=0 ; i < tam1; i++){
    k = k + (vec1[i] * vec2[i]);
  }

  printf("producto punto : %d\n", k);

}

/*Reemplazo de la funcion fflush que no esta definida para los sitemas opetarivos
esta funcion servira siempre*/
void clean_stdin(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}