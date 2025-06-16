#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    // //bai1
    // char name[100];
    // char sinh[100];
    // char numberphone[100];

    // printf("name: ");
    // fgets(name, sizeof(name), stdin);

    // printf("ngay sinh: ");
    // fgets(sinh, sizeof(sinh), stdin);

    // printf("numberphone: ");
    // fgets(numberphone, sizeof(numberphone), stdin);
    // printf("name: %s",name);
    // printf("ngay sinh:%s",sinh);
    // printf("phone:%s",numberphone);
    // return 0;
    //bai2
    // printf("######\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#####\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");

    // // In khoảng cách giữa chữ F và C
    // printf("\n");

    // // In chữ 'C' lớn
    // printf("    ######\n");
    // printf("  ##      ##\n");
    // printf(" #\n");
    // printf("#\n");
    // printf("#\n");
    // printf("#\n");
    // printf(" #\n");
    // printf("  ##      ##\n");
    // printf("    ######\n");

    // return 0;
    

    //bai3
    // float r, perimeter, area, PI ;
    // PI = 3.14;
    // printf("nhap ban kinh hinh tron:");
    // scanf("%f", &r);
    // perimeter = 2 * PI * r;
    // area = PI * r * r;
    // printf("Perimeter of the Circle = %f inches\n", perimeter);
    // printf("Area of the Circle = %f square inches\n", area);

    // return 0;

    //bai 4
    // int day, years, weeks, remaining_days;
    // printf("nhap so ngay: ");
    // scanf("%d", &day);
    // years = day / 365;
    // day = day % 365;
    // weeks = day /7;
    // remaining_days = day %7;
    // printf("year: %d\n",years);
    // printf("week: %d\n",weeks);
    // printf("remaining_day: %d\n",remaining_days);
    // return 0;

    //bai5
    // char ID[10];
    // int  sumtime, amount_1h,amount;
    // printf("nhap ID nhan vien:");
    // scanf("%s",&ID);
    // if (strlen(ID) > 10) {
    //     printf("ID vuot qua 10 chu so!\n");
    //     return 1;
    // }

    // for (int i = 0; i < strlen(ID); i++) {
    //     if (!isdigit(ID[i])) {
    //         printf("ID chi duoc chua chu so!\n");
    //         return 1;
    //     }
    // }
    // printf("nhap tong so gio  ID %s lam trong thang:",ID);
    // scanf("%d",&sumtime);
    // amount_1h = 15000;
    // amount = amount_1h*sumtime;
    // printf("luong cua ID %s lam trong thang la:%d", ID, amount);
    // return 0;

    // bai 6
    // int input_s, H,M,S;
    // printf("nhap giay:");
    // scanf("%d",&input_s);

    // H = input_s/3600;
    // input_s=input_s%3600;
    // M = input_s/60;
    // S = input_s%60;
    // printf("H:M:S-%d:%d:%d",H,M,S);
    // return 0;

    //BAI 7
    // int month;
    // char *months[] = {
    //     "Invalid",     // chỉ để tránh dùng chỉ số 0
    //     "January", "February", "March", "April", "May", "June",
    //     "July", "August", "September", "October", "November", "December"
    // };

    // printf("NHẬP THANG BẰNG SO TỪ 1 ĐẾN 12: ");
    // scanf("%d", &month);

    // if (month >= 1 && month <= 12) {
    //     printf("%s\n", months[month]);
    // } else {
    //     printf("NHẬP LẠI THÁNG TRONG KHOẢNG 1 ĐÉN 12.\n");
    // }

    // return 0;

    printf("Even numbers between 1 to 50 (inclusive):\n");

    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;






}