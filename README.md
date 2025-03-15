_saya Natasha Adinda Cantika dengan NIM 2312120 mengerjakan TP3 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin_

## DIAGRAM
<p align="center">
    <img src="TP3DPBO.drawio.png">
</p>

## Penjelasan Alur
Terdapat 10 kelas objek pada proyek ini:
1. **Komponen**, merupakan superclass/parent dari Gpu, Cpu, Ram, dan Harddrive.
2. **GraphicsProcessUnit**, merupakan superclass/parent dari Gpu.
3. **Peripheral**, merupakan superclass/parent dari Keyboard dan Printer.
4. **GPU**, merupakan child dari GraphicProcessingUnit dan Komponen, kelas ini menerapkan **Multiple Inheritance**.
5. **Ram**, merupakan child dari Komponen.
6. **Cpu**, merupakan child dari Komponen.
7. **Harddrive**, merupakan child dari Komponen.
8. **Keyboard**, merupakan child dari Peripheral.
9. **Printer**, merupakan child dari Peripheral.
10. **Komputer**, merupakan leaf atau kelas yang tidak dapat diturunkan lagi (dalam kasus proyek ini), kelas ini menerapkan **Hybrid Inheritance** dimana atribut komputer diisi secara composite dari kelas yang merupakan turunan dari superclass/parentnya.

OOP bertujuan untuk menciptakan kelas atau kode yang **_reusable_**, maka dari itu kelas GraphicProcessUnit dan GPU dipisah supaya apabila kedepannya ada kelas baru yang memerlukan atribut memoryGB dan clockspeedGHz kelas tersebut cukup melakukan inheritance dari kelas GraphicProcessUnit. Selain itu, hal ini juga dipisah supaya atribut unik yang hanya ada pada GPU tetap terpisah dari atribut lainnya untuk menetapkan karakteristik dari kelas GPU.

Panah dari Gpu, Cpu, Ram, Harddrive, Keyboard, dan Printer menunjukkan **composite** dengan makna yang berbeda beda, 
- Panah Gpu, Printer, dan Keyboard memiliki tanda [1 -> 0..1] ini menunjukan bahwa terdapat 0 sampai maksimal 1 isi dari atribut komputer yg berhubungan dgn kelas-kelas ini;
- Panah Cpu dan Harddrive [1 -> 1..1] menunjukkan bahwa terdapat minimal 1 dan maksimal 1 isi dari atribut komputer yang berhubungan dengan kelas-kelas tsb;
- Panah Ram [1 -> 1..*] menunjukan bahwa terdapat minimal 1 sampai tak hingga/sesuai masukan user isi dari atribut komputer yang berhubungan dengan kelas tsb. 

## Sreenshot output
### CPP
### Python
