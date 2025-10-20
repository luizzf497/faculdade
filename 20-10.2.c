#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int w = 256, h = 256;
    int cx = w / 2;
    int cy = h / 2;
    int raio = 80;

    // Definição do quadrado
    int sq_x0 = 70;   // canto esquerdo
    int sq_y0 = 70;   // topo
    int sq_lado = 120; // tamanho do lado

    ofstream img("circulo_sobre_quadrado.ppm");
    img << "P3\n" << w << " " << h << "\n255\n";

    for (int y = 0; y < h; y++) {
        for (int x = 0; x < w; x++) {
            int r, g, b;

            // Primeiro: desenhar o quadrado (vermelho)
            if (x >= sq_x0 && x < sq_x0 + sq_lado && y >= sq_y0 && y < sq_y0 + sq_lado) {
                r = 255;
                g = 0;
                b = 0;
            } else {
                r = g = b = 255; // fundo branco
            }

            // Depois: desenhar o círculo por cima (azul)
            int dx = x - cx;
            int dy = y - cy;
            int dist2 = dx * dx + dy * dy;
            if (dist2 <= raio * raio) {
                r = 50;
                g = 100;
                b = 255;
            }

            img << r << " " << g << " " << b << " ";
        }
        img << "\n";
    }

    img.close();
    return 0;
}
