#include "Rectangulo.h"
#include <iostream>

// Metodo constructor de la clase Rectangulo
Rectangulo::Rectangulo(float _largo, float _ancho) {
  largo = _largo;
  ancho = _ancho;
}

// Metodo perimetro de la clase Rectangulo
void Rectangulo::perimetro() {
  std::cout << "El perimetro del rectangulo es: "
            << ((2 * largo) + (2 * ancho)) << "\n"
            << std::endl;
}

// Metodo area de la clase Rectangulo
void Rectangulo::area() {
  std::cout << "El area del rectangulo es: " << (largo * ancho) << "\n"
            << std::endl;
}