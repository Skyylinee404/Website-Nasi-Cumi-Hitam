 #include <stdio.h> 
 #include <string.h>

 struct mahasiswa {
  char nama [50];
  int umur;
  float ipk;
};

  int main() { 
 
    struct mahasiswa mhs1;
    strcpy (mhs1.nama, "alexander agus");
    mhs1.umur = 90;
    mhs1.ipk = 10.9;
   

   printf("--- Data Mahasiswa ---\n");
   printf("Nama : %s\n", mhs1.nama);
   printf("Umur : %d tahun\n", mhs1.umur);
   printf("IPK  : %.2f\n", mhs1.ipk);

    return 0;
  }
  
