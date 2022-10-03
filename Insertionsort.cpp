#include<iostream>
using namespace std;
void insertion_Sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>a[i])
            a[j+1]=a[j];
            else
            break;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int a[]={10,4,8,36,12};
    insertion_Sort(a,5);
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";

}

