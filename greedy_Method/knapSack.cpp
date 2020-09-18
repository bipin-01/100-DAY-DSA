#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
    if(a>b) return a;
    else return b;
}

int main()
{
    fflush(stdin);

    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr + sizeof(arr[0]));
    cout<<"\t\t"<<n<<endl;


    sort(arr, arr+n);                     
    for(int i=1; i<=n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<arr[0]<<" "<<arr[7];
    return 0;
}
