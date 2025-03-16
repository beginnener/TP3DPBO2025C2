from Cpu import Cpu
from Gpu import Gpu
from Harddrive import Harddrive
from Keyboard import Keyboard
from Komputer import Komputer
from Printer import Printer
from Ram import Ram

def printdata(komputer):
    print("Informasi Komputer:")
    print("+-----------------------------------------------------------------------------------------+")
    print(f"Nama       : {komputer.nama}")
    print(f"Cpu        : {komputer.cpu.get_merk()} {komputer.cpu.get_nama()} ({komputer.cpu.get_jumlah_core()} Core) ~{komputer.cpu.get_kecepatan_ghz()}GHz")
    print("Ram        :")
    for ram in komputer.ram_list:
        print(f"             - {ram.get_merk()} {ram.get_nama()} ({ram.get_kapasitas_gb()} GB) {ram.get_ddr()}")
    print(f"Harddrive  : {komputer.harddrive.get_tipe_drive()} {komputer.harddrive.get_merk()} {komputer.harddrive.get_nama()} ({komputer.harddrive.get_kapasitas_gb()} GB)")
    print(f"GPU        : {komputer.gpu.get_nama()} {komputer.gpu.get_merk()} {komputer.gpu.get_core_count()} ({komputer.gpu.get_memory_gb()} GB)")
    print(f"Printer    : {komputer.printer.get_jenis_printer()} {komputer.printer.get_merk()} {komputer.printer.get_kecepatan_cetak()} ppm")
    print(f"Keyboard   : {komputer.keyboard.get_jenis_keyboard()} {komputer.keyboard.get_merk()}")
    print("+========================================================================================+")


def main():
    komputer1 = Komputer(
        "PC Abdul",
        Cpu(8, 3.4, "Intel", "Core i7"),
        [Ram(16, "DDR5", "Corsair", "Vengeance"), Ram(8, "DDR4", "Corsair", "Vengeance")],
        Harddrive(1024, "SSD", "Samsung", "Evo"),
        Gpu(10496, 'NVIDIA', 24, 1.7, "NVIDIA", "RTX 4090"),
        Printer("Laser", 30, "Canon", "Wireless"),
        Keyboard("Mechanical", "QWERTY", "Logitech", "Wireless")
    )
    komputer1.add_ram(Ram(16, "DDR5", "Kingston", "FURY"))

    komputer2 = Komputer(
        "PC Budi",
        Cpu(6, 3.0, "AMD", "Ryzen 5"),
        [Ram(16, "DDR4", "Kingston", "HyperX"), Ram(8, "DDR4", "Kingston", "HyperX")],
        Harddrive(2048, "HDD", "Seagate", "Barracuda"),
        Gpu(5120, 'AMD', 16, 1.5, "AMD", "Radeon RX 6700"),
        Printer("Inkjet", 25, "Epson", "Wired"),
        Keyboard("Membrane", "AZERTY", "Razer", "Wired")
    )

    komputer3 = Komputer(
        "PC Charlie",
        Cpu(4, 2.8, "Intel", "Core i5"),
        [Ram(8, "DDR3", "Crucial", "Ballistix")],
        Harddrive(512, "SSD", "WD", "Blue"),
        Gpu(256, 'Intel', 4, 1.2, "Intel", "UHD Graphics"),
        Printer("Laser", 20, "Brother", "Wired"),
        Keyboard("Chiclet", "QWERTY", "Microsoft", "Wireless")
    )

    komputer4 = Komputer(
        "PC Dedi",
        Cpu(12, 3.8, "AMD", "Ryzen 9"),
        [Ram(32, "DDR5", "G.Skill", "TridentZ"), Ram(16, "DDR4", "G.Skill", "Ripjaws")],
        Harddrive(4096, "SSD", "Samsung", "Pro"),
        Gpu(8704, 'NVIDIA', 20, 1.8, "NVIDIA", "RTX 3080"),
        Printer("Inkjet", 15, "HP", "Wireless"),
        Keyboard("Mechanical", "QWERTY", "SteelSeries", "Wired")
    )

    for komputer in [komputer1, komputer2, komputer3, komputer4]:
        printdata(komputer)


if __name__ == "__main__":
    main()