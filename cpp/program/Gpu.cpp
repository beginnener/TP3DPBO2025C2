#pragma once
#include <iostream>
#include <string>
#include "GraphicProcessingUnit.cpp"
#include "Komponen.cpp"

using namespace std;

class Gpu : public GraphicProcessingUnit, public Komponen{
private:
    int coreCount;
    string vendor;
public:
    Gpu(){}

    Gpu(int coreCount, int vendor, int memoryGB, float clockSpeedGHz, string merk, string nama) : GraphicProcessingUnit(memoryGB, clockSpeedGHz), Komponen(merk, nama){
        this->coreCount = coreCount;
        this->vendor = vendor;
    }

    void setcoreCount(int coreCount){
        this->coreCount = coreCount;
    }
    void setvendor(int vendor){
        this->vendor = vendor;
    }

    int getcoreCount(){
        return this->coreCount;
    }
    string getvendor(){
        return this->vendor;
    }

    ~Gpu(){}
};
