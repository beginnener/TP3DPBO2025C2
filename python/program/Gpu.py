from GraphicProcessingUnit import GraphicProcessingUnit
from Komponen import Komponen

class Gpu(GraphicProcessingUnit, Komponen):
    def __init__(self, core_count=0, vendor='', memory_gb=0, clock_speed_ghz=0.0, merk='', nama=''):
        GraphicProcessingUnit.__init__(self, memory_gb, clock_speed_ghz)
        Komponen.__init__(self, merk, nama)
        self.core_count = core_count
        self.vendor = vendor

    def set_core_count(self, core_count):
        self.core_count = core_count

    def set_vendor(self, vendor):
        self.vendor = vendor

    def get_core_count(self):
        return self.core_count

    def get_vendor(self):
        return self.vendor
