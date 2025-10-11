#include <iostream>
using namespace std;

int main() {
    cout << "+-------------------------------------+" << endl;
    cout << "|              Elfomartt              |" << endl;
    cout << "+-------------------------------------+" << endl;
    for (int i = 0; i < 10; i++) {
        if (i==0 || i==9) {
            for (int j = 0; j < 20; j++) {
                cout << ((j==19)?"#":"# ");
            }
            cout << endl;
        }
        else {
            for (int k = 0; k < 39; k++) {
                if (k==0 || k==38) {
                    cout << "#";
                } else if (k==2 && i==1){
                    cout << "I";
                } else if (k==6 && (i==1||i==3||i==5)) {
                    cout << "K";
                } else if (i==2) {
                    if (k==6 || k==8 || k==10 || k==12) {
                        cout << "#";
                    } else if (k==20) {
                        cout << "F";
                    } else if (k==28) {
                        cout << "E";
                    } else {
                        cout << " ";
                    }
                } else if (i==4) {
                    if (k==6 || k==8 || k==10 || k==12) {
                        cout << "#";
                    } else if (k==20) {
                        cout << "S";
                    } else if (k==28) {
                        cout << "D";
                    } else {
                        cout << " ";
                    }
                } else if (i==6) {
                    if (k==6 || k==8 || k==10 || k==12) {
                        cout << "#";
                    } else if (k==20) {
                        cout << "H";
                    } else if (k==28) {
                        cout << "P";
                    } else {
                        cout << " ";
                    }
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    cout << "+-------------------------------------+" << endl;
    cout << "| [w] Move Up          [s] Move Down  |" << endl;
    cout << "| [a] Move Left        [d] Move Right |" << endl;
    cout << "| [c] Check Cart       [e] Exit       |" << endl;
    cout << "+-------------------------------------+" << endl;

    return 0;
}