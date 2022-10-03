#include<iostream>
using namespace std;
int Quick(int a[],int left,int right)
{
    int loc,t;
    loc=left;
    while(left<right)
    {
    while(left<right&&a[loc]<=a[right])
    right--;
    if(left==right)
    break;
    else
    {
    t=a[loc];
    a[loc]=a[right];
    a[right]=t;
    loc=right;
    }
     while(left<right&&a[loc]>=a[left])
     left++;
     if(left==right)
     break;
     else
     {
     t=a[loc];
    a[loc]=a[left];
    a[left]=t;
    loc=left;
     }
    }
return loc;
}
void quick_Sort(int a[],int l,int u)
{
    int loc;
    loc=Quick(a,l,u);
    if(l+1<loc)
    quick_Sort(a,l,loc-1);
    if(loc<u-1)
    quick_Sort(a,loc+1,u);
}
int main()
{
    int a[]={10,4,8,36,12,25,38,14,69,35,42,26,52};
    quick_Sort(a,0,12);
    for(int i=0;i<13;i++)
    cout<<a[i]<<" ";
}
