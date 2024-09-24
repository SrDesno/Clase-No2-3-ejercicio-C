#include <iostream>

//Clase rectangulo
class Rectangulo{
  //Atributos de los objetos de la clase rectangulo
  private:
    float largo, ancho;
  //Metodos de los objetos de la clase rectangulo
  public:
    //Metodo constructor del objeto dentro de la clase Rectangulo
    Rectangulo(float, float);
    //Metodos del objeto dentro de la clase Rectangulo
    void perimetro();
    void area();
};

//Metodo constructor de la clase Rectangulo
Rectangulo::Rectangulo(float _largo, float _ancho){
  largo=_largo;
  ancho=_ancho;
}

//Metodo perimetro de la clase Rectangulo
void Rectangulo::perimetro(){
  std::cout<<"El perimetro del rectangulo es: "<<((2*largo)+(2*ancho))<<"\n"<<std::endl;
}

//Metodo area de la clase Rectangulo
void Rectangulo::area(){
  std::cout<<"El area del rectangulo es: "<<(largo*ancho)<<"\n"<<std::endl;
}


int main() {
  
  //Creacion de los objetos t1 y t2 de la clase Rectangulo
  Rectangulo t1=Rectangulo(2,5);
  Rectangulo t2=Rectangulo(8,4);

  //Se llama el metodo perimetro y area para el objeto t1
  t1.perimetro();
  t1.area();

  //Se llama el metodo perimetro y area para el objeto t2
  t2.perimetro();
  t2.area();

  return 0;
}