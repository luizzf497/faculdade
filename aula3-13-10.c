#include<bits/stdc++.h>

using namespace std;

struct Vector {
    double x, y, z;
};

double produtoescalar(Vector v1, Vector v2) {
    return v1.x*v2.x + v1.y*v2.y+v1.z*v2.z;
}


Vector produtovetorial(Vetor v1, Vetor v2){
    Vetor result;
    result.x = v1.y*v2.z - v1.z*v2.y;
    result.y = v1.z*v2.x - v1.x*v2.z;
    result.z = v1.x*v2.y - v1.y*v2.x;
    return result;
}



