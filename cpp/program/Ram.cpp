#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen{
private:
    int kapasitorGB;
    string ddr;
public:
    Ram(){}

    Ram(int kapasitorGB, string ddr, string merk, string nama) : Komponen(merk, nama){
        this->kapasitorGB = kapasitorGB;
        this->ddr = ddr;
    }

    void setkapasitorGB(int kapasitorGB){
        this->kapasitorGB = kapasitorGB;
    }
    void setddr(string ddr){
        this->ddr = ddr;
    }

    int getkapasitorGB(){
        return this->kapasitorGB;
    }
    string getddr(){
        return this->ddr;
    }

    ~Ram(){}
};