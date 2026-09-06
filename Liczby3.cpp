#include<bits/stdc++.h>
using namespace std;

ifstream in;
ofstream out;

int NWD(int a, int b) {
    while(b != 0) {
        int reszta = a % b;
        a = b;
        b = reszta;
    }
    return a;
}

int main() {
    string tekst = "";
    vector<int> liczby(500);
    int temp = 0;

    in.open("liczby.txt");
    if(in.good()){
        while(!in.eof()){
            getline(in, tekst);
            if(tekst.size() > 0) {
                liczby[temp] = stoi(tekst);
            }
            temp++;
        }
        cout << endl;
        in.close();
    } else {
        cout << "Blad otwarcia pliku" << endl;
    }

    int wynikNWD = 0;
    int najdluzszyCiag = 0;
    int pierwszaLiczbaCiagu = 0;
    int przedostatnieNWD = 0;
    int NWDNajdluzszegoCiagu = 0;

    for(int i = 0; i < liczby.size(); i++){
        int ostatniaLiczba = 0;
        wynikNWD = liczby[i];
        while(wynikNWD != 1){
            if(i + ostatniaLiczba > 500){
                break;
            }
            przedostatnieNWD = wynikNWD;
            ostatniaLiczba++;
            wynikNWD = NWD(wynikNWD, liczby[i + ostatniaLiczba]);
        }
        if(najdluzszyCiag < ostatniaLiczba){
            najdluzszyCiag = ostatniaLiczba;
            pierwszaLiczbaCiagu = liczby[i];
            NWDNajdluzszegoCiagu = przedostatnieNWD;
        }
    }

    out.open("liczbyWynik3.txt");
    out << pierwszaLiczbaCiagu << endl;
    out << najdluzszyCiag << endl;
    out << NWDNajdluzszegoCiagu << endl;
    out.close();
}
