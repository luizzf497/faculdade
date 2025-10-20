#include<iostream>
#include<fstream>

using namespace std;


int main(){
    int w = 256, h = 256;
    int cx = w / 2;
    int cy = h / 2;
    int raio = 80;

    ofstream img("circulo.ppm");
    img<<"P3\n" << w << " " << h << "\n255\n";

    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            int dx = x - cx;
            int dy = y - cy;
            int dist2 = dx * dx + dy * dy;
        }
    }
}