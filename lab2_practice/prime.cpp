#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int prime = 2;
    for (int i = 3; i <= num; i++) {
        int cont = 0;
        if (i==1) { continue; }
        for (int j = 2; j < i; j++) {
            if (i%j==0) { cont+=1; }
        }
        if (cont) {
            continue; 
        } else { // i is prime
            cout << "i " << i << " prime " << prime << " i-prime " << i-prime << endl;
            prime = i;
        }

    }

    return 0;
}