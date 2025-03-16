class GraphicProcessingUnit:
    def __init__(self, memory_gb=0, clock_speed_ghz=0.0):
        self.memory_gb = memory_gb
        self.clock_speed_ghz = clock_speed_ghz

    def set_memory_gb(self, memory_gb):
        self.memory_gb = memory_gb

    def set_clock_speed_ghz(self, clock_speed_ghz):
        self.clock_speed_ghz = clock_speed_ghz

    def get_memory_gb(self):
        return self.memory_gb

    def get_clock_speed_ghz(self):
        return self.clock_speed_ghz