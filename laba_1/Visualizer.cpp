#include "vector"
#include "string"
#include <iostream>
#include "Visualizer.h"

void Visualizer::addResultVector(std::vector<std::string> output) {
    result.push_back(output);
}

void Visualizer::showResult() {
    int k = -1;
    while (result.size() != 0) {
        k++;
        for (int i = 0; i < result.size(); ++i) {
            if (result[i].size() == 0) {
                result.erase(result.begin() + i);
            }

            std::cout << result[i][k];
            std::cout << "\n\n";
        }
    }
}
