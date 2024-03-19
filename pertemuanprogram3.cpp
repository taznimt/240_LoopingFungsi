#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, bNB,nCompass,nCompass,nNike;
int hAdidas = 300, hNB = 250, hPuma = 150, hNike = 350;

void input()
{
    cout << "Masukan jumlah Adidas = ";
    cin >> nAdidas;

    cout << "Masukan jumlah Puma = ";
    cin >> nPuma;

    cout << "Masukan jumlah New Balance = ";
    cin >> nNB;

    cout << "Masukan jumlah Compass = ";
    cin >> nCompass;

    cout << "Masukan jumlah Nike = ";
    cin >> nNike;

}

int totalMarga()
{
    return (nAdidas * hAdidas) + (nPuma * hPuma) + (nNB * hNB) + (nNike * hNike);

}

void Display(){
    cout << endl;
    cout <<"===========" <<endl;
    cout << endl;
    cout << "Jumlah puma = << nPum <<endl;
    cout << endl;
    cout << endl;
}