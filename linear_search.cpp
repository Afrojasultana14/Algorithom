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

    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            cout<<"Element found at position "<<i+1;
            
        }
         
        else
        {
              cout<<"Element not found";


        }

    }

    
    return 0;
}