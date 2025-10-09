#include <iostream>
using namespace std;

int main() {
    int total;
    cin >> total; // total numbers to be inputed
    int r0=0; int r1=0; int r2=0; // remainder=0(3k), =1(3k+1), =2(3k+2)

    for (int i = 0;  i < total; i++) {
        int num;
        cin >> num;

        if (num%3==0) { r0+=1; } else if (num%3==1) { r1+=1; } else { r2+=1; }
    }

    cout << r0 << " " << r1 << " " << r2 << endl;

    return 0;
}