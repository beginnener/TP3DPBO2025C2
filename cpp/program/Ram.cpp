#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen{
private:
    int kapasitasGB;
    string ddr;
public:
    Ram(){}

    Ram(int kapasitasGB, string ddr, string merk, string nama) : Komponen(merk, nama){
        this->kapasitasGB = kapasitasGB;
        this->ddr = ddr;
    }

    void setkapasitasGB(int kapasitasGB){
        this->kapasitasGB = kapasitasGB;
    }
    void setddr(string ddr){
        this->ddr = ddr;
    }

    int getkapasitasGB(){
        return this->kapasitasGB;
    }
    string getddr(){
        return this->ddr;
    }

    ~Ram(){}
};