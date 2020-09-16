/*
        created : 09/16/2020
        @author: Bipin Poudel
        input: array of integers
        output: max sum of the adjacent elements
*/

#include<iostream>
using namespace std;

int max(int a, int b)
{
    return (a>b?a:b);
}


// Normal Approach with tc O(N) and sc O(N)
/*
int maxSubSubsetSumAdjacent(int arr[6])
{  
    // int length = sizeof(arr)/sizeof(arr[0]);
    int length = 6;
    int newArr[6];
    int null =0;
    if(length == null ) return -1;
    else if(length==1)
    {
        return arr[0];
    }

    newArr[0] = arr[0];
    newArr[1] = max(arr[0], arr[1]);
        //cout<<"The original array is \t\t"<<endl;
    for(int j=0;j<=5;j++) cout<<"\t\t"<<arr[j]<<endl;
    //cout<<newArr[0]<<" "<<newArr[1]<<endl;
    for( int i=2;i<=5;i++)
    {
        newArr[i] = max(arr[i]+ newArr[i-2], newArr[i-1]);
        cout<<"\t\t"<<newArr[i]<<endl;
    }
    //cout<<"The newArray is \t\t"<<endl;

    //for(int i=0;i<=5;i++) cout<<"\t\t"<<newArr[i]<<endl;
    return newArr[length-1];
}
*/

// Dynamic approach with tc O(N) and sc O(1)
int maxSubSubsetSumAdjacent(int arr[6])
{  
    // int length = sizeof(arr)/sizeof(arr[0]);
    int length = 6;
    int null =0;
    int first, current, second;
    if(length == null ) return -1;
    else if(length==1)
    {
        return arr[0];
    }

    second= arr[0];
    first = max(arr[0], arr[1]);
        //cout<<"The original array is \t\t"<<endl;
    // for(int j=0;j<=5;j++) cout<<"\t\t"<<arr[j]<<endl;
    //cout<<newArr[0]<<" "<<newArr[1]<<endl;
    for( int i=2;i<=5;i++)
    {
        current = max(arr[i]+ second, first);
        second = first;
        first = current;
    }
    //cout<<"The newArray is \t\t"<<endl;

    //for(int i=0;i<=5;i++) cout<<"\t\t"<<newArr[i]<<endl;
    return first;
}
int main()
{    
    int arr[6] = {7, 10, 12 ,7, 9, 14};
    cout<<maxSubSubsetSumAdjacent(arr);
    fflush(stdin);
}


