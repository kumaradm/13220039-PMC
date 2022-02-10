#include <stdio.h>
#include <stdlib.h>

struct mhs {
    char nama[30];
    int nim;
    float kehadiran;
};



int main(){
    struct mhs klsA[3] = {{"A", 13220001, 70}, {"B", 13220002, 80}, {"C", 13220003, 90}};
    for(int i=0; i<3; i++){
        if(klsA[i].kehadiran >= 80){
            printf("Nama\t: %s\n", klsA[i].nama);
            printf("NIM\t: %d\n\n", klsA[i].nim);
        }
    };
    return 0;
}
