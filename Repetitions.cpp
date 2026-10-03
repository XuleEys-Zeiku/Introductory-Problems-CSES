#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    string caracter;

    cin>>caracter;

    long mayor = 1;
    long aux = 1; 

    for(size_t i = 0; i < (size(caracter)) -1; i++)
    {
        if (caracter[i] == caracter[i+1])
        {
            aux++;
        }else
        {
           if(aux > mayor)
           {
                mayor = aux;
                aux = 1;
           } 
        }
    }

    if(aux > mayor)
        {
            mayor = aux;
            aux = 1;
        } 

    cout<<mayor<<endl;

    return 0;
}