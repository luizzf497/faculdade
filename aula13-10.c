#include <bits/stdc++.h>


using namespace std;

int main() {

    int n;
    double x;

    cout<<"tamanho do vetor e valor para achar: ";

    cin>>n>>x;

    vector<double> v(n);

    for (int i = 0; i <=n; ++i) {
        cout<<"digite os valores"<<(i+1)<<"\n";
        cin>>v[i];
    }
    bool valor=false;
    for(int i = 0, i<n; ++i){
        if (v[i] == x) {
            cout<<"Valor encontrado na posição " <<i<<"\n";
            valor = true;
            break;
        }   
    }
    if (!valor)
    cout<<"valor não encontrado<"<<"\n";

}