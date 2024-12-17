#ifndef GAMER_H
#define GAMER_H

#include "../booking/booking.h"

class Gamer
{
private:
    // unsigned long game_in_session_count{0};
    int id{0};

public:
    Gamer();

    Booking booking;

    void playGame(unsigned long bet,
                  unsigned long win);
    void printBooking();
};

#endif // GAMER_H