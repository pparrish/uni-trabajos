/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 *  minTomay.c
 *  
 *Ingresa una letra y debuelve si es mayuscula o minuscula y la convierte en una u otra
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
/*La libreria de ctype incluye las funciones necesarias para trabajar*/
#include <ctype.h>

void main(){

  char letra;

  /*Entrada de datos*/
  printf("Introduzca una letra:");
  /*Usamos getchar para almacenar la letra directamente en la variable*/
  letra = getchar();

  /*El simbolo ! significa negacion, en tanto que la funcion isalpha
  nos va a retonar verdadero en caso de que sea una letra es decir A-Z o a-z
  En caso de no ser una letra el programa terminara*/
  if(!isalpha(letra)){
    printf("No has introducido una letra!!!");
    return;
  }
  /*Islower nos dice si la letra es una minuscula*/
  if(islower(letra)){
    printf("Tu letra es minuscula \nAHORA MIRA COMO LA TRANSFORMO CON MIS PODERES \nwiiiiiiiiiiiiiiiiuuuuaaaiii: %c\n", toupper(letra));
  }else{
    printf("Tu letra es una mayuscula\n wiiiiiiiuuuuuaaaa : %c\n", tolower(letra) );
  }


  #ifdef _WIN32
  getch();
  #endif

  return;

}
