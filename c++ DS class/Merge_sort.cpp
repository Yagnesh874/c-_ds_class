#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[10], R[10];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int i, int r)
{
    if (i < r)
    {
        int m = (i + r) / 2;
        mergeSort(arr, i, m);
        mergeSort(arr, m + 1, r);
        merge(arr, i, m, r);
    }
}
void printArray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[10];
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter elements [" << i << "]"
             << " ";
        cin >> a[i];
    }
    cout << "Given array is " << endl;
    printArray(a, n);
    mergeSort(a, 0, n - 1);
    cout << endl
         << "after sorting : " << endl;
    printArray(a, n);
    return 0;
}