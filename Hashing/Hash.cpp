#include <bits/stdc++.h>
#define M 50000 // Size of the HashTable.

using namespace std;

string hashTable[M];

unsigned long hashFunction(string str)
{   srand((int) time(0));
    unsigned long i = 0;
    for (int j = 0; j<str.size(); j++)
        i += str[j]*j+rand();

    return i % M;
}


void insert(string str)
{   
    
    //Tính chỉ số index bằng hashFunction
    unsigned long index = hashFunction(str);
    //Tìm ô trống trong hashTable để điền vào
    while(hashTable[index] != "")
        index = (index + 1) % M;
    hashTable[index] = str;
}

void search(string str)
{
    //Tính chỉ số Index bằng hash
    unsigned long index = hashFunction(str);
     //Bỏ qua các vị trí trống
    while(hashTable[index] != str and hashTable[index] != "")
        index = (index + 1) % M;
    //Kiểm tra xem phần tử có nằm trong hashTable không
    if(hashTable[index] == str)
        cout << str << " is found!" << endl;
    else
        cout << str << " is not found!" << endl;
}


int main() 
{
    string key = "101010101010101010101010101001010101001010101101010010101010010101010010101010010101010101010010";
    cout << hashFunction(key) << endl;
    return 0;
}