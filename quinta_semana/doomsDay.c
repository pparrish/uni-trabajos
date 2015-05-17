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

  int err = 0,
      bisiesto = 0,
      dia,
      mes,
      ano;

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
  bisiesto = (  (!ano%4) && ( (ano%100) || (!ano%400) )  )? 1 : 0; 

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
  int doomsDay,
      dayDoomsDay,
      diaSiglo,
      diaAno;

  /*Primero debemos cual fue el doomsDay del primer ano 
  en el siglo en cuestion que se introdujo para esto dividimos sobre 100, con
  esto eliminaremos las primeras dos cifras*/
  diaSiglo = ano/100;

  /*Si despues sacamos el modulo de 4 al numero de dos
  cifras que nos debe de salir

  Si el numero es 0  el dia cae martes
  si es uno sera domingo
  si es dos sera viernes
  si es tres sera miercoles

  */
  diaSiglo = diaSiglo%4;

  /*convertimos el diaSiglo a un numero
  acorde con el dia que le toca*/
  switch(diaSiglo){
    case 0:
    diaSiglo = 2;
    break;
    case 1:
    diaSiglo = 7;
    break;
    case 2:
    diaSiglo = 5;
    break;
    case 3:
    diaSiglo = 3;
  }

  /*Ahora sacamos el dia significativo del ano en cuestion*/
  int i = ano-( (ano/100)*100  );
  /*El caso anterior borra los numeros pro arriba de 100,  por 
  lo qu enos quedaran dos cifras solamente 1990 = xx90 asi*/
  doomsDay = ( (i/12 + i%12 + (i%12)/4)%7 + diaSiglo )%7;
  /*Estas operaciones nos dara una cifra entera del 1 al 7  para determinar que dia cae
  doomsDay de ese ano en concreto*/

  /*Ahora tenemos el doomsDay en concreto del ano que corresponde a el ultimo dia
  de febrero de dicho ano, (sin tomar en cuenta si es bisiesto o no)
  Nos falta realizar calculos en base a ese dia para saber que dia cae cualquier
  dia del año nos basaremos en el mes que estamos, y comenzaremos el calulo con
  el mes de febrero y marzo, que es el mas facil seguiremos con los meses pares, 
  que tienene el mismo dia doomsDay en ciertos numeros especificos, despues para enero
  que es un caso especial y por ultimo para los demas meses que deverian ser impares*/
  if(mes==2 || mes == 3){
    
    /*Para febrero solamente
    Entramosque el ultimo dia de febrero debe ser 28 o 29*/
    dayDoomsDay = (bisiesto)? 29 : 28;

    /*Si el dia que se ingreso es 28 o 29 (igual al doomsDay) no necesitamos hacer nada*/
    if(dayDoomsDay == dia){
      dayDoomsDay = doomsDay;
    }else{
      /*Si es otro dia tendremos que operar*/
      dayDoomsDay = ((dayDoomsDay + dia)%7 +doomsDay)%7;
    }

  }else if(mes%2 == 0){
    /*Para los meses pares, el doomsDay es el n-esimo dia del n-esimo mes*/
    dayDoomsDay = mes;
    
    /*SI es el mismo dia no hacemos nada*/
    if(dia == dayDoomsDay){
      dayDoomsDay = doomsDay;
    }else if(dayDoomsDay < dia){
      /*Si el dia en cuestion es mayor al dia doomsDay tenemos que aproximarnos a la fecha
      sumano de 7 en 7*/
      while(dayDoomsDay<= dia) {
         dayDoomsDay = dayDoomsDay+7;
      }
    }else if(dayDoomsDay > dia){
      /*Si el dayDomsDay es mayor al diadado, operamos igual solo que restamos*/
      while(dayDoomsDay>= dia && dayDoomsDay-7>0){
         dayDoomsDay = dayDoomsDay-7;
      }
        
    }

    if(dia == dayDoomsDay){
      /*Si multiplicando llegamos al dia dado, no tenemos que hacer nada ese dia sera doomsdar*/
      dayDoomsDay = doomsDay;
    }else{
      /*Despues restamos el dia dado menos nuestro doomsday para obtener un valor relativo al dia de la semana*/
      dayDoomsDay = dayDoomsDay - dia - doomsDay;
      /*Si dicho valor es negativo debemos sacar su valor absoluto sino solo obtenemos el dia de la semana*/
      if(dayDoomsDay < 0){
          dayDoomsDay = ( dayDoomsDay*(-1))%7;
      }else{
          dayDoomsDay = (dayDoomsDay)%7;
      }

    }

  
  }else if(mes == 1){
    dayDoomsDay = (bisiesto)? 4: 3;

    /*SI es el mismo dia no hacemos nada*/
    if(dia == dayDoomsDay){
      dayDoomsDay = doomsDay;
    }else if(dayDoomsDay < dia){
      /*Si el dia en cuestion es mayor al dia doomsDay tenemos que aproximarnos a la fecha
      sumano de 7 en 7*/
      while(dayDoomsDay<= dia) {
         dayDoomsDay = dayDoomsDay+7;
      }
    }else if(dayDoomsDay > dia){
      /*Si el dayDomsDay es mayor al diadado, operamos igual solo que restamos*/
      while(dayDoomsDay>= dia && dayDoomsDay-7>0){
         dayDoomsDay = dayDoomsDay-7;
      }
        
    }

    if(dia == dayDoomsDay){
      /*Si multiplicando llegamos al dia dado, no tenemos que hacer nada ese dia sera doomsdar*/
      dayDoomsDay = doomsDay;
    }else{
      /*Despues restamos el dia dado menos nuestro doomsday para obtener un valor relativo al dia de la semana*/
      dayDoomsDay = dayDoomsDay - dia - doomsDay;
      /*Si dicho valor es negativo debemos sacar su valor absoluto sino solo obtenemos el dia de la semana*/
      if(dayDoomsDay < 0){
          dayDoomsDay = ( dayDoomsDay*(-1))%7;
      }else{
          dayDoomsDay = (dayDoomsDay)%7;
      }

    }



  }else{
    switch(dia){
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

    /*SI es el mismo dia no hacemos nada*/
    if(dia == dayDoomsDay){
      dayDoomsDay = doomsDay;
    }else if(dayDoomsDay < dia){
      /*Si el dia en cuestion es mayor al dia doomsDay tenemos que aproximarnos a la fecha
      sumano de 7 en 7*/
      while(dayDoomsDay<= dia) {
         dayDoomsDay = dayDoomsDay+7;
      }
    }else if(dayDoomsDay > dia){
      /*Si el dayDomsDay es mayor al diadado, operamos igual solo que restamos*/
      while(dayDoomsDay>= dia && dayDoomsDay-7>0){
         dayDoomsDay = dayDoomsDay-7;
      }
        
    }

    if(dia == dayDoomsDay){
      /*Si multiplicando llegamos al dia dado, no tenemos que hacer nada ese dia sera doomsdar*/
      dayDoomsDay = doomsDay;
    }else{
      /*Despues restamos el dia dado menos nuestro doomsday para obtener un valor relativo al dia de la semana*/
      dayDoomsDay = dayDoomsDay - dia - doomsDay;
      /*Si dicho valor es negativo debemos sacar su valor absoluto sino solo obtenemos el dia de la semana*/
      if(dayDoomsDay < 0){
          dayDoomsDay = ( dayDoomsDay*(-1))%7;
      }else{
          dayDoomsDay = (dayDoomsDay)%7;
      }

    }


  }

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
