#include <iostream>
using namespace std;

int main() {
    int h1,m1,h2,m2,time;

    while (h1!=0 || m1!=0 || h2!=0 || m2!=0) {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1==0 && m1==0 && h2==0 && m2==0) break;
        time = (h2-h1)*60 + (m2-m1);
        time = (time<0?time+1440:time); // +24 hours
        cout << time << endl;
    }

    return 0;
}