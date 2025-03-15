#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

class Printer : public Peripheral{
private:
    string jenisPrinter;
    int kecepatanCetak;
public:
    Printer(){};
    
    Printer(string jenisPrinter, int kecepatanCetak, string merk, string jenis) : Peripheral(merk, jenis){
        this->jenisPrinter = jenisPrinter;
        this->kecepatanCetak = kecepatanCetak;
    }
    
    void setjenisPrinter(string jenisPrinter){
        this->jenisPrinter = jenisPrinter;
    }
    void setkecepatanCetak(int kecepatanCetak){
        this->kecepatanCetak = kecepatanCetak;
    }

    string getjenisPrinter(){
        return this->jenisPrinter;
    }
    int getkecepatanCetak(){
        return this->kecepatanCetak;
    }
    
    ~Printer(){};
};
