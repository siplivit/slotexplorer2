#include "../../include/reels/reels.h"

std::vector<Symbols> first{Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                           Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                           Symbols::BLANK,Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN,
                           Symbols::BLANK,Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN,
                           Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR
                           };

std::vector<Symbols> second{Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                           Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                            Symbols::BLANK,Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN,
                           Symbols::BLANK,Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN,
                           Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR};

std::vector<Symbols> third{Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                           Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                            Symbols::BLANK,Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN,
                           Symbols::BLANK,Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN,
                           Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR};
//---------- 5 reels slot----------------
std::vector<Symbols> fourth{Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                           Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                            Symbols::BLANK,Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN,
                           Symbols::BLANK,Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN,
                           Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR};

std::vector<Symbols> fifth{Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                           Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR,
                            Symbols::BLANK,Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN,
                           Symbols::BLANK,Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN,
                           Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR,
                           Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR};

WinLines lines{
    {1, 1, 1, 1, 1}, // line 1
    {0, 0, 0, 0, 0}, // line 2
    {2, 2, 2, 2, 2}, // line 3
    {0, 1, 2, 1, 0}, // line 4
    {2, 1, 0, 1, 2}, // line 5
    {1, 0, 0, 0, 1}, // line 6
    {1, 2, 2, 2, 1}, // line 7
    {0, 0, 1, 2, 2}, // line 8
    {2, 2, 1, 0, 0}, // line 9
    {1, 0, 1, 2, 2}, // line 10
    {1, 2, 1, 0, 0}, // line 11
    {1, 2, 1, 2, 1}, // line 12
    {1, 0, 1, 0, 1}, // line 13
    {0, 1, 0, 1, 0}, // line 14
    {2, 1, 2, 1, 2}, // line 15
    {1, 1, 0, 1, 1}, // line 16
    {1, 1, 2, 1, 1}, // line 17
    {0, 0, 1, 0, 0}, // line 18
    {2, 2, 1, 2, 2}, // line 19
    {0, 1, 1, 1, 0}, // line 20
    {2, 1, 1, 1, 2}  // line 21
};

// WinCombinations winCombinations{
//     {Symbols::CHERRY, Symbols::CHERRY},
//     {Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY},
//     {Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY},
//     {Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY},
//     {Symbols::LEMON, Symbols::LEMON, Symbols::LEMON},
//     {Symbols::LEMON, Symbols::LEMON, Symbols::LEMON, Symbols::LEMON},
//     {Symbols::LEMON, Symbols::LEMON, Symbols::LEMON, Symbols::LEMON, Symbols::LEMON},
//     {Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE},
//     {Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE},
//     {Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE},
//     {Symbols::PLUM, Symbols::PLUM, Symbols::PLUM},
//     {Symbols::PLUM, Symbols::PLUM, Symbols::PLUM, Symbols::PLUM},
//     {Symbols::PLUM, Symbols::PLUM, Symbols::PLUM, Symbols::PLUM, Symbols::PLUM},
//     {Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE},
//     {Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE},
//     {Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE},
//     {Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON},
//     {Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON},
//     {Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON},
//     {Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN},
//     {Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN},
//     {Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN},
//     {Symbols::STAR, Symbols::STAR, Symbols::STAR},
//     {Symbols::STAR, Symbols::STAR, Symbols::STAR, Symbols::STAR},
//     {Symbols::STAR, Symbols::STAR, Symbols::STAR, Symbols::STAR, Symbols::STAR},
// };

