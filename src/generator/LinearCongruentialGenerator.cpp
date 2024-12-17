#include "../../include/generator/LinearCongruentialGenerator.h"
#include <iostream>
#include <chrono>

// Конструктор
LinearCongruentialGenerator::LinearCongruentialGenerator(unsigned long a, unsigned long c, unsigned long m, unsigned long seed)
    : a(a), c(c), m(m), seed(seed) {}

// Генерация следующего псевдослучайного числа
unsigned long LinearCongruentialGenerator::next()
{
    seed = (a * seed + c) % m;

    // unsigned long realRandom = getRealRandom();

    // Смешивание псевдослучайного и реального случайного значений
    // return (seed ^ realRandom) % m; // Используем XOR для смешивания

    return seed;
}

// Генерация массива псевдослучайных чисел
void LinearCongruentialGenerator::generateRandomNumbers(int count)
{
    for (int i = 0; i < count; ++i)
    {
        std::cout << next() << " ";
    }
    std::cout << std::endl;
}

unsigned long LinearCongruentialGenerator::getRealRandom() {
        // Получаем текущее время в миллисекундах
        auto now = std::chrono::high_resolution_clock::now();
        auto duration = now.time_since_epoch();
        return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count() % m;
    }
