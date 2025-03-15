#include <iostream>

void quickSort(int dizi[], int sol, int sag) {
    if (sol >= sag) return;

    int pivot = dizi[sag]; 
    int i = -1; // Küçük elemanların yerini takip eden indis

    for (int j = 0; j < sag; j++) { 
        if (dizi[j] < pivot) { // Pivot'tan küçükse yer değiştir
            i++;
            std::swap(dizi[i], dizi[j]);
        }
    }

    std::swap(dizi[i + 1], dizi[sag]); 
    int pivotIndex = i + 1;

    // Sol ve sağ alt dizileri sırala
    quickSort(dizi, sol, pivotIndex - 1);
    quickSort(dizi, pivotIndex + 1, sag);
}


int main() {
    int dizi[] = {22, 46, 1, 9, 38, 20, 16, 21};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    quickSort(dizi, 0, boyut - 1);
    std::cout << "Sıralanmış Dizi: ";
    for (int i = 0; i < boyut; i++) {
        std::cout << dizi[i] << " ";
    }
    return 0;
}