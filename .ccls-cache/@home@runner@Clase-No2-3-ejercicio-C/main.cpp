#include "Rectangulo.h"
#include <iostream>

int main() {

  // Creacion de los objetos t1 y t2 de la clase Rectangulo
  Rectangulo t1 = Rectangulo(2, 5);
  Rectangulo t2 = Rectangulo(8, 4);

  // Se llama el metodo perimetro y area para el objeto t1
  t1.perimetro();
  t1.area();

  // Se llama el metodo perimetro y area para el objeto t2
  t2.perimetro();
  t2.area();

  return 0;
}