#include <iostream>

using namespace std;

int main()
{
    long long numero;

    cin>>numero;

    cout<< numero <<" ";

    while (numero > 1)
    {
        if (numero%2 == 0)
        {
            numero/=2;
        }else
        {
            numero*=3;
            numero+=1;
        }
        
        cout<< numero <<" ";
    }
    
    return 0;

}