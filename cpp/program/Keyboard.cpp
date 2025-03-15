#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

class Keyboard : public Peripheral{
private:
    string jenisKeyboard;
    string layout;
public:
    Keyboard(){};
    
    Keyboard(string jenisKeyboard, string layout, string merk, string jenis) : Peripheral(merk, jenis){
        this->jenisKeyboard = jenisKeyboard;
        this->layout = layout;
    }
    
    void setjenisKeyboard(string jenisKeyboard){
        this->jenisKeyboard = jenisKeyboard;
    }
    void setlayout(string layout){
        this->layout = layout;
    }

    string getjenisKeyboard(){
        return this->jenisKeyboard;
    }
    string getlayout(){
        return this->layout;
    }
    
    ~Keyboard(){};
};
