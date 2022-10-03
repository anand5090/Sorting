#include<iostream>
using namespace std;
int binary_Search(int a[],int l,int u,int val)
{
    int mid;
    if(u>=l)
    {
        mid=(l+u)/2;
        if(a[mid]==val)
        {
            return mid;
        }
        else if(a[mid]>val)
        {
            return binary_Search(a,mid-1,u,val);
        }
        else
        {
            return binary_Search(a,l,mid+1,val);
        }

    }
    return -1;


}
int main()
{
    int a[]={10,24,8,36,75,12,34,25,96,37,46,31};
     int res=binary_Search(a,0,11,24);
    return res;
    
}