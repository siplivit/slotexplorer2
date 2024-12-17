#ifndef BOOKING_H
#define BOOKING_H

#include <map>

class Booking
{
private:
    unsigned long totalGames{0};
    unsigned long totalBet{0};
    unsigned long totalWin{0};
    unsigned long winGames{0};
    signed long balance{0};

    // Создаем map для хранения пар ключ-значение  
    std::map<int, unsigned long> wins;

    // float totalPercentage{0};
    // float winPercentage{0};

    // unsigned long game_in_session_count{0};

public:
    Booking();  
    unsigned long getTotalGames();
    unsigned long getTotalBet();
    unsigned long getTotalWin();
    unsigned long getWinGames();
    signed long getBalance();

    float getTotalPercentage();
    float getWinPercentage();

    void addTotalGames(unsigned long);
    void addTotalBet(unsigned long);
    void addTotalWin(unsigned long);
    void addWinGames(unsigned long);
    void addBalance(signed long);
    void addWins(int);

    void print();
};

#endif // BOOKING_H