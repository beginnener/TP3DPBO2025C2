#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Cpu : public Komponen{
private:
    int jumlahCore;
    int kecepatanGHz;
public:
    Cpu(){}

    Cpu(int jumlahCore, float kecepatanGHz, string merk, string nama) : Komponen(merk, nama){
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
    }

    void setjumlahCore(int jumlahCore){
        this->jumlahCore = jumlahCore;
    }
    void setkecepatanGHz(float kecepatanGHz){
        this->kecepatanGHz = kecepatanGHz;
    }

    int getjumlahCore(){
        return this->jumlahCore;
    }
    float getkecepatanGHz(){
        return this->kecepatanGHz;
    }

    ~Cpu(){}

};