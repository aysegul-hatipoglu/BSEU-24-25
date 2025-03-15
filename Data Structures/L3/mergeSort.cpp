#include <iostream>

using namespace std;





void mergeSort(int dizi[], int solDizi[], int sagDizi[], int solBoyut, int sagBoyut) {
    int i = 0, j = 0, k = 0;

    // Küçük olanı ana diziye ekle
    while (i < solBoyut && j < sagBoyut) {
        if (solDizi[i] < sagDizi[j]) {
            dizi[k] = solDizi[i];
            i++;
        } else {
            dizi[k] = sagDizi[j];
            j++;
        }
        k++;
    }

    // Kalan elemanları ekle
    while (i < solBoyut) {
        dizi[k] = solDizi[i];
        i++;
        k++;
    }

    while (j < sagBoyut) {
        dizi[k] = sagDizi[j];
        j++;
        k++;
    }

    //cout << "Birleştirilmiş hali... ";
    //for (int x = 0; x < solBoyut + sagBoyut; x++)
    //    cout << dizi[x] << " ";
    //cout << endl;
}
void merge(int dizi[], int boyut) {
    if (boyut > 1) {
        int orta = boyut / 2;

        // Geçici alt dizileri oluştur
        int solDizi[orta], sagDizi[boyut - orta];

        // Diziyi ikiye böl
        for (int i = 0; i < orta; i++)
            solDizi[i] = dizi[i];
        for (int i = orta; i < boyut; i++)
            sagDizi[i - orta] = dizi[i];

        // Recursive olarak sol ve sağ dizileri sırala
        merge(solDizi, orta);
        merge(sagDizi, boyut - orta);

        // Birleştirme işlemi
        mergeSort(dizi, solDizi, sagDizi, orta, boyut - orta);
    }
}

int main() {
    int dizi[] = {22, 46, 1, 9, 38, 20, 16, 21};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    merge(dizi, boyut);

    cout << "Sıralı dizi: ";
    for (int i = 0; i < boyut; i++)
        cout << dizi[i] << " ";
    cout << endl;

    return 0;
}