#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    int p;
    int g;
    int c;
    int total = 0;
    int resto = 0;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        cin >> p >> g >> c;
        total += (p*4)+(g*9)+(c*4);
    }
    resto = m-total;
    cout << resto;
    return 0;
}