#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int u)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=u-m;
    int A[n1],B[n2];
    for(i=0;i<n1;i++)
    A[i]=a[l+i];
    for(j=0;j<n2;j++)
    B[j]=a[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(A[i]<=B[j])
        {
        a[k]=A[i];
        i++;
        }
    else
    {
        a[k]=B[j];
        j++;
    }
    k++;
}
while(i<n1)
{
    a[k]=A[i];
    i++;
    k++;
}
while(j<n2)
{
    a[k]=B[j];
    j++;
    k++;
}
}
void merge_Sort(int a[],int l,int u)
{
    
    
       int m=(l+u)/2;
        merge_Sort(a,l,m);
        merge_Sort(a,m+1,u);
        merge(a,l,m,u);
    
}
int main()
{
    int a[]={10,24,8,36,75,12,34,25,96,37,46,31};
    merge_Sort(a,0,11);
    for(int i=0;i<12;i++)
    {
    cout<<a[i]<<" ";
    }

}