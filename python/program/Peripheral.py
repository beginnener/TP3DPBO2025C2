class Peripheral:
    def __init__(self, merk='', jenis=''):
        self.merk = merk
        self.jenis = jenis

    def set_merk(self, merk):
        self.merk = merk

    def set_jenis(self, jenis):
        self.jenis = jenis

    def get_merk(self):
        return self.merk

    def get_jenis(self):
        return self.jenis