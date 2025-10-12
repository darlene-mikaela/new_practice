#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        // if (i < 10) {
        //     cout << i << " ";
        //     continue;
        // }

        // find armstrong
        int sum = 0;
        int number = i;
        int power;

        if (number > 1000) {
            power = 4;
        } else if (number > 100) {
            power = 3;
        } else if (number > 10) {
            power = 2;
        } else {
            power = 1;
        }

        int thousand = number/1000;
        int hundred = (number%1000)/100;
        int tenth = ((number%1000)%100)/10;
        int ones = ((number%1000)%100)%10;
    
        sum = pow(thousand, power) + pow(hundred, power) + pow(tenth, power) + pow(ones, power);

        // sum += pow(number/1000, power); 
        // number %= 1000;
        
        // sum += pow(number/100, power); 
        // number %= 100; 
        
        // sum += pow(number/10, power); 
        // number %= 10; 
        
        // sum += pow(number, power);

        if (sum==i) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}