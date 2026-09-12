#include<bits/stdc++.h>
using namespace std;


int wyszukiwanieBinarne(const vector <int>& tabela, int szukana){
    int lewyIndeks = 0;
    int prawyIndeks = tabela.size() - 1;
    int wynik = -1;

    while(prawyIndeks >= lewyIndeks){
        int srodek = (lewyIndeks + prawyIndeks)/2;
        if(tabela[srodek] == szukana){
            wynik = srodek;
            prawyIndeks = srodek - 1;
        } else if(tabela[srodek] < szukana){
            lewyIndeks = srodek + 1;
        } else{
            prawyIndeks = srodek - 1;
        }
    }
    return wynik;
}

int wyszukiwanieBinarneUpperBound(const vector <int>& tabela, int szukana){
    int lewyIndeks = 0;
    int prawyIndeks = tabela.size() - 1;
    int wynik = -1;

    while(prawyIndeks >= lewyIndeks){
        int srodek = (lewyIndeks + prawyIndeks)/2;
        if(tabela[srodek] == szukana){
            wynik = srodek;
            lewyIndeks = srodek + 1;
        } else if(tabela[srodek] < szukana){
            lewyIndeks = srodek + 1;
        } else{
            prawyIndeks = srodek - 1;
        }
    }
    return wynik;
}




int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    cin >> n;
    vector<int> liczby(n);
    for(int i = 0; i < n; i++){
        cin >> liczby[i];
    }

    int q;
    cin >> q;
    vector<int> zapytania(q);
    for(int i = 0; i < q; i++){
        cin >> zapytania[i];
    }

    int pierwsza = 0;

    for(int i = 0; i < q; i++){
        pierwsza = wyszukiwanieBinarne(liczby, zapytania[i]);
        if(pierwsza == -1){
            cout << 0 << endl;
        } else{
        cout << wyszukiwanieBinarneUpperBound(liczby, zapytania[i]) - pierwsza + 1 << endl;
        }
    }




}
