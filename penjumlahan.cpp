#include <iostream>
using namespace std;
int main()
{
    int a[8];
    int jumlah;
    //memasukkan data
    for (int i=0;i<=7;i++){
        cout<<"masukkan nilai ke "<<i+1<<": ";
        cin>>a[i];
    }
    //penjumlahan
    jumlah=0;
    for (int i=0;i<=7;i++){
        jumlah=jumlah+a[i];
    }
    cout<<"jumlah seluruhnya: "<<jumlah;
    return 0;
    //Bekenweb.com
}
