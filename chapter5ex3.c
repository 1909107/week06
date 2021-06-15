#include <stdio.h>
char line [100]; 
int anchura;
int altura;
int perimetro;
int main(void){
  printf("Ingrese la anchura y altura\n");
  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &anchura, &altura);
  perimetro= (anchura + altura)*2;
  printf("El perimetro es %.2d", perimetro);
return 0;
}
