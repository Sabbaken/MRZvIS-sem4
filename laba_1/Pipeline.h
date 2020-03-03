#pragma once

#include <string>

class Pipeline {
private:
    std::string firstVector, secondVector;
    int processingTime;

public:
    Pipeline(int firstVector, int secondVector, int processingTime);
    void run();

};