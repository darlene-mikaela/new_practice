#include <iostream>
using namespace std;

int main() {
    int kecepatan, jarak, menit, jam, waktu;

    cout << "Masukkan kecepatan (km/jam) ";
    cin >> kecepatan;

    cout << "Masukkan jarak (km) ";
    cin >> jarak;

    waktu = jarak/kecepatan*60;
    menit = (jarak/200)*15;
    jam = waktu/60;
    menit += waktu%60;

    cout << "Mobil akan menempuh jarak " << jarak << " dalam waktu " << jam << " jam dan " << menit << " menit" << endl;
    cout << "Mobil akan berhenti untuk mengisi bensin sebanyak " << jarak/200 << " kali" << endl; 
    
    return 0;
}