//Write a program to find if there is a pair with sum x in a sorted array

#include<iostream>
using namespace std;
int pair_sum(int arr[],int n,int x)
{
    int low=0,high=n-1;

    while(low<high)
    {
        int sum = arr[low]+arr[high];
        if(sum == x)
        {
            cout<<"target sum pair : ("<<arr[low]<<" , "<<arr[high]<<" )\n";
            return true;
        }
        if(sum>x)
        {
            high--;
        }
        else{
            low++;
        }
    }
    cout<<"no pair found";
    return false;
}
int main()
{
    int arr[]={1,2,3,5,7,10,11,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    cout<<"enter the target sum : ";
    cin>>x;

    pair_sum(arr,n,x);
}
