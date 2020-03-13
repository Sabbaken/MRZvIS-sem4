#include <iostream>
#include "Pipeline.h"
#include "BinaryCalculator.h"

using namespace std;

int main(int argc,char * argv[]) {


    int firstVector = 1, secondVector = 2, processingTime = 1;

    //ToDo Сделать ввод значений
    Pipeline pipeline1(firstVector, secondVector, processingTime);
    return 0;
}
