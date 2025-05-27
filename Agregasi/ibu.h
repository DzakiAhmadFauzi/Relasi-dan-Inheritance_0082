#ifndef Ibu_H
#define Ibu_H

class ibu {
    public:
        string name;
        vector<anak*> daftar_anak;

        ibu(string pNama): nama(pNama) {
            cout << "Ibu \"" << nama << "\" ada\n";
        }

        ~ibu() {
            cout << "Ibu \"" << nama << "\" tidak ada\n";
        }
        void tambahAnak(anak*);
        void cetakAnak();
};