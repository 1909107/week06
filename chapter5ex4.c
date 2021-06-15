#include <stdio.h>
// Con este programa podremos convertir kilimetros en millas//
float kilometros;
float millas;
int main(void){
  printf("Inserte un valor para hacer la conversion\n");
  scanf("%f", &kilometros);
  millas= kilometros*(.6213712/1);
  printf("in miles per hour this is %.4f", millas);
return 0;
}
