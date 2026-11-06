//name: KINOTI EDWIN MUTUGI
//registration number: CT101/G/26580/25
// This program simulates room occupancy across multiple branches of a hotel chain, with 3 branches, each having 5 floors and 10 rooms per floor.



#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(static_cast<unsigned int>(time(0)));

    for (int branch = 0; branch < 3; ++branch) {
        for (int floor = 0; floor < 5; ++floor) {
            for (int room = 0; room < 10; ++room) {
                chain[branch][floor][room] = rand() % 2;
                totalOccupied += chain[branch][floor][room];
            }
        }
    }

    cout << "Total occupied rooms across all branches: "
         << totalOccupied << '\n';

    return 0;
}