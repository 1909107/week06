#include <stdio.h>
// Con este programa podemos insertar un número entero en minutos y lo transforma en horas, minutos//
int minutos;
int horas;
int total;
int main(void){
 printf("Inserte una catidad para convertir\n");
 scanf("%d", &minutos);
 horas = minutos/60;
 total= minutos % 60 ;
 printf("El resultado sera en %d horas %d minutos", horas, total);
return 0;
}
