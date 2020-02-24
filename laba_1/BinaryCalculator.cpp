#include "BinaryCalculator.h"

BinaryCalculator::BinaryCalculator() {

}

BinaryCalculator::BinaryCalculator(int inputFirstNumber, int inputSecondNumber, int pairNumber) {
    this->inputFirstNumber = inputFirstNumber;                  //делимое в десятичной форме
    this->inputSecondNumber = inputSecondNumber;                //делитель в десятичной форме
    this->firstBinaryNumber = _10_to_2_(inputFirstNumber);      //делимое в двоичной форме
    this->secondBinaryNumber = _10_to_2_(inputSecondNumber);    //делитель в двоичной форме
    this->secondBinaryNumberAddCode = (
            this->secondBinaryNumber);              //делитель в двоичной дополнительном коде
    this->pairNumber = pairNumber;                              //номер пары
    this->div = std::vector<int>(4, 0);                 //частное
    this->summ = std::vector<int>(5, 0);                //остаток
}

std::vector<int> BinaryCalculator::_10_to_2_(int x) {
    int i;
    int mod;
    std::vector<int> result;
    long double_ = 0;

    for (i = 0; x > 0; i++) {

        mod = x % 2;
        x = (x - mod) / 2;
        result.push_back(mod);
    }

    for (int i = 0; i < result.size() - 4; ++i)
        result.push_back(0);
    return result;
}

std::vector<int> BinaryCalculator::binaryAddition(std::vector<int> num_1, std::vector<int> num_2) {
    std::vector<int> sum(SIZE, 0);
    int carry = 0;
    for (int i = 0; i < SIZE; i++) {
        sum[i] = ((num_1[i] ^ num_2[i]) ^ carry); // c is carry
        carry = ((num_1[i] & num_2[i]) | (num_1[i] & carry)) | (num_2[i] & carry);
    }

    if (carry == 1)
        sum.push_back(1);

    return sum;
}

std::vector<int> BinaryCalculator::_2_to_inverted_code(std::vector<int> binaryNumber) {
    for (int i = 0; i < binaryNumber.size() - 1; ++i) {
        binaryNumber[i] = !binaryNumber[i];
    }
    return binaryNumber;
}

std::vector<int> BinaryCalculator::_2_to_additional_code(std::vector<int> binaryNumber) {
    if(binaryNumber[SIZE] == 0)
        return binaryNumber;
    return binaryAddition(_2_to_inverted_code(binaryNumber), ONE);
}
