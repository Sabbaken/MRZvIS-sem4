#include "Pipeline.h"
#include "BinaryCalculator.h"
#include "Visualizer.h"
#include <vector>

Pipeline::Pipeline(std::vector<int> firstVector, std::vector<int> secondVector, int processingTime) {
    this->firstVector = firstVector;
    this->secondVector = secondVector;
    this->processingTime = processingTime;
}

void Pipeline::run() {
    Visualizer visualizer;
    for (int i = 0; i < firstVector.size(); ++i) {
        BinaryCalculator calc(firstVector[i], secondVector[i], i, i, processingTime);
        visualizer.addResultVector(calc.compute());
    }

    visualizer.showResult();
}