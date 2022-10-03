#include<iostream>
using namespace std;
/*
int findMinindex(int a[],int j,int n)
{
    int min,minindex;
    for(min=a[j],minindex=j;j<=n-1;j++)
        if(a[j]<min)
        {
        min=a[j];
        minindex=j;
        }
        // cout<<min;
    return minindex;
    
}

void Selection_sort(int A[],int m)
{
    int t,minindex,i;
    for(i=0;i<=m-2;i++)
    minindex=findMinindex(A,i,m);
    {
        t=A[i];
        A[i]=A[minindex];
        A[minindex]=t;
    }
}
*/

int Selection_sort(int A[],int n)
{
    int i,j,minindex,temp;
    for(i=0;i<n;i++)
    {
        minindex=i;
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[minindex])
            {
               minindex=j;
            }
        }
        temp=A[i];
        A[i]=A[minindex];
        A[minindex]=temp;
    }
}

int main()
{
    
    int a[]={10,7,3,15,25};
   Selection_sort(a,5);
  // findMinindex(a,0,5);
for(int i=0;i<5;i++)
  cout<<a[i]<<" ";


}