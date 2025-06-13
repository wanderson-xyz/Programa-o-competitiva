#include <iostream>
#include <cmath>
using namespace std;

int main() {

        int E, S, L;

        cin >> E;
        cin >> S;
        cin >> L;

        if(E >= 0 && E <= 1000 && S>=0 && S<=1000 && L >=0 && L <= 1000 ) {
            
            int resultado = abs(E - S) + abs(S - L) + abs(L-E);
            cout << resultado << endl;


        }
        else{
            cout << "é maior que 1000" << endl;
        }

    return 0;
}