 /*

        9/18/2020
        @uthor: Bipin Poudel
        Denomation coin problem with repatation
        INPUT:: 
        first line contains the int n the total amount 
        second line contains the array of the denomation
        OUTPUT::
        the number of ways in which denomation can be done
 */


#include<iostream>
using namespace std;
int denomation(int n, int denom[])
{
    cout<<"Hello world"<<endl;
    int ways[11] = {0, 0, 0 ,0, 0, 0, 0, 0, 0,0,0};
    ways[0] = 1;
    int lengthDenom = 3;
    for(int i=0;i<lengthDenom;i++)
    {
        cout<<"\t\tInside first first loop for denom  "<<denom[i]<<endl;
            for(int amount= 1; amount<=n;amount++)
            {
                cout<<"\t\t\t\tInside second for loop with amount  "<<amount<<endl;
                if(denom[i]<=amount)
                {
                    ways[amount] = ways[amount] + ways[amount-denom[i]];
                    cout<<"\t\t\t\t"<<ways[amount]<<endl;
                }
            }
    }
    return ways[n];
}

int main()
{
    fflush(stdin);
    int n = 10;
    int myArray[3] = {1, 5, 10};
    cout<<denomation(n, myArray);
}