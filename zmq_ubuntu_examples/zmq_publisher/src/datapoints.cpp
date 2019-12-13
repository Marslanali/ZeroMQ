//
// Created by arslan on 16/11/19.
//

#include "/home/arslan/CLionProjects/zmq_publisher/include/datapoints.h"

Datapoints::Datapoints(uint _nbVar, uint _nbPoints)
{
    nbVars = _nbVar;
    nbPoints = _nbPoints;
    data = zeros(nbVars, nbPoints);
}


mat Datapoints::getDataPoints()
{
    return data;
}

uint Datapoints::getNumVars()
{
    return nbVars;
}

uint Datapoints::getNumPoints()
{
    return nbPoints;
}

std::vector <std::string> Datapoints::getVarNames()
{

}

void Datapoints::setData(mat _data)
{
    data = _data;
    nbVars = _data.n_rows;
    nbPoints = _data.n_cols;
}

void Datapoints::loadFromFile(std::string path, bool is_transpose)
{
    mat _data;
    _data.load(path, raw_ascii);
    if(is_transpose)
        _data = _data.t();
    setData(_data);
}


void Datapoints::saveInFile(std::string path)
{
    data.save(path, raw_ascii);
}
