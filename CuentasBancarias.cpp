#include <iostream>

int obtenerDigito(const int num) {
      return num % 10 + (num / 10 % 10);

}

int sumarDigitosImp(const std::string num){
   int suma = 0;
   for(int i = num.size() -2; i >= 0; i -= 2) {
   suma += obtenerDigito((num[i] - '0') * 2);
      
   }
   return suma;
}

int sumarDigitosPar(const std::string num){
   int suma = 0;
   for(int i = num.size() -1; i >= 0; i -= 2) {
   suma += num[i] -  '0';
   }
   return suma;
}


int main() {

  //6011000990139424
  //1 2 2 0 0 1 8 2 1 8 4 =  29
  //0 1 0 9 0  3 4 4 = 21
  //29 + 21 = 50

  std::string num;
  int resultado = 0;

  std::cout << "Ingrese un numero: ";
  std::cin >> num;

  resultado =sumarDigitosPar(num) + sumarDigitosImp(num);

  if(resultado % 10 == 0) {
   std::cout << "El numero es valido" << std::endl;
  } else {
   std::cout << "El numero no es valido" << std::endl;
  }

   return 0;
}