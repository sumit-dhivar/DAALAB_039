#include<iostream> 
using namespace std;
int main()
{
    int arr[7] = {1,0,4,0,2,5,0};
    int count=0;
    for (int i=0;i<7;i++)
    {
        if(arr[i]==0)
        {
            count++;
        }
    }
    cout<<"The number of zeros in list is "<<count<<".";
    return 0;
}