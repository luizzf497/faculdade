#include<iostream>
#include<fstream>

using namespace std;


int main(){
    
    int w = 256, h = 256;

    ofstream img("imagem.ppm");

    img <<"P3\n"<<w<<" "<< h<< "\n255\n";
    for (int y = 0;y < h; y++) {
        for (int x = 0; x < w; x++){
            int r = x % 256;
            int g = y % 256;
            int b = (x+y)%256;
            img<<r<<" "<<g<<" "<< b <<" ";
        }
        img << "\n";
    }
    img.close()
}