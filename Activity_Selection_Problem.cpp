#include<iostream>
#include<algorithm>
using namespace std;

struct Activity {
    int start, finish;
};


bool Compare(Activity a1, Activity a2)
{
    return a1.finish < a2.finish;
}

int main()
{
    int n;
    cin >> n;

    Activity a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i].start >> a[i].finish;

    sort(a, a + n, Compare);

    cout << "Selected activities:" << endl;

    int lastFinish = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i].start >= lastFinish)
        {
            cout << "(" << a[i].start << "," << a[i].finish << ") ";
            lastFinish = a[i].finish;
        }
    }

    return 0;
}