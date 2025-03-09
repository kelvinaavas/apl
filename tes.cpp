#include <iostream>
#include <map>
#include <string>

using namespace std;

// Fungsi untuk melakukan login
string login(const string& username, const string& password, const map<string, string>& users) {
    // Memeriksa apakah username ada dalam data pengguna
    auto it = users.find(username);
    if (it != users.end()) {
        // Memeriksa apakah password sesuai
        if (it->second == password) {
            return "Login berhasil!";
        } else {
            return "Password salah!";
        }
    } else {
        return "Username tidak ditemukan!";
    }
}

int main() {
    // Data pengguna yang sudah terdaftar
    map<string, string> users = {
        {"user1", "password1"},
        {"user2", "password2"},
        {"user3", "password3"}
    };

    string username_input;
    string password_input;

    // Meminta input dari pengguna
    cout << "Masukkan username: ";
    cin >> username_input;
    cout << "Masukkan password: ";
    cin >> password_input;

    // Memanggil fungsi login dan mencetak hasilnya
    string result = login(username_input, password_input, users);
    cout << result << endl;

    return 0;
}