#include "../include/generator/LinearCongruentialGenerator.h"
#include "../include/reels/reels.h"
#include "../include/gamer/gamer.h"

#include <iostream> 
#include <ctime>
#include <set>
#include <vector>
#include <random>

int main()
{
    // Создаем генератор случайных чисел  
    std::random_device rd; // Получаем случайное значение из устройства  
    std::mt19937 gen(rd()); // Инициализируем генератор Mersenne Twister с помощью случайного значения  

    // Определяем диапазон  
    int min = 1; // Минимальное значение  
    int max = 20; // Максимальное значение  

    // Создаем распределение для целых чисел в заданном диапазоне  
    std::uniform_int_distribution<> dis(min, max);   

    // std::cout << "Случайное число: " << random_number << std::endl;

    // Параметры генератора
    unsigned long a = 48271;        // Множитель
    unsigned long c = 0;            // Приращение
    unsigned long m = 2147483647;
    unsigned long seed = 100000;    // Начальное значение

    unsigned long total_games_amount = 100000;
    int gamers_amount = 1000;
    int every_gamer_games_amount = 10000;

    // Создание генератора
    LinearCongruentialGenerator lcg(a, c, m, seed);
    Reels reels(m);

    Gamer casino;

    // Prepair gamers
    std::vector<Gamer> gamers;
    int gamer_index{0};
    for (int i = 0; i < gamers_amount; i++)
    {
        gamers.push_back(Gamer());
    }

    // Play games
    for (unsigned long i = 0; i < gamers_amount * every_gamer_games_amount; i++)
    {

        auto game_rnd_number = lcg.next();

        unsigned long win_multiplier = reels.getWin(reels.getSymbolNumber(RealNumber::ONE, game_rnd_number),
                                              reels.getSymbolNumber(RealNumber::TWO, game_rnd_number),
                                              reels.getSymbolNumber(RealNumber::THREE, game_rnd_number));

        // Генерируем случайное число  
        int random_bet = dis(gen); 

        gamers[gamer_index].playGame(random_bet, win_multiplier);
        casino.playGame(random_bet, win_multiplier);

        gamer_index++;
        if(gamer_index >=gamers_amount) {gamer_index = 0;}
    }

    // Print results
    for (int i = 0; i < gamers_amount; i++)
    {
        gamers[i].printBooking();
    }

    std::cout << std::endl << "--------------- Casino results:" << std::endl;
    casino.printBooking();

    return 0;
}
