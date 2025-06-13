#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int d;
    int cafeMax;
    int cafeMin;
    int teste;
    bool verif = false;
    cin >> a >> b >> c >> d;
    cafeMax = c-a;
    cafeMin = c-b;
    for(int i = 0; i*d<=cafeMax; i++){
        if((i*d)>=cafeMin && (i*d)<=cafeMax){
            verif = true;
        }
    }
    if(verif==true){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}