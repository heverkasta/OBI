#include <iostream>
using namespace std;

int main() {
    int n;
    int nuMax = 0;
    cin >> n;
    int votos[n];
    for (int i=0; i<n; i++){
        cin >> votos[i];
    }
    for (int i=0; i<n; i++){
        if(votos[i]>nuMax){
            nuMax = votos[i];
        }
    }
    for (int i=nuMax; i>0; i--){
        for (int c=0; c<n; c++){
            if (votos[c]>=i){
                cout << "1 ";
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}