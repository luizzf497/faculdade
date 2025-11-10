/*crie um programa que leia uma matriz de inteiros e exiba a media de todos os elementos*/

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

double media = sum/n;

cout<<"A média da soma/n = ;"<<media<<"\n";
delete[] arr;
return 0;
