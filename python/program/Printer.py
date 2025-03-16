from Peripheral import Peripheral

class Printer(Peripheral):
    def __init__(self, jenis_printer='', kecepatan_cetak=0, merk='', jenis=''):
        super().__init__(merk, jenis)
        self.jenis_printer = jenis_printer
        self.kecepatan_cetak = kecepatan_cetak

    def set_jenis_printer(self, jenis_printer):
        self.jenis_printer = jenis_printer

    def set_kecepatan_cetak(self, kecepatan_cetak):
        self.kecepatan_cetak = kecepatan_cetak

    def get_jenis_printer(self):
        return self.jenis_printer

    def get_kecepatan_cetak(self):
        return self.kecepatan_cetak
