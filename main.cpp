/********************************************************************************
* main.cpp: Demonstrerar implementering av dense-lager i C++.
********************************************************************************/
#include "dense_layer.hpp"

/********************************************************************************
* main: Implementerar ett dense-lager innehållande tre noder samt fyra vikter 
*       per nod. Träningsdata passeras för att träna lagret till att detektera
*       ett specifikt mönster. Nästa steg är att implementera backpropagation
*       för dolda lager samt optimering av bias och vikter i dense-lagret.
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