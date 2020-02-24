#include <string>
#include <vector>

class BinaryCalculator {
private:
    std::vector<int> firstBinaryNumber, secondBinaryNumber, secondBinaryNumberAddCode, div, summ;
    int inputFirstNumber, inputSecondNumber, pairNumber;;

    // Константы для двоичных чисел
    int SIZE = 4;
    std::vector<int> ONE = {1, 0, 0, 0};
                    // 0001
public:
    // Конструктор
    BinaryCalculator(int inputFirstNumber, int inputSecondNumber, int pairNumber);
    BinaryCalculator();

public:
    // Реализация алгоритма деления
    void compute();

    // Вот этим должен заниматься visualizer
    // Заполняет таблицу начальными значениями
    void showBinaryNums();

    // Вот этим должен заниматься visualizer
    // Заполняет таблицу результатом вычисления
    void showResult();

    // Сдвиг
    void shift();

    // Обновление частного
    void fixResult();

    // Восстановление остатка
    void restoreRemainder();

    // Получить из числа в двоичном коде число в дополнительном коде
    std::vector<int> _2_to_additional_code(std::vector<int> binaryNumber);

    // Получить из числа в десятичном коде 4-хразрядное число в двоичном коде
    std::vector<int> _10_to_2_(int number);

    // Получить из числа в двоичном коде число в дополнительном коде
    std::vector<int> _2_to_inverted_code(std::vector<int> binaryNumber);

    // Сумма двоичных чисел
    std::vector<int> binaryAddition(std::vector<int> num_1, std::vector<int> num_2);

};
