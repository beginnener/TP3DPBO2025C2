#pragma once
#include <iostream>
#include <string>

using namespace std;

class GraphicProcessingUnit{
protected:
    int memoryGB;
    float clockSpeedGHz;
public:
    GraphicProcessingUnit(){}
    GraphicProcessingUnit(int memoryGB, float clockSpeedGHz){
        this->memoryGB = memoryGB;
        this->clockSpeedGHz = clockSpeedGHz;
    }

    void setmemoryGB(int memoryGB){
        this->memoryGB = memoryGB;
    }
    void setclockSpeedGHz(int clockSpeedGHz){
        this->clockSpeedGHz = clockSpeedGHz;
    }

    int getmemoryGB(){
        return this->memoryGB;
    }
    float getclockSpeedGHz(){
        return this->clockSpeedGHz;
    }

    ~GraphicProcessingUnit(){}
};
