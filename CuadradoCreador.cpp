#include <iostream>

int main() {

   int filas;
   int columnas;
   char símbolo;

   std::cout << "Ingrese el número de filas: ";
   std::cin >> filas;
   std::cout << "Ingrese el número de columnas: ";
   std::cin >> columnas;
   std::cout << "Ingrese el símbolo a imprimir: ";
   std::cin >> símbolo;

   for (int i = 1; i <= filas; i ++){
      for (int j = 1; j <= columnas ; j ++){
     std::cout << símbolo << " ";
      }
      std::cout << std::endl;
   }

   return 0;

}