Reels::Reels(unsigned long value)
{
    reels.emplace_back(first);
    reels.emplace_back(second);
    reels.emplace_back(third);
    reels.emplace_back(fourth);
    reels.emplace_back(fifth);

    winLines = lines;

    max_generated_value = value;

    divider_1 = max_generated_value / reels[0].size();
    divider_2 = max_generated_value / reels[0].size() / reels[1].size();
    divider_3 = max_generated_value / reels[0].size() / reels[1].size() / reels[2].size();
    divider_4 = max_generated_value / reels[0].size() / reels[1].size() / reels[2].size() / reels[3].size();
    divider_5 = max_generated_value / reels[0].size() / reels[1].size() / reels[2].size() / reels[3].size() / reels[4].size();

    // Инициализация векторов символов  
    std::vector<Symbols> combination1 = {Symbols::CHERRY, Symbols::CHERRY};
    std::vector<Symbols> combination2 = {Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY};
    std::vector<Symbols> combination3 = {Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY};
    std::vector<Symbols> combination4 = {Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY, Symbols::CHERRY};
    std::vector<Symbols> combination5 = {Symbols::LEMON, Symbols::LEMON, Symbols::LEMON};
    std::vector<Symbols> combination6 = {Symbols::LEMON, Symbols::LEMON, Symbols::LEMON, Symbols::LEMON};
    std::vector<Symbols> combination7 = {Symbols::LEMON, Symbols::LEMON, Symbols::LEMON, Symbols::LEMON, Symbols::LEMON};
    std::vector<Symbols> combination8 = {Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE};
    std::vector<Symbols> combination9 = {Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE};
    std::vector<Symbols> combination10 = {Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE, Symbols::ORANGE};
    std::vector<Symbols> combination11 = {Symbols::PLUM, Symbols::PLUM, Symbols::PLUM};
    std::vector<Symbols> combination12 = {Symbols::PLUM, Symbols::PLUM, Symbols::PLUM, Symbols::PLUM};
    std::vector<Symbols> combination13 = {Symbols::PLUM, Symbols::PLUM, Symbols::PLUM, Symbols::PLUM, Symbols::PLUM};
    std::vector<Symbols> combination14 = {Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE};
    std::vector<Symbols> combination15 = {Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE};
    std::vector<Symbols> combination16 = {Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE, Symbols::GRAPE};
    std::vector<Symbols> combination17 = {Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON};
    std::vector<Symbols> combination18 = {Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON};
    std::vector<Symbols> combination19 = {Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON, Symbols::WATERMELON};
    std::vector<Symbols> combination20 = {Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN};
    std::vector<Symbols> combination21 = {Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN};
    std::vector<Symbols> combination22 = {Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN, Symbols::SEVEN};
    std::vector<Symbols> combination23 = {Symbols::STAR, Symbols::STAR, Symbols::STAR};
    std::vector<Symbols> combination24 = {Symbols::STAR, Symbols::STAR, Symbols::STAR, Symbols::STAR};
    std::vector<Symbols> combination25 = {Symbols::STAR, Symbols::STAR, Symbols::STAR, Symbols::STAR, Symbols::STAR};

    // Добавление векторов в мапу с соответствующими значениями  
    winCombinations[combination1] = 5;  
    winCombinations[combination2] = 20;  
    winCombinations[combination3] = 50;
    winCombinations[combination4] = 200;  
    winCombinations[combination5] = 20;  
    winCombinations[combination6] = 50;
    winCombinations[combination7] = 200;  
    winCombinations[combination8] = 20;  
    winCombinations[combination9] = 50;
    winCombinations[combination10] = 200;  
    winCombinations[combination11] = 20;  
    winCombinations[combination12] = 50;
    winCombinations[combination13] = 200;  
    winCombinations[combination14] = 50;  
    winCombinations[combination15] = 200;
    winCombinations[combination16] = 500;  
    winCombinations[combination17] = 50;  
    winCombinations[combination18] = 200;
    winCombinations[combination19] = 500;  
    winCombinations[combination20] = 100;  
    winCombinations[combination21] = 1000;
    winCombinations[combination22] = 5000;  
    winCombinations[combination23] = 20;  
    winCombinations[combination24] = 100;  
    winCombinations[combination25] = 500;
}

