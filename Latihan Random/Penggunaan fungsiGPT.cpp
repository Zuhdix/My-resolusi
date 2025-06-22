#include <iostream>

// Fungsi untuk menjumlahkan dua angka
int tambah(int a, int b)
{
    return a + b;
}

// Fungsi untuk mengonversi suhu Celcius ke Fahrenheit
double celsiusToFahrenheit(double C)
{
    return C * 9 / 5 + 32;
}

int main()
{
    // Tes fungsi tambah
    std::cout << tambah(2, 7) << '\n';
    std::cout << tambah(9, 3) << '\n';

    // Tes fungsi konversi suhu
    double suhuCelcius{};
    std::cout << "Masukkan suhu dalam Celcius: ";
    std::cin >> suhuCelcius;

    double suhuFahrenheit = celsiusToFahrenheit(suhuCelcius);
    std::cout << "Suhu dalam Fahrenheit: " << suhuFahrenheit << '\n';

    return 0;
}
