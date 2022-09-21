#include <stdio.h>
int main()
{
    int harga_normal;
    int harga_akhir;
    int nabung;
    int total_nabung = 0;
    float naik;
    int bulan = 0;

    printf("Masukkan harga awal : ");
    scanf("%d", &harga_normal);
    printf("Masukkan tabungan tiap bulan : ");
    scanf("%d", &nabung);
    printf("Masukkan kenaikan harga tiap tahun dalam persen : ");
    scanf("%f", &naik);

    harga_akhir = harga_normal;
    naik = naik / 100;
    while (total_nabung < harga_akhir)
    {
        bulan++;
        total_nabung = total_nabung + nabung;
        if (bulan % 12 == 0)
        {
            harga_akhir = harga_akhir + harga_normal * naik;
        }
    }
    printf("Waktu yang diperlukan untuk pergi haji adalah %d bulan", bulan);
}
