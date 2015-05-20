/***
 *       _____                  __                  ______                _          ______    __                    ______     _      _   _         
 *      / ___/____ _____  _____/ /_  ___  ____     / ____/___ ___________(_)___ _   / ____/___/ /___ _____ ______   / ____/____(_)____/ /_(_)___ _____ 
 *      \__ \/ __ `/ __ \/ ___/ __ \/ _ \/_  /    / / __/ __ `/ ___/ ___/ / __ `/  / __/ / __  / __ `/ __ `/ ___/  / /   / ___/ / ___/ __/ / __ `/ __ \
 *     ___/ / /_/ / / / / /__/ / / /  __/ / /_   / /_/ / /_/ / /  / /__/ / /_/ /  / /___/ /_/ / /_/ / /_/ / /     / /___/ /  / (__  ) /_/ / /_/ / / / /
 *    /____/\__,_/_/ /_/\___/_/ /_/\___/ /___/   \____/\__,_/_/   \___/_/\__,_/  /_____/\__,_/\__, /\__,_/_/      \____/_/  /_/____/\__/_/\__,_/_/ /_/ 
 *     
 * Obtenemos una fecha, e informamos si esta se encuentra en un dia bisiesto y calcula 
 * el dia de la semana que fue esa fecha
 *  
 *                                                                                                      
 */
 /*Anexar conio solo en windows*/
#ifdef _WIN32
#include <conio.h>
#endif

#include <stdio.h>
#include <math.h>

