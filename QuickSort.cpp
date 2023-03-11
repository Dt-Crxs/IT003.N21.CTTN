#include <bits/stdc++.h>
using namespace std;


// Sắp xếp dãy số bằng thuật toán QuickSort
void quickSort(vector<double>& arr, int left, int right) {
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int i=left;
    int j=right;
    uniform_int_distribution<int> uni(left, right);
    int pivot = uni(rng);
    while (i<=j)
    {
        while (arr[i]<arr[pivot])
            i++;
        while (arr[j]>arr[pivot])
            j--;
        if (i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if (left<j)
        quickSort(arr, left, j);
    if (right>i)
        quickSort(arr, i, right);
}



int main()
{
    clock_t begin = clock(); //ghi lại thời gian đầu
    const int array_size = 1000000;
    freopen("Testcase.txt", "r", stdin);
    freopen("QuickSort.txt", "w", stdout);

    

    vector<double> arr(array_size);
    for (int k=0;k<10;k++)
    {
        for (int i = 0; i < array_size; ++i)
            cin>>arr[i];
        quickSort(arr, 0, arr.size() - 1);
        for (int i = 0; i < array_size; ++i)
            cout<<arr[i]<<" ";
    }

    clock_t end = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
    return 0;
}