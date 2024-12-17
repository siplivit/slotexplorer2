#include "../../include/gamer/gamer.h"

Gamer::Gamer()
{
}

void Gamer::playGame(unsigned long bet, unsigned long win_multi)
{
    booking.addTotalGames(1);
    booking.addTotalBet(bet);
    booking.addTotalWin(win_multi * bet);

    if (win_multi > 0)
    {
        booking.addWinGames(1);
    }

    booking.addBalance(static_cast<signed long>(win_multi * bet) - bet);
    booking.addWins(win_multi);
}

void Gamer::printBooking()
{
    booking.print();
}
