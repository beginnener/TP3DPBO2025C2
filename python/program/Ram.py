import Komponen

class Ram(Komponen):
    def __init__(self, kapasitor_gb=0, ddr='', merk='', nama=''):
        super().__init__(merk, nama)
        self.kapasitor_gb = kapasitor_gb
        self.ddr = ddr
    
    def set_kapasitor_gb(self, kapasitor_gb):
        self.kapasitor_gb = kapasitor_gb
    
    def set_ddr(self, ddr):
        self.ddr = ddr
    
    def get_kapasitor_gb(self):
        return self.kapasitor_gb
    
    def get_ddr(self):
        return self.ddr