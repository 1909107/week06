#include <stdio.h>
//este convierte centígrados a farenheit, c=centígrados, f=farenheit//
float c ;
float f; 
int main(void){
  printf("Inserta los grados\n");
  scanf("%f", &c);
  f= (c*9/5)+32;
  printf("El resultado este %.f", f);
return 0;
}
