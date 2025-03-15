#pragma once
#include <iostream>
#include <string>

using namespace std;

class Peripheral{
protected:
    string merk;
    string jenis;
public:
    Peripheral(){}

    Peripheral(string merk, string jenis){
        this->merk = merk;
        this->jenis = jenis;
    }

    void setmerk(string merk){
        this->merk = merk;
    }
    void setjenis(string jenis){
        this->jenis = jenis;
    }

    string getmerk(){
        return this->merk;
    }
    string getjenis(){
        return this->jenis;
    }

    ~Peripheral(){}
};
