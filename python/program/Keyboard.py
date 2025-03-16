from Peripheral import Peripheral

class Keyboard(Peripheral):
    def __init__(self, jenis_keyboard='', layout='', merk='', jenis=''):
        super().__init__(merk, jenis)
        self.jenis_keyboard = jenis_keyboard
        self.layout = layout

    def set_jenis_keyboard(self, jenis_keyboard):
        self.jenis_keyboard = jenis_keyboard

    def set_layout(self, layout):
        self.layout = layout

    def get_jenis_keyboard(self):
        return self.jenis_keyboard

    def get_layout(self):
        return self.layout