//
//  main.cpp
//  postest 1 tes
//
//  Created by kelvin alviansyah on 09/03/25.
//

#include <iostream>
#include <cmath>
using namespace std;

// Fungsi login
bool login() {
    string username, password;
    do {
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;
        
        if (username == "kelvin" && password == "2409106094") {
            return true;
        } else {
            cout << "Login gagal! Silakan coba lagi.\n";
        }
    } while (true);
}

// Fungsi menghitung luas
void hitungLuas() {
    int pilihan;
    double sisi, panjang, lebar, jariJari, alas, tinggi;

    do {
        cout << "\n== HITUNG LUAS ==\n";
        cout << "1. Persegi\n2. Persegi Panjang\n3. Lingkaran\n4. Segitiga\n5. Kembali\nPilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan sisi: ";
                cin >> sisi;
                cout << "Luas Persegi: " << sisi * sisi << endl;
                break;
            case 2:
                cout << "Masukkan panjang dan lebar: ";
                cin >> panjang >> lebar;
                cout << "Luas Persegi Panjang: " << panjang * lebar << endl;
                break;
            case 3:
                cout << "Masukkan jari-jari: ";
                cin >> jariJari;
                cout << "Luas Lingkaran: " << 3.14 * jariJari * jariJari << endl;
                break;
            case 4:
                cout << "Masukkan alas dan tinggi: ";
                cin >> alas >> tinggi;
                cout << "Luas Segitiga: " << 0.5 * alas * tinggi << endl;
                break;
        }
    } while (pilihan != 5);
}

// Fungsi menghitung keliling
void hitungKeliling() {
    int pilihan;
    double sisi, panjang, lebar, jariJari, alas, tinggi;

    do {
        cout << "\n== HITUNG KELILING ==\n";
        cout << "1. Persegi\n2. Persegi Panjang\n3. Lingkaran\n4. Segitiga\n5. Kembali\nPilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan sisi: ";
                cin >> sisi;
                cout << "Keliling Persegi: " << 4 * sisi << endl;
                break;
            case 2:
                cout << "Masukkan panjang dan lebar: ";
                cin >> panjang >> lebar;
                cout << "Keliling Persegi Panjang: " << 2 * (panjang + lebar) << endl;
                break;
            case 3:
                cout << "Masukkan jari-jari: ";
                cin >> jariJari;
                cout << "Keliling Lingkaran: " << 2 * 3.14 * jariJari << endl;
                break;
            case 4:
                cout << "Masukkan tiga sisi segitiga: ";
                double sisi1, sisi2, sisi3;
                cin >> sisi1 >> sisi2 >> sisi3;
                cout << "Keliling Segitiga: " << sisi1 + sisi2 + sisi3 << endl;
                break;
        }
    } while (pilihan != 5);
}

// Fungsi menghitung volume
void hitungVolume() {
    int pilihan;
    double sisi, panjang, lebar, tinggi, jariJari;

    do {
        cout << "\n== HITUNG VOLUME ==\n";
        cout << "1. Kubus\n2. Balok\n3. Bola\n4. Kerucut\n5. Kembali\nPilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan sisi: ";
                cin >> sisi;
                cout << "Volume Kubus: " << sisi * sisi * sisi << endl;
                break;
            case 2:
                cout << "Masukkan panjang, lebar, dan tinggi: ";
                cin >> panjang >> lebar >> tinggi;
                cout << "Volume Balok: " << panjang * lebar * tinggi << endl;
                break;
            case 3:
                cout << "Masukkan jari-jari: ";
                cin >> jariJari;
                cout << "Volume Bola: " << (4.0 / 3.0) * 3.14 * jariJari * jariJari * jariJari << endl;
                break;
            case 4:
                cout << "Masukkan jari-jari dan tinggi: ";
                cin >> jariJari >> tinggi;
                cout << "Volume Kerucut: " << (1.0 / 3.0) * 3.14 * jariJari * jariJari * tinggi << endl;
                break;
        }
    } while (pilihan != 5);
}

// Fungsi utama
int main() {
    login();
    int pilihan;

    do {
        cout << "\n== SISTEM HITUNG BANGUN DATAR DAN BANGUN RUANG ==\n";
        cout << "1. Hitung luas\n2. Hitung keliling\n3. Hitung volume\n4. Logout\nPilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                hitungLuas();
                break;
            case 2:
                hitungKeliling();
                break;
            case 3:
                hitungVolume();
                break;
            case 4:
                cout << "Logout berhasil.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}