Symbols Reels::getSymbolNumber(RealNumber numder, unsigned long gnd)
{
    Symbols value;

    switch (numder)
    {
    case RealNumber::ONE:
        value = reels[0][gnd / divider_1];
        break;
    case RealNumber::TWO:
        value = reels[1][(gnd % divider_1) / divider_2];
        break;
    case RealNumber::THREE:
        value = reels[2][((gnd % divider_1) % divider_2) / divider_3];
        break;

    default:
        break;
    }
    return value;
}

GameField Reels::getWinField(unsigned long gnd)
{
    GameField winField;
    std::vector<Symbols> winReelSymbols;
    Symbols value;

    int symbolIndex{0};

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
            symbolIndex = gnd / divider_1;
            break;
        case 1:
            symbolIndex = (gnd % divider_1) / divider_2;
            break;
        case 2:
            symbolIndex = ((gnd % divider_1) % divider_2) / divider_3;
            break;
        case 3:
            symbolIndex = (((gnd % divider_1) % divider_2) % divider_3) / divider_4;
            break;
        case 4:
            symbolIndex = ((((gnd % divider_1) % divider_2) % divider_3) % divider_4) / divider_5;
            break;

        default:
            symbolIndex = 0;
            break;
        }

        for (int a = 0; a < 3; a++)
        {
            if(symbolIndex >= reels[i].size())
            {
                symbolIndex = 0;
            }

            value = reels[i][symbolIndex];
            symbolIndex++;

            winReelSymbols.push_back(value);
        }
        winField.push_back(winReelSymbols);
    }

    return winField;
}

GameResult Reels::getGameResult(unsigned long gnd, int bet, int lines)
{
    GameField gameField = getWinField(gnd);
    Symbols baseLineSymbol;

    // Go througth lines
    for(int i = 0; i <= lines; i++)
    {
        baseLineSymbol = gameField[0][winLines[i][0]];
        // Go througth reels
        for(int a = 0; a <= 5; a++)
        {


        }
    }
}

unsigned long Reels::getWin(Symbols first, Symbols second, Symbols third)
{
    int result_combination = (static_cast<int>(first))*100 + (static_cast<int>(second))*10 + (static_cast<int>(third));

    unsigned long win_summ = 0;
    switch (result_combination)
      {
         case 132:
            win_summ = 2400;
            // summ_win_2400 = summ_win_2400 + win_summ;
            // amount_win_2400++;
            break;
         case 111:
            win_summ = 1199;
            // summ_win_1199 = summ_win_1199 + win_summ;
            // amount_win_1199++;
            break;
        case 333:
            win_summ = 200;
            // summ_win_200 = summ_win_200 + win_summ;
            // amount_win_200++;
            break;
        case 222:
            win_summ = 150;
            // summ_win_150 = summ_win_150 + win_summ;
            // amount_win_150++;
            break;
        case 112:
        case 113:
        case 121:
        case 122:
        case 123:
        case 131:
        case 133:
        case 211:
        case 212:
        case 213:
        case 221:
        case 223:
        case 231:
        case 232:
        case 233:
        case 311:
        case 312:
        case 313:
        case 321:
        case 322:
        case 323:
        case 331:
        case 332:
            win_summ = 80;
            // summ_win_80 = summ_win_80 + win_summ;
            // amount_win_80++;
            break;
        case 456:
            win_summ = 50;
            // summ_win_50 = summ_win_50 + win_summ;
            // amount_win_50++;
            break;
        case 666:
            win_summ = 40;
            // summ_win_40 = summ_win_40 + win_summ;
            // amount_win_40++;
            break;

        case 136:
        case 152:
        case 156:
        case 432:
        case 436:
        case 452:
            win_summ = 20;
            // summ_win_20 = summ_win_20 + win_summ;
            // amount_win_20++;
            break;
        case 555:
            win_summ = 25;
            // summ_win_25 = summ_win_25 + win_summ;
            // amount_win_25++;
            break;
        case 444:
            win_summ = 10;
            // summ_win_10 = summ_win_10 + win_summ;
            // amount_win_10++;
            break;
        case 445:
        case 446:
        case 454:
        case 455:
        case 464:
        case 465:
        case 466:
        case 544:
        case 545:
        case 546:
        case 554:
        case 556:
        case 564:
        case 565:
        case 566:
        case 644:
        case 645:
        case 646:
        case 654:
        case 655:
        case 656:
        case 664:
        case 665:
            win_summ = 5;
            // summ_win_5 = summ_win_5 + win_summ;
            // amount_win_5++;
            break;
        case 114:
        case 141:
        case 144:
        case 411:
        case 414:
        case 441:
            win_summ = 2;
            // summ_win_2_3 = summ_win_2_3 + win_summ;
            // amount_win_2_3++;
            break;
        case 335:
        case 353:
        case 355:
        case 533:
        case 535:
        case 553:
            win_summ = 2;
            // summ_win_2_2 = summ_win_2_2 + win_summ;
            // amount_win_2_2++;
            break;
        case 226:
        case 262:
        case 266:
        case 622:
        case 626:
        case 662:
            win_summ = 2;
            // summ_win_2_1 = summ_win_2_1 + win_summ;
            // amount_win_2_1++;
            break;
        case 777:
            win_summ = 1;
            // summ_win_1 = summ_win_1 + win_summ;
            // amount_win_1++;
            break;

         default:
            win_summ = 0;
      }
    return win_summ;
}

