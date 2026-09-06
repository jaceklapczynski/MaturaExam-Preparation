#include<bits/stdc++.h>
using namespace std;

ifstream in;
ofstream out;

vector<int> silnia(){
    vector<int> result(10);
    result[0] = 1;
    for(int j = 1; j <= 9; j++){
        result[j] = result[j-1] * j;
    }
    return result;
}

int sumaSilniCyfr(int liczbaWejsciowa){
    vector<int> silnie = silnia();
    int suma = 0;
    int liczba = liczbaWejsciowa;
    int ostatniaCyfra = 0;
    while(liczba != 0){
        ostatniaCyfra = liczba % 10;
        suma += silnie[ostatniaCyfra];
        liczba /= 10;
    }
    return suma;
}


int main(){
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

    out.open("liczbyWynik2.txt");
    for(int i = 0; i < 500; i++){
        if(liczby[i] == sumaSilniCyfr(liczby[i])){
            out << liczby[i] << endl;
        }
    }
    out.close();
}
