#include <stdio.h>

int main(int argc, char **argv) {
    if(argc != 2) {
        printf("Kesalahan: argumen tidak sesuai!\n");
        printf("Cara menggunakan: khila [lokasi folder kode sumber]\n");
        printf("Kompilasi dibatalkan.\n");
        return 1;
    }
    return 0;
}