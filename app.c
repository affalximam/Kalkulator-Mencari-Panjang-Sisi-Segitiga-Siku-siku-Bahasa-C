#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){

    int pilih;
    float a, b, c;

    char * menu[5];
    menu[1] = "Mencari sisi alas (a) ";
    menu[2] = "Mencari sisi samping (b) ";
    menu[3] = "Mencari sisi miring (c) ";
    menu[4] = "Keluar program";

    clear();
    printf("\n---------------------------------------------------\n");
    printf("Kalkulator Mencari Panjang sisi segitiga siku-siku\n");
    printf("By : AFFALXIMAM\n");
    printf("---------------------------------------------------\n\n");

    printf("    |\\         \n");
    printf("    | \\        \n");
    printf("  b |  \\  c    \n");
    printf("    |   \\      \n");
    printf("    |____\\     \n");
    printf("      a         \n\n");

    printf("MENU PROGRAM \n");
    for(int i = 1; i <= 4; i++){
        printf("%d. ", i);
        printf("%s \n", menu[i]);
    }

    pilih:
    printf("\nMasukan pilihan (1-4) : ");
    scanf(" %d", &pilih);
    fflush(stdin);

    if(pilih == 1){
        pilih1:
        printf("    Masukan nilai b : ");
        scanf(" %f", &b);
        printf("    Masukan nilai c : ");
        scanf(" %f", &c);
        if(c <= b){
            printf("    Error! nilai c kurang dari b \n");
            goto pilih1;
        }
        else{
            a = sqrt((c*c)-(b*b));
            printf("    Nilai sisi alas (a) adalah : %.2f \n", a);
            goto pilih;
        }
    }

    else if(pilih == 2){
        printf("    Masukan nilai a : ");
        scanf(" %f", &a);
        printf("    Masukan nilai c : ");
        scanf(" %f", &c);
        if(c < a){
            printf("    Error! nilai c kurang dari b \n");
            goto pilih1;
        }
        else{
            b = sqrt((c*c)-(a*a));
            printf("    Nilai sisi samping (b) adalah : %.2f \n", b);
            goto pilih;
        }
    }

    else if(pilih == 3){
        printf("    Masukan nilai a : ");
        scanf(" %f", &a);
        printf("    Masukan nilai b : ");
        scanf(" %f", &b);
        c = sqrt((a*a)+(b*b));
        printf("    Nilai sisi miring (c) adalah : %.2f \n", c);
        goto pilih;
    }

    else if(pilih == 4){
        goto end;
    }
    else{
        printf("ERROR ! input salah");
        goto pilih;
    }

    end:
    printf("\nProgram Selesai \n");
    
    return 0;

}
