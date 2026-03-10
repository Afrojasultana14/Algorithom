#include <iostream>
#include <algorithm>
using namespace std;

struct I { 
    int v,w; 
};

bool cmp(I a,I b){ 
    return (double)a.v/a.w > (double)b.v/b.w;
 }

int main(){
    int n; 
    double c; 
    cin>>n>>c;
    I a[n];
    for(int i=0;i<n;i++) 
    cin >> a[i].v >> a[i].w;
    sort(a,a+n,cmp);
    double tot=0;
    for(int i=0;i<n;i++){
        if(c>=a[i].w){ 
            c-=a[i].w; tot+=a[i].v; 
         }
        else{ 
            tot+=a[i].v*(c/a[i].w); break; 
        }
    }
    cout<<tot;
    return 0;
}