//
// Created by arslan on 16/11/19.
//
//The class Datapoints allows to access samples of n-points and n-variables
//stored in a Armadillo matrix.


#ifndef PROGRAMMING_BY_DEMONSTRATION_DATAPOINTS_H
#define PROGRAMMING_BY_DEMONSTRATION_DATAPOINTS_H


#include "armadillo"
#include <fstream>
#include <vector>

using namespace arma;

class Datapoints
{
private:
    uint nbVars;
    uint nbPoints;
    std::vector<std::string> vars_names;
    mat data;

public:

    Datapoints(){};
    Datapoints(uint _nbVar , uint _nbPoints);

    mat getDataPoints();
    uint getNumPoints();
    uint getNumVars();
    std::vector <std::string> getVarNames();

    void setData(mat _data);
    void loadFromFile(std::string path, bool is_transpose = false);
    void saveInFile(std::string path);
};



#endif //PROGRAMMING_BY_DEMONSTRATION_DATAPOINTS_H



