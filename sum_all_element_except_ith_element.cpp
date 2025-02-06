//Write a program to create another array with the product of all elements except the ith element

#include<iostream>
using namespace std;

void  product_array(int a[],int b[],int n)
{
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=b[i-1]*a[i];
    }
    int prod=1;
    for(int i=n-1;i>0;i--)
    {
        b[i]=b[i-1]*prod;
        prod*=a[i];
    }
    b[0]=prod;
}
int main()
{
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2=n;
    int arr1[n2];

    product_array(arr,arr1,n);
    for(int i=0;i<n2;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
