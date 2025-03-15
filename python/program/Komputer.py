import Komponen
import Cpu
import Ram
import Harddrive

class Komputer:
    def __init__(self, nama='', cpu=None, ram_list=None, harddrive=None):
        self.nama = nama
        self.cpu = cpu if cpu else Cpu() # jika param cpu ada isinya, masukan, jika tidak jalankan constructor kosong cpu
        self.ram_list = ram_list if ram_list else [] # jika parameter ram ada isinya, masukan, jika tidak masukan list kosong
        self.harddrive = harddrive if harddrive else Harddrive() # jika harddrive ada isinya maka masukkan, jika tidak jalankan constructor kosong
    
    def set_nama(self, nama):
        self.nama = nama
    
    def set_cpu(self, cpu):
        self.cpu = cpu
    
    def set_ram_list(self, ram_list):
        self.ram_list = ram_list
    
    def set_harddrive(self, harddrive):
        self.harddrive = harddrive
    
    def add_ram(self, ram):
        self.ram_list.append(ram)
    
    def get_nama(self):
        return self.nama
    
    def get_cpu(self):
        return self.cpu
    
    def get_ram_list(self):
        return self.ram_list
    
    def get_harddrive(self):
        return self.harddrive
