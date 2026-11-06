//name: KINOTI EDWIN MUTUGI
//reg no: CT101/G/26580/25
//This program simulates a hotel booking system.

#include <iostream>
#include <string>
using namespace std;

class RoomBooking {
private:
    string guestName;
    int roomNumber;
    int daysBooked;

public:
    RoomBooking(const string& guest, int room, int days)
        : guestName(guest), roomNumber(room), daysBooked(days) {
        cout << "Room booking confirmed\n";
    }

    void displayBooking() const {
        cout << "\nGuest name: " << guestName
             << "\nRoom number: " << roomNumber
             << "\nDays booked: " << daysBooked << '\n';
    }

    ~RoomBooking() {
        cout << "Booking ended, room released\n";
    }
};

int main() {
    RoomBooking booking("Jane Doe", 205, 3);
    booking.displayBooking();

    return 0;
}