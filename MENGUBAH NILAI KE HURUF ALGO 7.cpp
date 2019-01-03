#include <iostream>
using namespace std;
int main ()
{
    int nilai;
    char huruf;

    cout << "Silahkan Masukkan Nilai Anda = "<<endl;
    cin >> nilai;

    if (nilai>=80)
        huruf = 'A';
    else if (nilai>=65 && nilai==79)
        huruf = 'B';
    else if (nilai>=55 && nilai==64)
        huruf = 'C';
    else if (nilai>=45 && nilai==54)
        huruf = 'D';
        else
        huruf = 'E';

    cout <<"Maka Nilai Anda Dalam Huruf Adalah =" <<huruf<<endl;
}
