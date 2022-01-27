#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int kuantum;
    printf("Banyak proses\t\t\t: ");
    scanf("%d", &n);
    printf("Kuantum (ms)\t\t\t: ");
    scanf("%d", &kuantum);

    int proses[n];
    int waktuKedatangan[n];
    int waktuEksekusi[n];
    int prosesEksekusi[n];
    int nowProses;
    int tempProses[n];

    printf("\n");
    for(int i=0; i<n; i++) {
        proses[i] = i;
        printf("Waktu kedatangan P%d (ms)\t: ", i);
        scanf("%d", &waktuKedatangan[i]);
    }

    printf("\n");
    for(int i=0; i<n; i++){
        printf("Waktu eksekusi P%d (ms)\t: ", i);
        scanf("%d", &waktuEksekusi[i]);
    }

    int time = 0;
    int queue[n];
    bool processing = true;

    nowProses = proses[0];
    while(processing) {
        if (time == waktuEksekusi[nowProses]){
                for(int i=0; i < n-1, i++){
                    tempProses[i] = queue[i+1]
                }
        }
        else if(time == waktuKedatangan[nowProses]){
                nowProses = 0;
                for(int i=0; i<n, i++){

                }
        }
    }
    return 0;
}
