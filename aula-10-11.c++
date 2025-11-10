/*crie um programa que leia uma matriz de inteiros e exiba a soma de todos os elementos*/

#include<iostream>

using namespace std;

int main()

int n, sum = 0;
cout<<"Entre com o número"<<"\n";

cin>>n;

int*arr = new int[n];

cout<<"Entre"<<n<<"inteiros: "<<endl;

for(int i = 0; i < n; i++){
    cin>>arr[i];
}

for(int i=0; i<n; ++i){
    sum += arr[i];
    
}
cout<<sum<<"\n";

delete[] arr;
return 0;
