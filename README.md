# Anteckningar - 2022-09-30
Implementering av neuralt nätverk i C++ (del II) - Implementering av feedforward, backpropagation och utskrift.

I detta steg har feedforward (för beräkning av nodernas utsignaler), backpropagation för yttre lager samt en utskriftsrutin implementerats.
I nästa steg skall backpropagation för dolda lager samt optimering (för justering av bias och vikter) implementeras.

Filen dense_layer.hpp innehåller strukten dense-layer och samtliga medlemsfunktioner. Strukten är mestadels klar, men några funktioner kvarstår.

Filen main.cpp demonstrerar skapandet av ett dense-lager innehållande tre noder samt fyra vikter per nod. Träningsdata implementeras för att genomföra en feedforward samt backpropagation, följt av utskrift. I nästa steg optimering ske, följt av kontroll av dense-lagrets lyckas tränas effektivt.