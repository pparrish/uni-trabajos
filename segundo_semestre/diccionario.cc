#include <iostream.h>
#include <string.h>

/**Declaradion de funcio9nes*/
int cosa(char *p, char *t);

void main()
{	/**Declaracion de variables*/
	char *dias[]= {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes", "Sabado"},
		 *days[]= {"Sunday","Monday","Tuesday","Wensday","Thusday","Frayday", "Saturday"},
		 cad[20];
	int i;

	/**Entrada de datos*/
	cout<< "Ingresa el puto dia que quieras, cabron, mathafacka"<< endl;
	cin>> cad;

	/**Operaciones*/
	for(i=0; i<7 && cosa(cad, dias[i] /*  != 0*/); i++ );

	/**Salida de datos*/
	if(i < 7)
	{
		cout<< "La traduccion de:"<< cad<< " es "<< days[i];
	}else
	{
		cout<< "No se encontro la palabra"<< endl;
	}

}

/**Definicion de funciones*/
int cosa(char *p, char *t)
{	int i= 0, a , b;
	do
	{	a=p[i]; if(a>='A' && a<='Z') a+=32;
	 	b=t[i]; if(b>='A' && b<='Z') b+=32;
	 	i++;
	} while(a==b && a && b);
	return a-b;
}
