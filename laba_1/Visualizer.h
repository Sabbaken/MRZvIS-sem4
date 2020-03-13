#include "vector"
#include "string"

class Visualizer {
public:
    std::vector<std::vector<std::string>> result;

    Visualizer(){

    }

    void addResultVector(std::vector<std::string>);

    void showResult();
};
