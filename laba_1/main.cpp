#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "Pipeline.h"
#include "BinaryCalculator.h"

using namespace std;

int main(int argc,char * argv[]) {
    testing::InitGoogleTest(&argc,argv);
    if(RUN_ALL_TESTS())exit(0);

    int firstVector = 1, secondVector = 2, processingTime = 1;

    //ToDo Сделать ввод значений
    Pipeline pipeline1(firstVector, secondVector, processingTime);
    return 0;
}
