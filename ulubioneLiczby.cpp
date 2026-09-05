#include <bits/stdc++.h>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    vector <int> liczby(n);
    for(int i=0;i<n;i++){
		cin>>liczby[i];
    }
    int lewy = 0;
    int srodek = 0;
    int prawy = liczby.size() - 1;

    while(lewy <= prawy){
        srodek = (lewy + prawy)/2;
        if(liczby[srodek] % 2 == 0 && liczby[srodek - 1] % 2 == 1){
            cout << liczby[srodek];
            return 0;
        }
        if(liczby[srodek] % 2 == 1){
            lewy = srodek + 1;
        }
        if(liczby[srodek] % 2 == 0 && liczby[srodek - 1] % 2 == 0){
            prawy = srodek - 1;
        }
    }


}
