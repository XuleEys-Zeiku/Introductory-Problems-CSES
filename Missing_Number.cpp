#include <iostream>
#include <vector>

using namespace std;

int main()
{

    long long n;

    cin>>n;

    vector <long long> arr(n);

    for(long i=0; i<n-1; i++)
    {
        long long valores;
        cin>> valores;
        arr[valores-1]=valores;
    }

    for(long long i=0; i<n; i++)
    {
        if(i+1 != arr[i])
        {
            cout<<i+1;
            break;
        }
    }

    return 0;
}