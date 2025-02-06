//Write a program to find a triplet in a sorted array

#include<iostream>
using namespace std;
bool triple_sum(int arr[],int n,int x,int si)
{
    int i=si,j=n-1;
    int sum=arr[i] + arr[j];
    while(i<=j)
    {
        if(sum==x)
        {
            return true;
        }
        else if(sum<x)
        {
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}
int istriplesum(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(triple_sum(arr,n,x-arr[i],i+1))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[]={2,4,6,8,10,12};

    int n=sizeof(arr)/sizeof(arr[0]);

    int target;
    cout<<"enter the target sum : ";
    cin>>target;

     int res = istriplesum(arr,n,target);

     if(res)
     {
         cout<<"triplet exist";
     }
     else{
        cout<<"triplet doesn't exist";
     }
}
