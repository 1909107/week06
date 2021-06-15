#include <stdio.h>
//Con este programa podemos transforma las horas en minutos y los suma a los otros minutos e imprime el resultado//
char tiempo[100];
float minutos;
float horas;
float total;
int main(void){
  printf("Inserte valores para horas y minutos\n");
  fgets(tiempo, sizeof (tiempo), stdin);
  sscanf(tiempo, "%f %f", &horas, &minutos);
    total= (horas*60) + minutos;
  printf("El resultado %.0f", total);
return 0;
}
