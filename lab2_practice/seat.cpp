#include <iostream>
using namespace std;

int main() {
    int seatNumber;
    cin >> seatNumber;

    // zone 1 100 rows, 25 person/row (2500)
    // zone 2 100 rows, 50 person/row (5000)
    // zone 3 100 rows, 25 person/row (2500)
    // input 26 => 1 2 1 (area 1, row 2, seat 1)

    // find area
    int zone;
    if (seatNumber > 7500) { zone = 3; }
    else if (seatNumber > 2500) { zone = 2; }
    else { zone = 1; }

    // determine row
    int row = 0;
    if (zone == 1) { 
        row = (seatNumber-1)/25 + 1;
    }
    else if (zone == 2) {
        seatNumber -= 2500;
        row = (seatNumber-1)/50 + 1;
    } else {
        seatNumber -= 7500;
        row = (seatNumber-1)/25 + 1;
    }

    // find number of seats at row
    int place;
    if (zone==1 || zone==3) place = (seatNumber%25)?seatNumber%25:25;
    else if (zone==2) place = (seatNumber%50)?seatNumber%50:50;


    cout << zone << " " << row << " " << place << endl;

    return 0;
}