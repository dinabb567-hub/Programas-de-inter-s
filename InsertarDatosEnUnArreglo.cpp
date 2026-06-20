#include <iostream>


int main() {

   std::string comidas [5];
   int tam = sizeof(comidas) / sizeof(comidas[0]);
   std::string temp;

   for(int i = 0; i < tam; i++) {
      std::cout << "Ingrese 's' para salir o sus cinco comidas favoritas #" << i + 1 << ": ";
      std::getline(std::cin,temp);

      if(temp == "s") {
         break;
      } else {
         comidas[i] = temp;
      }
   }

   std::cout << "Tus comidas favoritas son: "<< std::endl;
   for(int i = 0; !comidas[i].empty(); i++) {
      std::cout << comidas[i] << std::endl;
   }

   return 0;
}