/********************************************************************************
* main.cpp: Demonstrerar implementering av dense-lager i C++.
********************************************************************************/
#include "dense_layer.hpp"

/********************************************************************************
* main: Implementerar ett dense-lager inneh�llande tre noder samt fyra vikter 
*       per nod. Tr�ningsdata passeras f�r att tr�na lagret till att detektera
*       ett specifikt m�nster. N�sta steg �r att implementera backpropagation
*       f�r dolda lager samt optimering av bias och vikter i dense-lagret.
********************************************************************************/
int main(void)
{
   const std::vector<double> x = { 1, 2, 3, 4 };
   const std::vector<double> yref = { 2, 4, 6 };
   dense_layer l1(3, 4);

   l1.feedforward(x); 
   l1.backpropagate(yref); 
   l1.print(); 

   return 0;
}