void main(){


  /*La cariable error sera una "flag" que nos estara informando si 
  existe algun error en nuestro programa*/

  int i,
      err = 0,
      bisiesto = 0,
      dia,
      mes,
      ano,
      doomsDay,
      dayDoomsDay;

  /*Lo primero que necesitamos es una fecha que sea correcta
  para ello el usuario ingresara el numero de una fecha y no podra seguir
  con el programa hasta que la fecha no sea correcta, tanto el dia
  como el mes como el ano se puede hacer de dos formas, introducir todos los datos
  de una sola vez y verificar despues o ir recibiendo dato por dato y verificandolo
  uno por uno, en este caso sera uno por uno*/

  printf("introduzca  una fecha para informarle si esta se encuentra en un ano bisiesto  y el dia de la semana en el que se dio\n"
         "Entrar el ano\n");
  
  /*Un bucle do while SIEMPRE se ejecuta una vez al menos y comprueba al final una condicion
  si esta se cumple, el bucle seguira si esta no se cumple no se seguira. 
  en este caso err, sera 0 si es que no existe ningun error en la fecha 
  por lo tanto while(err) solo se repetira si err=1 lo que significaria que la fecha
  fue introducida incorrectamente.*/
  do {
    if(err) printf("El ano no fue correcto, introduzcala otra vez. (no tiene que ser negativa)\n");
    scanf("%d", &ano);
    fflush(stdin);
    /*Este es un operador ternario, entre parentesis estamso indicando una conicion
    si esta se cumple, el valor DESPUES DEL SIGNO ? sera el que se le asigne a err
    si este es falso nos asignara el valor despues de los dos puntos : 
    esto es lo mismo que si hicieramos.

    if(ano>=0){
      err = 0;
    }else{
      err = 1;
    }

    comprobamos solamente que el ano no sea negativo*/
    err = (ano >= 0) ? 0 : 1;
  }while(err);

  printf("introduzca  el mes con numeros 1-12\n");

  do{
    if(err) printf("El mes que introdujo no fue correcto, debe estar entre 1 y 12\n");
    scanf("%d", &mes);
    fflush(stdin);
    err = (mes>0 && mes<=12) ? 0 : 1;
  }while(err);

  /*Por ultimo hay que comprobar que el dia que introduce el usiario sea correcto,
  para esto hay que verificar que el dia en cuestion no sobrepase los dias que tiene
  el mes en concreto, por ejemplo febrero no puede tener mas de 29 dias aqui vamos a
  comprobar si el ano (se puede hacer desde que se introduce o despues, solo que lo hago aqui
  para no complicar la explicacion del primer bucle)*/


  /*De nuevo usamos el operador ?  par averificar, se puede usar if (haganlo con if).
  Un ano es bisiesto si. 
  *Es divisible entre 4 

  Usamos (!ano%4) que nos dividira sobre 4 la variable y nos regresa el resto, lo importante aqui
  esque si el resto es 0, significa que es divisible entre 4, pero lo que regresa esto es un 0,
  por lo tanto nuestra condicion nos inicaria false(recuerden que un 0 es false y cualquier otro 
  numero es true) en esto interviene el operaor de negacion ! que convierte un false en un true
  y viseversa, con esto sabremos si el año es correcto o no.

  *No es divisible entre 100
  Usamos (ano%100) Lo mismo que el caso anterior pero evitamos el operador de negacion, pues lo que queremos es que
  nos comunique si deja resto, pues no deseamos que el ano sea divisible sobre 100

  *Es divisible entre 400
  Usamos (!ano%400) El caso es el mismo que el primero

  Se puede hacer de varias formas (un metodo convencional) ese lo dejo a su criterio (no usen este metodo)

  */
  bisiesto =  !(ano%4) && ( (ano%100) || !(ano%400) ) ? 1 : 0; 

  printf("Introduzca el dia\n");

  do{
    if(err) printf("El dia que introdujo es incorrecto, debe estar entre 1 y 31 y corresponder al numero de dias del mes que ofrecio\n");
    scanf("%d", &dia);
    fflush(stdin);
    
    /*Crearemos una comprobacion mas larga esta vez con if anidaos
    primero sabremos si el dia esta entre el rango basico correcto*/
    if(dia>0 && dia<=31 ){
      /*Aqui nos detendremos a verificar si el dia tiene los dias que debe ser
      hay muchas maneras de hacerlo, yo usare esta*/
      switch(mes){
        case 1:
          err = (dia<=31)?0:1;
          break;
        case 2:
          /*Casi especial febrero, pues debemos comprobar si el ano es bisiesto o no*/
          if(bisiesto){
            err = (dia <= 29)?0:1;
          }else{
            err = (dia <= 28)?0:1;
          }
          break;
        case 3:
          err = (dia<= 31)?0:1;
          break;
        case 4:
          err = (dia<= 30)?0:1;
          break;
        case 5:
          err = (dia<= 31)?0:1;
          break;
        case 6:
          err = (dia<= 30)?0:1;
          break;
        case 7:
          err = (dia<= 31)?0:1;
          break;
        case 8:
          err = (dia<= 31)?0:1;
          break;
        case 9:
          err = (dia<= 30)?0:1;
          break;
        case 10:
          err = (dia<= 31)?0:1;
          break;
        case 11:
          err = (dia<= 30)?0:1;
          break;
        case 12:
          err = (dia<= 31)?0:1;
          break;
      }
    }else{
      err = 1;
    }  
  }while(err);

  /*Aqui terminamos con la introduccion de datos, ahora solo falta verificar que dia de la semana
  cae cada fecha.

  ALGORITMO doomsDay

  Se basa en encontrar dia que fue el ultimo dia de febrero
  de caa ano, en base a ese dia podemos calcular cualquier fecha
  en el calendario 
  */
  /*El dia significativo del siglo 19xx es miercoles*/
  i = ano/100; 
  doomsDay = i%4;

  switch (doomsDay) {
    case 0:
      doomsDay = 2;
      break;
    case 1:
      doomsDay = 7;
      break;
    case 2:
      doomsDay = 6;
      break;
    case 3:
      doomsDay = 3;
      break;
  }
 
  
  /*Sacamos el doomsday del siglo 19xx tomando los dos primeros digitos del año*/
  i = ano - (ano/100)*100;
  /*dividimos el ano por 12, le sumamos el resto y sumamos la divicion del primer numero por
  el segundo*/
  dayDoomsDay = (i/12) + (i%12) + ( (i%12)/ 4 );
  doomsDay = ( (dayDoomsDay%7) + doomsDay )%7;
  doomsDay = doomsDay ? doomsDay : 7;


  /*Vamos a ajustar el dayDoomsDay para cada mes*/
  if(mes == 2 || mes == 3){/*Para febrero y  maro que comparten fechas*/
    dayDoomsDay = (bisiesto) ? 29 : 28;
  }else if(  !(mes%2) ){/*Para los meses pares n-esimo dia del n-esimo mes*/
    dayDoomsDay = mes;
  }else {/*Trabajamos para los meses impares, enero siempre es 3 o 4, los demas 5-9 7-11*/
    switch (mes){
      case 1:
        dayDoomsDay = (bisiesto)? 4 : 3 ;
        break;
      case 5:
        dayDoomsDay = 9;
        break;
      case 7:
        dayDoomsDay = 11;
        break;
      case 9:
        dayDoomsDay = 5;
        break;
      case 11:
        dayDoomsDay = 7;
        break;
    }
  }

  /*SAcamos el modulo del dia doomsday del mes*/
  dayDoomsDay =  dayDoomsDay%7;
  dayDoomsDay =  ( (dia%7) ? dia%7 : 7 ) - ( (dayDoomsDay) ? dayDoomsDay : 7 );
  dayDoomsDay = (dayDoomsDay + doomsDay)%7;

  /*El 1 es lunes por lo tanto se cumple*/

  printf("Para el dia:\n%d/%d/%d\n",dia, mes, ano );
  if(bisiesto) printf("El ano %d fue bisiesto\n",ano);

  switch(dayDoomsDay) {
    case 0:
      printf("Es domingo\n" );
      break;
    case 1:
      printf("Es Lunes\n" );
      break;
    case 2:
      printf("Es Martes\n" );
      break;
    case 3:
      printf("Es Miercoles\n" );
      break;
    case 4:
      printf("Es Jueves\n" );
      break;
    case 5:
      printf("Es Viernes\n" );
      break;
    case 6:
      printf("Es Sabado\n" );
      break;
  }


  #ifdef _WIN32
  getch();
  #endif

  return;

}
