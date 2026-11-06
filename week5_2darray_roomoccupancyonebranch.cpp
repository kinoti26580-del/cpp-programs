//name: KINOTI EDWIN MUTUGI
//registration number: CT101/G/26580/25
// This program simulates room occupancy in a building with 5 floors and 10 rooms per floor.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int occupancy[5][10];
    srand(static_cast<unsigned int>(time(0)));

    // Generate random occupancy data for each room.
    for (int floor = 0; floor < 5; ++floor) {
        for (int room = 0; room < 10; ++room) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Count and display occupied and vacant rooms on each floor.
    for (int floor = 0; floor < 5; ++floor) {
        int occupied = 0;

        for (int room = 0; room < 10; ++room) {
            if (occupancy[floor][room] == 1) {
                ++occupied;
            }
        }

        int vacant = 10 - occupied;
        cout << "Floor " << floor + 1
             << ": Occupied = " << occupied
             << ", Vacant = " << vacant << '\n';
    }

    return 0;
}
