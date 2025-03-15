#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Harddrive : public Komponen{
private:
    int kapasitasGB;
    string tipeDrive;
public:
    Harddrive(){}

    Harddrive(int kapasitasGB, string tipeDrive, string merk, string nama) : Komponen(merk, nama){
        this->kapasitasGB = kapasitasGB;
        this->tipeDrive = tipeDrive;
    }

    void setkapasitasGB(int kapasitasGB){
        this->kapasitasGB = kapasitasGB;
    }
    void settipeDrive(int tipeDrive){
        this->tipeDrive = tipeDrive;
    }

    int getkapasitasGB(){
        return this->kapasitasGB;
    }
    string gettipeDrive(){
        return this->tipeDrive;
    }
};