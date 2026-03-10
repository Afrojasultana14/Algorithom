#include<iostream>
using namespace std;

void quickSort(int a[], int low, int high)
{
    if(low < high)
    {
        int p= a[high];
        int i = low - 1;

        for(int j = low; j <= high - 1; j++)
        {
            if(a[j] <= p)
            {
                i++;
                swap(a[i], a[j]);
            }
        }
        swap(a[i+1], a[high]);
        int pi = i + 1;

        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n-1);

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}