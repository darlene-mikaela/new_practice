#include <iostream>
using namespace std;

int main() {
    int solved, score;
    cin >> solved;

    if (solved <= 10) {
        score = solved*6;
    } else if (solved <= 20) {
        score = 10*6 + (solved-10)*2;
    } else if (solved < 40) {
        score = 10*6 + 10*2 + (solved-20);
    } else {
        score = 100;
    }

    cout << score << endl;

    return 0;
}