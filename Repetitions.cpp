#include <iostream>
#include <string.h>
 
using namespace std;

int main()
{
    string caracter;

    cin>>caracter;

    long mayor = 0;
    long aux = 1; 
    long  n=caracter.length();

    for(long i = 0; i < n -1; i++)
    {
        if (caracter[i] == caracter[i+1])
        {
            aux++;
        }else
        {
           if(aux >= mayor)
                mayor = aux;
           
           aux=1; 
        }
    }

    if(aux >= mayor)
        {
            mayor = aux;
        } 

    cout<<mayor<<endl;

    return 0;
}