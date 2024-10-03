#include <iostream>
using namespace std;
int main() {
    int N,i=3;
    double S = 0;
    cout << "N = ";
    cin >> N;
    

    while (i != N+1) {
        S += (cos(i/2) + sin(2*i))/(1 + sin(cos(i)));
        i++;
    }
    cout << "S = " << S << "\n\n";
    

    S = 0;
    i = 3;
    do {
        S += (cos(i/2) + sin(2*i))/(1 + sin(cos(i)));
        i++;
    } while (i != N+1);
    cout << "S = " << S << "\n\n";
    

    S = 0;
    for (int i = 3; i != N+1; i++) {
        S += (cos(i/2) + sin(2*i))/(1 + sin(cos(i)));
    }
    cout << "S = " << S << "\n\n";
    

    S = 0;
    for (int i = N; i != 2; i--) {
        S += (cos(i/2) + sin(2*i))/(1 + sin(cos(i)));
    }
    cout << "S = " << S << "\n\n";
    

    cin.get();
}

