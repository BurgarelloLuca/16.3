#include <stdio.h>

int main(void) {
    FILE *myFile;
    myFile = fopen("Test.txt", "r");
    if (myFile == NULL) {
        printf("Errore durante l'apertura del file");
    }
    int n;
    int count10 = 0;
    int count100 = 0;
    int count1000 = 0;
    for (int i = 0; i < 100; i++) {
        fscanf(myFile, "%d", &n);
        if (n == 10) {
            count10++;
        } else if (n == 100) {
            count100++;
        } else if (n == 1000) {
            count1000++;
        }
    }
    printf("il numero 10 si ripete %d volte\n", count10);
    printf("il numero 100 si ripete %d volte\n", count100);
    printf("il numero 1000 si ripete %d volte", count1000);


    fclose(myFile);

    return 0;
}
