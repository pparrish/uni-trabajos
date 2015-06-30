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

const int TAM = 10;
char MENU[] = "Seleccione las operaciones a realizar en el vector\n"
              "Insertar\n"
              "1  - Inicio\n"
              "2  - Final\n"
              "3  - Antes de\n"
              "4  - Despues de\n"
              "Eliminar\n"
              "5  - Inicio\n"
              "6  - Final\n"
              "7  - Antes de\n"
              "8  - Despues de\n"
              "9  - Posicion\n"
              "--------\n"
              "m  - Modificar\n"
              "i  - Imprimir\n"
              "b  - Buscar\n"
              "--------\n"
              "s  - Salir";

void clean_stdin(void);
int isFull(int tam);
int  insertar(int arr[], int tam, int tipo);
void  recorrer(int arr[], int tam, int pos);
void  recorrerR(int arr[], int tam, int pos);
int eliminar(int arr[], int tam, int tipo);
void apilar(int arr[], int pos, int posf);

#include <stdio.h>
int main() {

  int  tam     = -1;
  int  areglo[TAM];
  int  i       = 0;
  char opcion  = 0;
  int  err     = 0;


  do{
    if(!err){
      printf("%s\n", MENU);
    } else {
      printf("Ha ingresado una opcion incorrecta\n");
      err = 0;
    }
    scanf("%c", &opcion);
    clean_stdin();

    switch(opcion){
      case '1':
      if(isFull(tam)){
        printf("EL vector esta lleno, no se pueden insertar mas datos\n");
      }else{
        tam = insertar(areglo, tam, 1);
      }
      break;
      case '2':
      if(isFull(tam)){
        printf("EL vector esta lleno, no se pueden insertar mas datos\n");
      }else{
        tam = insertar(areglo, tam, 2);
      }
      break;
      case '3':
      if(isFull(tam)){
        printf("EL vector esta lleno, no se pueden insertar mas datos\n");
      }else{
        tam = insertar(areglo, tam, 3);
      }
      break;
      case '4':
      if(isFull(tam)){
        printf("EL vector esta lleno, no se pueden insertar mas datos\n");
      }else{
        tam = insertar(areglo, tam, 4);
      }
      break;
      case '5':
      if(tam < 0 ){
        printf("El arreglo esta vacio\n");
        break;
      }
      tam = eliminar(areglo, tam, 1);
      break;
      case '6':
      if(tam < 0){
        printf("El arreglo esta vacio\n");
        break;
      }
      tam = eliminar(areglo, tam, 2);
      break;
      case '7':
      if(tam < 0 ){
        printf("El arreglo esta vacio\n");
        break;
      }
      tam = eliminar(areglo, tam, 3);
      break;
      case '8':
      if(tam < 0 ){
        printf("El arreglo esta vacio\n");
        break;
      }
      tam = eliminar(areglo, tam, 4);
      break;
      case '9':
      if(tam < 0 ){
        printf("El arreglo esta vacio\n");
        break;
      }
      tam = eliminar(areglo, tam, 5);
      break;
      case 'm': ;
      int pos = 0;
      int dato = 0;
      printf("Ingrese la posicion a modificar\n");
      scanf("%d", &pos);
      clean_stdin();
      printf("Ingrese la el valor\n");
      scanf("%d", &dato);
      clean_stdin();
      areglo[pos] = dato;
      break;
      case 'i':
      if(tam == -1){
        printf("El arreglo esta vacio\n");
      }else{
        printf("\n\n\n");
        for(i=0;  i<= tam; i++){
        printf(" %d : %d\n", i, areglo[i] );
        }
        printf("\n\n\n");
      }
      break;
      case 'b': ;
      int busqueda = 0;
      int count=0;
      printf("Ingrese el dato de busqueda\n");
      scanf("%d", &busqueda);
      clean_stdin();
      for(i=0;  i< tam; i++){
        if(areglo[i] == busqueda){
        printf(" %d : %d\n", i, areglo[i] );
        count++;
        }
      }
      if(!count){
        printf("No se encontro tu busqueda\n");
      }
      break;
      default:
      err=1;
    }

  }while(opcion!= 's');



  #ifdef _WIN32
  getch();
  #endif

  return;

}

/*Reemplazo de la funcion fflush que no esta definida para los sitemas opetarivos
esta funcion servira siempre*/
void clean_stdin(void) {
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int isFull(int tam){
  if(tam >= TAM){
    return 1;
  }
  return 0;
}

int insertar(int arr[], int tam, int tipo){
  int d=0;
  int i = 0;
  int pos = 0;
  int err;
  tam++;
  printf("Ingrese el dato a insertar:\n");
  scanf("%d", &d);
  clean_stdin();
  switch(tipo){
    case 1:
    recorrer(arr, tam, 0);
    arr[0] = d;
    break;
    case 2:
    arr[tam] = d;
    break;
    case 3:;
    err = 0;
    printf("Ingrese el dato a buscar:\n");
    scanf("%d", &pos);
    clean_stdin();
    for(i=0; i<=tam; i++){
      if(arr[i] == pos){
        recorrer(arr, tam, i);
        arr[i] = d;
        err++;
        break; 
      }
    }
    if(!err){
      printf("No se encontro el dato\n");
    }   
    break;
    case 4:;
    err = 0;
    printf("Ingrese el dato a buscar:\n");
    scanf("%d", &pos);
    clean_stdin();
    for(i=0; i<=tam; i++){
      if(arr[i] == pos){
        recorrer(arr, tam, i+1);
        arr[i+1] = d;
        err++;
        break; 
      }
    }
    if(!err){
      printf("No se encontro el dato\n");
    }
    break;
  }
  return tam;
}

int eliminar(int arr[], int tam, int tipo){
  int i = 0;
  int pos = 0;
  int err;

  switch(tipo){
    case 1:
    recorrerR(arr, tam, 0);
    break;
    case 2:
    break;
    case 3:;
    err = 0;
    printf("Ingrese el dato a buscar:\n");
    scanf("%d", &pos);
    clean_stdin();
    for(i=0; i<=tam; i++){
      if(arr[i] == pos){
        recorrerR(arr, tam, i-1);
        err++;
        break; 
      }
    }
    if(!err){
      printf("No se encontro el dato\n");
    }   
    break;
    case 4:;
    err = 0;
    printf("Ingrese el dato a buscar:\n");
    scanf("%d", &pos);
    clean_stdin();
    for(i=0; i<=tam; i++){
      if(arr[i] == pos){
        recorrerR(arr, tam, i+1);
        err++;
        break; 
      }
    }
    if(!err){
      printf("No se encontro el dato\n");
    }
    break;
  }
  tam--;
  return tam;
}
void recorrer(int arr[], int tam, int pos){
  int i = tam;
  for(i; i >= pos; i--){
    if(i-1 != -1 ){
      arr[i] = arr[i-1];
    }
  }
}

void recorrerR(int arr[], int tam, int pos){
  int i = pos;
  for(i; i <= tam; i++){
      arr[i] = arr[i+1];
  }
}