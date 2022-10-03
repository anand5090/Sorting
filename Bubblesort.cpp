#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    int r,i,temp;
    for(r=1;r<=n-1;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    
}
int main()
{
    int a[]={10,20,60,3,5,7,12};
    for(int i=0;i<7;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    bubbleSort(a,7);
     for(int i=0;i<7;i++)
    cout<<a[i]<<" ";

}