// LinearCongruentialGenerator.h
#ifndef LINEAR_CONGRUENTIAL_GENERATOR_H
#define LINEAR_CONGRUENTIAL_GENERATOR_H

class LinearCongruentialGenerator
{
private:
    unsigned long a;    // Множитель
    unsigned long c;    // Приращение
    unsigned long m;    // Модуль
    unsigned long seed; // Начальное значение

public:
    // Конструктор
    LinearCongruentialGenerator(unsigned long a, unsigned long c, unsigned long m, unsigned long seed);

    // Генерация следующего псевдослучайного числа
    unsigned long next();

    // Генерация массива псевдослучайных чисел
    void generateRandomNumbers(int count);

    unsigned long getRealRandom();
};

#endif // LINEAR_CONGRUENTIAL_GENERATOR_H
