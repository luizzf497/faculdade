/*Escreva um programa que leia um array de inteiros e exiba o maior elemento do array*/

#include<iostream>

using namespace std;

int main(){

int n 
sum = 0;
cout<<"Entre com o número"<<"\n";

cin>>n;

int*arr = new int[n];

cout<<"Entre"<<n<<"inteiros: "<<endl;

for(int i = 0; i < n; i++){
    cin>>arr[i];
}
int max = arr[0];
for(int i=0; i<n; ++i){
    if(arr[i] > max){
        max = arr[i];
    }
    
}

cout<<"O maior elemento do array é:"<<max<<"\n";
delete[] arr;
return 0;
}
