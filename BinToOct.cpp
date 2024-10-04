#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main() {
    long long sk,pozic=0,desimt=0,astunt[1000];
    string ast;
    cin>>sk;
    
    // Skaičiaus iš dvejetainės skaičių sistemos pavertimas į dešimtainę
    while (sk > 0) {
        desimt += (sk%10) * pow(2,pozic);
        pozic++;
        sk /= 10;
    }
    pozic = 0;
    
    
    // Skaičiaus iš dešimtainės skaičių sistemos pavertimas į aštuntainę
    if (desimt < 8) {
        cout<<desimt;
    } else {
        while (desimt > 0) {
            astunt[pozic] = desimt % 8;
            pozic++;
            desimt /= 8;
        }
    }
    
    // Aštuntainio skaičiaus vertimas iš String tipo kintamojo į int
    for (int i = pozic-1; i >= 0; i--) {
        ast += to_string(astunt[i]);
    }
    
    cout<<stoi(ast);
    return 0;
}
