#include <stdio.h> 


 struct Waktu {
  int Jam;
  int Menit;
  int Detik;
};

struct Waktu tambahkan(struct Waktu a, struct Waktu  b){
    struct Waktu hasil;
    
    hasil.Jam = a.Jam + b.Jam;
    hasil.Menit = a.Menit + b.Menit;
    hasil.Detik = a.Detik + b.Detik;


    if(hasil.Detik >= 60){
        hasil.Menit += 1;
        hasil.Detik -= 60;
    }

    if(hasil.Menit >= 60){
       hasil.Jam += 1;
       hasil.Menit -= 60;
    }

    return hasil;
}

  int main() {
    struct Waktu waktu1, waktu2, total;


    printf("masukan waktu pertama (jam, menit, detik)");
    scanf("%d %d %d", 
      &waktu1.Jam, 
      &waktu1.Menit,
      &waktu1.Detik);

    printf("masukan waktu kedua (jam, menit, detik)");
    scanf("%d %d %d", 
      &waktu2.Jam, 
      &waktu2.Menit, 
      &waktu2.Detik);

    total = tambahkan(waktu1, waktu2);

     printf("\nTOTAL JAM\n");
    printf("%d jam %d menit %d detik\n",
           total.Jam,
           total.Menit,
           total.Detik);
 
   
    return 0;
  }