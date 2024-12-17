#ifndef REELS_H
#define REELS_H

#include "../../include/reels/game_result.h"

#include <vector>
#include <map>


// enum class Symbols
// {
//         RED_SEVEN = 1,      // 1 // 2 2 2
//         BLUE_SEVEN,         // 2// 4 4 2
//         WHITE_SEVEN,        // 3// 2 2 4
//         RED_BAR,            // 4// 4 7 7
//         WHITE_BAR,          // 5// 7 4 7
//         BLUE_BAR,           // 6// 7 7 4
//         BLANK               // 7// 29 29 29
// };

enum class Symbols
{
        CHERRY = 1,         // 1 // 2 2 2
        LEMON,              // 2// 4 4 2
        ORANGE,             // 3// 2 2 4
        PLUM,               // 4// 4 7 7
        GRAPE,              // 5// 7 4 7
        WATERMELON,         // 6// 7 7 4
        SEVEN,              // 7// 29 29 29
        STAR                // 8
};

enum class RealNumber
{
    ONE,
    TWO,
    THREE,
    FOUR,
    FIVE
};


using GameField = std::vector<std::vector<Symbols>>;
using WinLines = std::vector<std::vector<int>>;
using WinCombinations = std::map<std::vector<Symbols>,unsigned long>;


class Reels
{
private:
    GameField reels;
    GameField gameField;
    WinLines winLines;

    WinCombinations winCombinations;
    unsigned long max_generated_value{0};   // = 2147483647;
    unsigned long divider_1{0};             //  = 29826161;
    unsigned long divider_2{0};             //  = 414252;
    unsigned long divider_3{0};             //  = 5753;
    unsigned long divider_4{0};             //  = 
    unsigned long divider_5{0};             //  = 

public:
    // Конструктор
    Reels(unsigned long value);

    Symbols getSymbolNumber(RealNumber numder, unsigned long gnd);
    GameField getWinField(unsigned long gnd);
    GameResult getGameResult(unsigned long gnd, int bet, int lines);
    // Get win for 3-reel slot
    unsigned long getWin(Symbols first, Symbols second, Symbols third);

};

#endif // REELS_H