// std::vector<Symbols> first{Symbols::BLANK, Symbols::RED_SEVEN, Symbols::RED_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN,
//                            Symbols::WHITE_SEVEN, Symbols::WHITE_SEVEN, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::WHITE_BAR,
//                            Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::BLUE_BAR,
//                            Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, 
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK};
// std::vector<Symbols> second{Symbols::BLANK, Symbols::RED_SEVEN, Symbols::RED_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN,
//                            Symbols::WHITE_SEVEN, Symbols::WHITE_SEVEN, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR,
//                            Symbols::RED_BAR, Symbols::RED_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::BLUE_BAR,
//                            Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, 
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK};
// std::vector<Symbols> third{Symbols::BLANK, Symbols::RED_SEVEN, Symbols::RED_SEVEN, Symbols::BLUE_SEVEN, Symbols::BLUE_SEVEN, Symbols::WHITE_SEVEN, Symbols::WHITE_SEVEN,
//                            Symbols::WHITE_SEVEN, Symbols::WHITE_SEVEN, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR, Symbols::RED_BAR,
//                            Symbols::RED_BAR, Symbols::RED_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::WHITE_BAR,
//                            Symbols::WHITE_BAR, Symbols::WHITE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLUE_BAR, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, Symbols::BLANK, 
//                            Symbols::BLANK, Symbols::BLANK, Symbols::BLANK};

// std::vector<Symbols> first{Symbols::BLANK, Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN, Symbols::BLANK,Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK,
//                            Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK,
//                            Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK,
//                            Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK,
//                            Symbols::BLANK, Symbols::BLANK};
// std::vector<Symbols> second{Symbols::BLANK, Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, 
//                            Symbols::WHITE_SEVEN, Symbols::BLANK,  Symbols::WHITE_SEVEN, Symbols::BLANK,  Symbols::RED_BAR, Symbols::BLANK,  Symbols::RED_BAR, Symbols::BLANK,  Symbols::RED_BAR, Symbols::BLANK,  Symbols::RED_BAR, Symbols::BLANK,  Symbols::RED_BAR, Symbols::BLANK, 
//                            Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, 
//                            Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK};
// std::vector<Symbols> third{Symbols::BLANK, Symbols::RED_SEVEN, Symbols::BLANK, Symbols::RED_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::BLUE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK,
//                            Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::WHITE_SEVEN, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, 
//                            Symbols::RED_BAR, Symbols::BLANK, Symbols::RED_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, 
//                            Symbols::WHITE_BAR, Symbols::BLANK, Symbols::WHITE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLUE_BAR, Symbols::BLANK, Symbols::BLANK,
//                            Symbols::BLANK};
