#include <iostream>
#include <string>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Komputer.cpp"
#include "Peripheral.cpp"
#include "Keyboard.cpp"
#include "Printer.cpp"
#include "GraphicProcessingUnit.cpp"
#include "Gpu.cpp"

using namespace std;

void printdata(Komputer& listkomputer){
    cout << "Informasi Komputer:" << endl;
    cout << "+-----------------------------------------------------------------------------------------+" << endl;
    cout << "Nama       : " << listkomputer.getNama() << endl;
    cout << "Cpu        : " << listkomputer.getCpu().getMerk() << ' ' << listkomputer.getCpu().getNama() << " (" << listkomputer.getCpu().getjumlahCore() << " Core) " << "~" << listkomputer.getCpu().getkecepatanGHz() << "GHz" << endl;
    cout << "Ram        : ";
    int i = 0;
    for (Ram& ram : listkomputer.getRamList())
    {
        if (i > 0) cout << "             ";
        cout << '-' << ram.getMerk() << ' ' << ram.getNama() << " (" << ram.getkapasitasGB() << " GB) " << ram.getddr() << endl;
        i++;
    }
    cout << "Harddrive  : " << listkomputer.getHarddrive().gettipeDrive() << ' ' << listkomputer.getHarddrive().getMerk() << ' ' << listkomputer.getHarddrive().getNama() << " (" << listkomputer.getHarddrive().getkapasitasGB() << " GB) " << endl;
    cout << "GPU        : " << listkomputer.getGpu().getNama() << ' ' << listkomputer.getGpu().getMerk() << ' ' << listkomputer.getGpu().getcoreCount() << " (" << listkomputer.getGpu().getmemoryGB() << " GB) " << endl;
    cout << "Printer    : " << listkomputer.getPrinter().getjenisPrinter() << ' ' << listkomputer.getPrinter().getmerk() << ' ' << listkomputer.getPrinter().getkecepatanCetak() << " ppm" << endl;
    cout << "Keyboard   : " << listkomputer.getKeyboard().getjenisKeyboard() << ' ' << listkomputer.getKeyboard().getmerk() << ' ' << endl;
    cout << "+========================================================================================+" << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie();
    
    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    Gpu gpu1(10496, 1, 24, 1.7, "NVIDIA", "RTX 4090");
    Printer printer1("Laser", 30, "Canon", "Wireless");
    Keyboard keyboard1("Mechanical", "QWERTY", "Logitech", "Wireless");
    Komputer komputer("PC Abdul", cpu, {ram1, Ram(8, "DDR4", "Corsair", "Vengeance")}, harddrive, gpu1, printer1, keyboard1);
    komputer.addRam(Ram(16, "DDR5", "Kingston", "FURY"));

    // Data Komputer 2
    Cpu cpu2(6, 3.0, "AMD", "Ryzen 5");
    Ram ram2(16, "DDR4", "Kingston", "HyperX");
    Harddrive harddrive2(2048, "HDD", "Seagate", "Barracuda");
    Gpu gpu2(5120, 2, 16, 1.5, "AMD", "Radeon RX 6700");
    Printer printer2("Inkjet", 25, "Epson", "Wired");
    Keyboard keyboard2("Membrane", "AZERTY", "Razer", "Wired");
    Komputer komputer2("PC Budi", cpu2, {ram2, Ram(8, "DDR4", "Kingston", "HyperX")}, harddrive2, gpu2, printer2, keyboard2);
    
    // Data Komputer 3
    Cpu cpu3(4, 2.8, "Intel", "Core i5");
    Ram ram3(8, "DDR3", "Crucial", "Ballistix");
    Harddrive harddrive3(512, "SSD", "WD", "Blue");
    Gpu gpu3(256, 3, 4, 1.2, "Intel", "UHD Graphics");
    Printer printer3("Laser", 20, "Brother", "Wired");
    Keyboard keyboard3("Chiclet", "QWERTY", "Microsoft", "Wireless");
    Komputer komputer3("PC Charlie", cpu3, {ram3}, harddrive3, gpu3, printer3, keyboard3);
    
    // Data Komputer 4
    Cpu cpu4(12, 3.8, "AMD", "Ryzen 9");
    Ram ram4(32, "DDR5", "G.Skill", "TridentZ");
    Harddrive harddrive4(4096, "SSD", "Samsung", "Pro");
    Gpu gpu4(8704, 1, 20, 1.8, "NVIDIA", "RTX 3080");
    Printer printer4("Inkjet", 15, "HP", "Wireless");
    Keyboard keyboard4("Mechanical", "QWERTY", "SteelSeries", "Wired");
    Komputer komputer4("PC Dedi", cpu4, {ram4, Ram(16, "DDR4", "G.Skill", "Ripjaws")}, harddrive4, gpu4, printer4, keyboard4);
    
    cout << "+========================================================================================+" << endl;
    printdata(komputer);
    printdata(komputer2);
    printdata(komputer3);
    printdata(komputer4);
    return 0;
}
