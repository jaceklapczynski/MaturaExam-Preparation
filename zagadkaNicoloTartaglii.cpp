#include<bits/stdc++.h>
using namespace std;

long long binarySearch(long long p, long long q){
    int prawy = 1000000;
    int lewy = 0;
    long long srodek = 0;
    long long wynikRownania;

    while(prawy >= lewy){
        srodek = (prawy + lewy) / 2;
        wynikRownania = srodek*srodek*srodek + p*srodek;
        if(wynikRownania == q){
            return srodek;
        } else if(wynikRownania > q){
            prawy = srodek - 1;
        } else if(wynikRownania < q){
            lewy = srodek + 1;
        }
    }
    return -1;
}





int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int z = 0;
    cin >> z;
    long long p = 0;
    long long q = 0; // x^3 + px = q
    int x;
    for(int i = 0; i < z; i++){
        cin >> p;
        cin >> q;
        x = binarySearch(p,q);
        if(x == -1){
            cout << "NIE" << endl;
        } else{
            cout << x << endl;
        }
    }


}
