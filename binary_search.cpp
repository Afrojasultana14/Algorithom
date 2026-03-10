#include<iostream>
using namespace std;

int main()
{
    int n, key, a[100];
         cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    cin>>key;

    int low=0, high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==key)
        {
            cout<<"Element found at position "<<mid+1;
            return 0;
        }
        else if(a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }

    cout<<"Element not found";

    return 0;
}