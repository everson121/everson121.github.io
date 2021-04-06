#include <iostream>
#include <conio.h>

using namespace std;

float retorno ( float F)

{
  float C;

    C = 5*(F-32) / 9;

    return C;
}


float transformar (float C)

{
    float K;

    K = C + 273.15;

    return K;
}

void terceiro (float f,  float &k)

{
    float c;

    c = retorno (f);
    k = transformar (c);
}

main()

{
    float kelvin, fahrenheit;

    cout << " Digite o valor em fahrenheit: ";
    cin >> fahrenheit;
    cout << " O Valor de celsius e:\n " <<retorno(fahrenheit)<< ".";

    terceiro (fahrenheit, kelvin);
    cout << " E a temperatura em kelvin e:\n " << kelvin << ".";

    getch();

}













