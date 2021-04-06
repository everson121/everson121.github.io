#include <iostream>
#include <conio.h>
using namespace std;

bool digito(char carac)
{
    return (carac >= '0' && carac <= '9');
}

bool letra(char carac)
{
    return ((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <= 'z'));
}

bool digitoPar (char carac)
{
    return (carac == '0' || carac == '2' || carac == '4' || carac =='6' || carac == '8' );
}

bool vogal (char carac)
{
    return (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' || carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U');
 
}

bool maiuscula (char carac)
{
   return (carac >= 'A' && carac <= 'Z');
}

main()

{
    char carac;
    
cout << " Digite um caracter:\n ";
cin >> carac;

    if (letra(carac) && vogal(carac) && !maiuscula(carac))
    {
        cout<< "O caracter fornecido e uma vogal minuscula. ";
    }
    
    if (letra(carac) && vogal(carac) && maiuscula(carac))
    {
        cout<< "O caracter fornecido e uma vogal maiuscula. ";
    }
    
    if (letra(carac) && !vogal(carac) && !maiuscula(carac))
    {
        cout<< " O caracter fornecido e uma consoante minuscula.";
    }
    
    if (letra(carac) && !vogal(carac) && maiuscula(carac))
    {
        cout<< " O caracter fornecido e uma consoante maiuscula.";
    }
    
    if (digito(carac) && digitoPar(carac))
    {
        cout<< " O caracter fornecido e digito par. ";
    }
    
    if (digito(carac) && !digitoPar(carac))
    {
         cout<< " O caracter fornecido e digito impar. ";
    }
    
    
    if ( !digito(carac) && !letra(carac))
    {
       cout<< " O caracter fornecido nao e nem letra nem numero. ";
    }
    getch();    
    
}
