#include <iostream>

using namespace std;

int main() {

  int minimum, jumlah, i = 1, lokasi;

  cout << "Masukkan jumlah elemen: ";
  cin >> jumlah;

  int array[jumlah];

  cout << "Masukkan " << jumlah << " angka\n";
  for (i = 0; i < jumlah; i ++) {
    cout << "Elemen ke-" <<(i+1) <<": ";
    cin >> array[i];
  }

  minimum = array[0];

  for(i = 0; i < jumlah; i++) {
    if (array[i] < minimum)  {
      minimum = array[i];
      lokasi = i+1;
    }
  }

  cout << "Nilai minimum adalah " << minimum << " berada di elemen ke " << lokasi << endl;
  
  //source:http://www.kopicoding.com/nilai-minimum-array-cpp/
  
}
