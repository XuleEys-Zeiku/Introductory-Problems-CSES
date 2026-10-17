#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long n;

    cin>>n;
    
    vector<long> array;

    long min = 0;
    
    long x0;
    cin>>x0;
    array.push_back(x0);

    for(long i = 1; i < n; i++)
    {
        long x;

        cin>>x;

        array.push_back(x);

        if(array[i] < array[i-1])
        {
            long diferencia = array[i-1] - array[i];
            array[i] += diferencia;
            min += diferencia;
        }
    }

    cout<< min << endl;
    return 0;
}