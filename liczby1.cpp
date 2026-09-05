#include<bits/stdc++.h>
using namespace std;

ifstream in;
ofstream out;

set<int> potegi(){
    set<int> result;
    int last = 1;
    int i = 0;
    while(last <= 100000){
        result.insert(last);
        last = last * 3;
        i++;
    }
    return result;
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

    set<int> lista = potegi();

    int wynik = 0;
    for(int i = 0; i < 500; i++){
        if(lista.count(liczby[i]) > 0){
            wynik++;
        }
    }

    cout << wynik;
    out.open("£apczyñski Jacek 4D1 - liczby wynik 1.txt");

    if(out.good()){
        out << wynik;
        out.close();
    } else {
        cout << "Blad utworzenia pliku" << endl;
    }
}


