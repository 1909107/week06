#include <stdio.h>
int main(void){ 
//Con este programa podremos imprimir los datos para el area de un rectangulo//
int Area,   perimetro,  Anchura,   Altura;
Anchura = 3;
Altura = 5;

perimetro = (Anchura*2)+(Altura*2);
Area = Anchura*Altura;


printf ("el área de un rectángulo de 3 por 5 pulgadas es %.2d y el perimetro es %.2d pulgadas", Area, perimetro);


// para que este programa funcione con una anchura de 6,8 y una altura de 2,3 pulgadas, hay que usar float
// loat de área, unperímetro, un ancho, un  alto;
// y para que se muestren los decimales usa %.2f //
 return 0;

  } 
