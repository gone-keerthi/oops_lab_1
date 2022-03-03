#include<iostream>
using namespace std;
void display(int arr[100][100],int x,int y);
int main()
{
    int arr[100][100],m,n,i,j;
    cout<<"Enter the values of m and n : ";
    cin>>m>>n;
    display(arr,m,n);
    cout<<endl;
    cout<<"entered matrix is: "<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
void display(int arr[100][100],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
    }
}

