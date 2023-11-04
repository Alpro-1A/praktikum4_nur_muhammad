#include <iostream>

using namespace std;

int main(){
    // Nomor 1
    int batas;
    int sumGenap = 0;
    int sumGanjil = 0;
    int sumPrima = 0;

    do {
        cout << "Masukkan batas bilangan positif: "; cin >> batas;
    } while (batas <= 0);

    cout << "Bilangan Genap anatara 1 dan " << batas << " adalah: "; // bilangan genap
    for (int i = 1; i <= batas; i++){
        if (i % 2 == 0) cout << i << " ";
        if (i % 2 == 0) sumGenap += i;
    } cout << endl;
    cout << "Bilangan Ganjil antara 1 dan " << batas << " adalah: "; // bilangan ganjil
    for (int j = 1; j <= batas; j++){
        if (j % 2 != 0) cout << j << " ";
        if (j % 2 != 0) sumGanjil += j;
    }cout << endl;

    cout << "Bilangan Prima antaara 1 dan " << batas << " adalah: "; // bilangan prima
    for (int k = 2; k <= batas; k++){
        int Bilanganprima = 1;
        for (int l = 2; l * l <= k; l++){
            if (k % l == 0){
                Bilanganprima = 0;
                break;
            }
        }
        if (Bilanganprima == 1){
            cout << k << " ";
            sumPrima += k;
        }
    } cout << endl;
    // penjumlahan
    cout << "Jumlah semua bilangan Genap antara 1 dan " << batas << " adalah: " << sumGenap << endl;
    cout << "Jumlah semua bilangan Ganjil antara 1 dan " << batas << " adalah: " << sumGanjil << endl;
    cout << "Jumlah semua bilangan Prima antara 1 dan " << batas << " adalah: " << sumPrima << endl;
    // faktor
    cout << "Faktor dari jumlah genap diatas adalah: ";
    for (int a = 1; a <= sumGenap; a++){
        if (sumGenap % a == 0){
            cout << a << " ";
        }
    } cout << endl;
    cout << "Faktor dari jumlah ganjil diatas adalah: ";
    for (int b = 1; b <= sumGanjil; b++){
        if (sumGanjil % b == 0){
            cout << b << " ";
        }
    } cout << endl;
    cout << "Faktor dari jumlah prima diatas adalah: ";
    for (int c = 1; c <= sumPrima; c++){
        if (sumPrima % c == 0){
            cout << c << " ";
        }
    }cout << "\n\n";

    // Nomor 2
    int angka;
    cout << "Masukkan jumlah batasan: ";
    cin >> angka;
    for (int i = 1; i <= angka; i++){
        for (int j = 1; j <= angka - i; j++){
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    } cout << "\n\n";

    // Nomor 3
    int n, n1 = 0, n2 = 1, fn = 0;

    cout << "Jumlah deret fibonacci yang dibutuhkan: "; cin >> n;
    for (int i = 1; i <= n; i++){
        if (i == 1){
            cout << n1 << " ";
        }
        if (i == 2){
            cout << n2 << " ";
        }
        fn = n1 + n2;
            n1 = n2;
        n2 = fn;
        cout << fn << " ";
    } cout << endl;
    return 0;
}
