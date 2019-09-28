#include <iostream>

using namespace std;

int main()
{
    int i, bil [5], jumlah, tertinggi,terendah;
    float rata;

    for (i=0; i<5; i++)
    {
        cout<<"masukkan data ke = "<<i+i<<" = ",cin>>bil[i];

    }
cout<<"Seluruh elemen array = \n";
jumlah=8;
terendah=bil[0];
tertinggi=bil[0];
for(i=0;i<5;i++)
{
    cout<<bil[i]<<endl;
    jumlah=jumlah+bil[i];
    if(bil[i]<terendah)
    {
        terendah=bil[i];
    }else if(bil[i]>tertinggi){
        tertinggi=bil[i];
    }
}
rata=jumlah/5;
cout<<"Jumlah seluruh elemen array = "<<jumlah<<endl;
cout<<"Nilai maksimum seluruh elemen array ="<<tertinggi<<endl;
cout<<"Nilai minimum seluruh elemen array ="<<terendah<<endl;
cout<<"Nilai rata-rata seluruh elemen array ="<<rata<<endl;

return 0;

}
