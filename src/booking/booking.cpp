#include "../../include/booking/booking.h"
#include <iostream> 

Booking::Booking()
{
}
unsigned long Booking::getTotalGames()
{
    return totalGames;
}

unsigned long Booking::getTotalBet()
{
    return totalBet;
}

unsigned long Booking::getTotalWin()
{
    return totalWin;
}

unsigned long Booking::getWinGames()
{
    return winGames;
}

signed long Booking::getBalance()
{
    return balance;
}

float Booking::getTotalPercentage()
{
    return (static_cast<float>(totalWin)/static_cast<float>(totalBet))*100;
}

float Booking::getWinPercentage()
{
    return (static_cast<float>(winGames)/static_cast<float>(totalGames))*100;
}

void Booking::addTotalGames(unsigned long games)
{
    totalGames += games;
}

void Booking::addTotalBet(unsigned long bet)
{
    totalBet += bet;
}

void Booking::addTotalWin(unsigned long win)
{
    totalWin += win;
}

void Booking::addWinGames(unsigned long wgames)
{
    winGames += wgames;
}

void Booking::addBalance(signed long bal)
{
    balance += bal;
}

void Booking::addWins(int tableWin)
{
    unsigned long current = wins[tableWin];

    wins[tableWin] = current + 1;
}
void Booking::print()
{
    std::cout << "-------------"<< std::endl;
    std::cout << "totalGames = " << totalGames << std::endl;
    std::cout << "totalBet = $" << totalBet << std::endl;
    std::cout << "totalWin = $" << totalWin << std::endl;
    std::cout << "winGames = " << winGames << " : " << (static_cast<float>(winGames)/static_cast<float>(totalGames))*100 << " %" << std::endl;
    std::cout << "balance = $" << balance << std::endl;
    std::cout << "total percentage = " << (static_cast<float>(totalWin)/static_cast<float>(totalBet))*100 << " %" << std::endl;
    std::cout << std::endl;
    // Перебираем и выводим все пары ключ-значение  
    for (const auto& pair : wins) {  
        std::cout << "Win: " << pair.first << ", Amount: " << pair.second << std::endl;  
    }


}

// std::cout << "summ_win_2400 = " << amount_win_2400 << " : $" <<  summ_win_2400 << std::endl;
// std::cout << "summ_win_1199 = " << amount_win_1199 << " : $" <<  summ_win_1199 << std::endl;
// std::cout << "summ_win_200 = " << amount_win_200 << " : $" <<  summ_win_200 << std::endl;
// std::cout << "summ_win_150 = " << amount_win_150 << " : $" <<  summ_win_150 << std::endl;
// std::cout << "summ_win_80 = " << amount_win_80 << " : $" <<  summ_win_80 << std::endl;
// std::cout << "summ_win_50 = " << amount_win_50 << " : $" <<  summ_win_50 << std::endl;
// std::cout << "summ_win_40 = " << amount_win_40 << " : $" <<  summ_win_40 << std::endl;
// std::cout << "summ_win_25 = " << amount_win_25 << " : $" <<  summ_win_25 << std::endl;
// std::cout << "summ_win_20 = " << amount_win_20 << " : $" <<  summ_win_20 << std::endl;
// std::cout << "summ_win_10 = " << amount_win_10 << " : $" <<  summ_win_10 << std::endl;
// std::cout << "summ_win_5 = " << amount_win_5 << " : $" <<  summ_win_5 << std::endl;
// std::cout << "summ_win_2_3 = " << amount_win_2_3 << " : $" <<  summ_win_2_3 << std::endl;
// std::cout << "summ_win_2_2 = " << amount_win_2_2 << " : $" <<  summ_win_2_2 << std::endl;
// std::cout << "summ_win_2_1 = " << amount_win_2_1 << " : $" <<  summ_win_2_1 << std::endl;
// std::cout << "summ_win_1 = " << amount_win_1 << " : $" <<  summ_win_1 << std::endl;
