#include <bits/stdc++.h>
using namespace std;


void HeapSort(vector<double>& arr) {
    make_heap(arr.begin(), arr.end());
    sort_heap(arr.begin(), arr.end());
}


int main()
{
    clock_t begin = clock(); //ghi lại thời gian đầu
    const int array_size = 1000000;
    freopen("Testcase.txt", "r", stdin);
    freopen("HeapSort.txt", "w", stdout);

    vector<double> arr(array_size);
    for (int k=0;k<10;k++)
    {
        for (int i = 0; i < array_size; ++i)
            cin>>arr[i];
        HeapSort(arr);
        for (int i = 0; i < array_size; ++i)
            cout<<arr[i]<<" ";
    }

    clock_t end = clock(); //ghi lại thời gian lúc sau
    cout<<"Time run: "<<(float)(end-begin)/CLOCKS_PER_SEC<<" s"<<endl;
    return 0;
}