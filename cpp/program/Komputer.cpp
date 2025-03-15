#include <iostream>
#include <string>
#include <vector>
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Gpu.cpp"
#include "Printer.cpp"
#include "Keyboard.cpp"

class Komputer
{
private:
    string nama;
    Cpu cpu;
    vector<Ram> ramList;
    Harddrive harddrive;
    Gpu gpu;
    Printer printer;
    Keyboard keyboard;

public:
    Komputer(){}

    Komputer(string nama, Cpu cpu, vector<Ram> ramList, Harddrive harddrive, Gpu gpu, Printer printer, Keyboard keyboard){
        this->nama = nama;
        this->cpu = cpu;
        this->ramList = ramList;
        this->harddrive = harddrive;
        this->gpu = gpu;
        this->printer = printer;
        this->keyboard = keyboard;
    }

    void setNama(string nama){
        this->nama = nama;
    }
    void setCpu(Cpu cpu){
        this->cpu = cpu;
    }
    void setRam(vector<Ram> ramList){
        this->ramList = ramList;
    }    
    void setHarddrive(Harddrive harddrive){
        this->harddrive = harddrive;
    }
    void addRam(Ram ram){
        this->ramList.push_back(ram);
    }
    void setGpu(Gpu gpu){
        this->gpu = gpu;
    }
    void setPrinter(Printer printer){
        this->printer = printer;
    }
    void setKeyboard(Keyboard keyboard){
        this->keyboard = keyboard;
    }

    string getNama(){
        return this->nama;
    }
    Cpu getCpu(){
        return this->cpu;
    }
    vector<Ram> getRamList(){
        return this->ramList;
    }
    Harddrive getHarddrive(){
        return this->harddrive;
    }
    Gpu getGpu(){
        return this->gpu;
    }
    Printer getPrinter(){
        return this->printer;
    }
    Keyboard getKeyboard(){
        return this->keyboard;
    }

    ~Komputer(){}
};
