#include <iostream>
#include <cmath>
using namespace std;

int main() {

        int A, B, C, D;

        cin >> A;
        cin >> B;
        cin >> C;
        cin >> D;



        int validacao = (C - A)/D;
        int validacao2 = (C - B)/D;
        int operacao = C - (validacao * D);
        int operacao2 = C - (validacao2 * D);

        if(operacao >= A && operacao <= B){
            cout << "S" << endl;
        }
        else if(operacao2 >=A && operacao2 <=B){
            cout << "S" << endl;
        }

        else{
            cout << "N" << endl;
        }



        // if(E >= 0 && E <= 1000 && S>=0 && S<=1000 && L >=0 && L <= 1000 ) {
            
        //     int resultado = abs(E - S) + abs(S - L) + abs(L-E);
        //     cout << resultado << endl;


        // }
        // else{
        //     cout << "é maior que 1000" << endl;
        // }

    return 0;
}