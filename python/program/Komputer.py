from Cpu import Cpu
from Gpu import Gpu
from Harddrive import Harddrive
from Keyboard import Keyboard
from Printer import Printer

class Komputer:
    def __init__(self, nama='', cpu=None, ram_list=None, harddrive=None, gpu=None, printer=None, keyboard=None):
        self.nama = nama
        self.cpu = cpu if cpu else Cpu() # jika param cpu ada isinya, masukan, jika tidak jalankan constructor kosong cpu
        self.ram_list = ram_list if ram_list is not None else [] # jika parameter ram ada isinya, masukan, jika tidak masukan list kosong
        self.harddrive = harddrive if harddrive else Harddrive() # jika harddrive ada isinya maka masukkan, jika tidak jalankan constructor kosong
        self.gpu = gpu if gpu else Gpu()
        self.printer = printer if printer else Printer()
        self.keyboard = keyboard if keyboard else Keyboard()

    def set_nama(self, nama):
        self.nama = nama

    def set_cpu(self, cpu):
        self.cpu = cpu

    def set_ram_list(self, ram_list):
        self.ram_list = ram_list

    def add_ram(self, ram):
        self.ram_list.append(ram)

    def set_harddrive(self, harddrive):
        self.harddrive = harddrive

    def set_gpu(self, gpu):
        self.gpu = gpu

    def set_printer(self, printer):
        self.printer = printer

    def set_keyboard(self, keyboard):
        self.keyboard = keyboard

    def get_nama(self):
        return self.nama

    def get_cpu(self):
        return self.cpu

    def get_ram_list(self):
        return self.ram_list

    def get_harddrive(self):
        return self.harddrive

    def get_gpu(self):
        return self.gpu

    def get_printer(self):
        return self.printer

    def get_keyboard(self):
        return self.keyboard