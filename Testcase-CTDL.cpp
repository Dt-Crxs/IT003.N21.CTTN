#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include <cstdio>

using namespace std;

int main() {

    const int array_size = 1000000;

    freopen("Testcase.txt", "w", stdout);

    // Khởi tạo generator ngẫu nhiên
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    // Tạo các dãy số ngẫu nhiên
    vector<double> arr1(array_size);
    uniform_real_distribution<double> dist1(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr1[i] = dist1(rng);
    }
    sort(arr1.begin(), arr1.end());

    vector<double> arr2(array_size);
    uniform_real_distribution<double> dist2(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr2[i] = dist2(rng);
    }
    sort(arr2.rbegin(), arr2.rend());

    vector<double> arr3(array_size);
    uniform_real_distribution<double> dist3(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr3[i] = dist3(rng);
    }
    shuffle(arr3.begin(), arr3.end(), rng);

    vector<double> arr4(array_size);
    uniform_real_distribution<double> dist4(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr4[i] = dist4(rng);
    }
    shuffle(arr4.begin(), arr4.end(), rng);

    vector<double> arr5(array_size);
    uniform_real_distribution<double> dist5(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr5[i] = dist5(rng);
    }
    shuffle(arr5.begin(), arr5.end(), rng);

    vector<double> arr6(array_size);
    uniform_real_distribution<double> dist6(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr6[i] = dist6(rng);
    }
    shuffle(arr6.begin(), arr6.end(), rng);

    vector<double> arr7(array_size);
    uniform_real_distribution<double> dist7(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr7[i] = dist7(rng);
    }
    shuffle(arr7.begin(), arr7.end(), rng);

    vector<double> arr8(array_size);
    uniform_real_distribution<double> dist8(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr8[i] = dist8(rng);
    }
    shuffle(arr8.begin(), arr8.end(), rng);


    vector<double> arr9(array_size);
    uniform_real_distribution<double> dist9(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr9[i] = dist9(rng);
    }
    shuffle(arr9.begin(), arr9.end(), rng);


    vector<double> arr10(array_size);
    uniform_real_distribution<double> dist10(0.0, 100000.0);
    for (int i = 0; i < array_size; ++i) {
        arr10[i] = dist10(rng);
    }
    shuffle(arr10.begin(), arr10.end(), rng);

    for (int i = 0; i < array_size; ++i) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr4[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr5[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr6[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr7[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr8[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr9[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < array_size; ++i) {
        cout<<arr10[i]<<" ";
    }
    cout<<endl;

}