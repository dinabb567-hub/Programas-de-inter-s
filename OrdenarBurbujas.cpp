#include <iostream>

void clasificar(int arreglo[], int tam) {

   int temp;
   for(int i = 0; i < tam -1; i++) {
      for(int j = 0; j < tam -i - 1; j++){
         if(arreglo[j] > arreglo[j + 1]) {
            temp = arreglo[j];
            arreglo[j] = arreglo[j+1];
            arreglo[j+1] = temp;
         }
      }
   }
}

int main() {

   int arreglo[] = {2, 4, 6, 8, 10, 7, 5, 3, 1, 9};
   int tam = sizeof(arreglo) / sizeof(arreglo[0]);

   clasificar(arreglo, tam);

   for(int elementos : arreglo){
      std::cout << elementos << " ";
   }

   return 0;
}

// No me ha costado pero me parece bastante interesante

