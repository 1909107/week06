#include <stdio.h>
#include <math.h>
//Con este programa podemos calcular una circunferencia//
float r;
float r2; 
float pi;
float X; 
float volume;
int main(void){
  pi=3.14;
  printf("Inserte un radio para la esfera\n");
  scanf("%f", &r);
  X= (pi*4/3); 
  r2= pow (r, 3);
  volume = X*r2;
  printf("El volumen de una esfera con radio es  %.2f", volume);
return 0;
}
