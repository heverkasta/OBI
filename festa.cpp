#include <iostream>
using namespace std;

int main() {
    int e;
    int s;
    int l;
    int distancia;
    
    cin >> e;
    cin >> s;
    cin >> l;
    
    distancia = (max(e, s) - min(e, s)) + (max(s, l) - min(s, l)) + (max(l, e) - min(l, e));

    cout << distancia << endl;
    return 0;
}