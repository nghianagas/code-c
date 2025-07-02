#include <stdio.h>

int main()
{
    // int arr[5];
    // int sum =0;
    // int max,min;
    // int n,m;
    // int i,j,k,l;
    

    // printf("nhap %d gia tri cho mang laf so nguyen:\n",10);
    // printf("arr[%d]=",0);
    // scanf("%d",&arr[0]);
    
    // sum=max=min = arr[0];
    // for (i=1;i<5;i++)
    // {
    //     printf("arr[%d]=",i);
    //     scanf("%d",&arr[i]);
    //     sum+= arr[i];
    //     if (max < arr[i])
    //         max = arr[i];
    //     if (min > arr[i])
    //         min = arr[i];
    // }
    // printf("Tong cac phan tu: %d\n", sum);
    // printf("giá tri lon nhat: %d\n", max);
    // printf("gia trị be nhất: %d\n", min);
    // printf("nhap n  để kiểm tra nó nằm trong mảng arr không:\n");
    
    // scanf("%d",&n);
    // for(j=0;j<5;j++)
    // {
    //     if (n == arr[j]){
    //         printf("n =%d nằm trong ở arr\n", n);
    //         break;
    //     }
    // }
    // if(j == 5) {
    //     printf("n = %d KHONG nam trong mang arr\n", n);
    // }

    // for(k=0;k<4;k++)
         
    // {
    //     for(l=k + 1;l<5;l++)
    //     {
    //         if (arr[k] > arr[l])
    //         {   m = arr[k];
    //             arr[k] = arr[l];
    //             arr[l] = m;
    //         }
            

    //      }
        

    // }
    // printf("Mang sau khi sap xep tang dan:\n");
    // for(k=0;k<5;k++) {
    //     printf("%d ", arr[k]);
    // }
    // printf("\nMang giam dan:\n");
    // for (int k = 4; k >= 0; k--) {
    //     printf("%d ", arr[k]);
    // }
    // printf("\ncác số trung lặp:\n");
    // for (i = 0; i < 4; i++) {
    //     if (arr[i] == arr[i + 1]) {
           
    //         if (i == 0 || arr[i] != arr[i - 1]) {
    //             printf(" %d", arr[i]);
    //         }
    //     }
    // }

   
    float a, pay;

    printf("Nhap tien: ");
    scanf("%f", &a);

    if (a > 0 && a <= 9525) {
        pay = a;
        printf("Pay = %.2f\n", pay);
    }
    else if (a > 9525 && a <= 38700) {
        pay = a - (a - 9525) * 0.12f;
        printf("Pay = %.2f\n", pay);
    }
    else if (a > 38700 && a <= 82500) {
        pay = a - (38700 - 9525) * 0.12f - (a - 38700) * 0.22f;
        printf("Pay = %.2f\n", pay);
    }
    else if (a > 82500) {
        pay = a - (38700 - 9525) * 0.12f - (82500 - 38700) * 0.22f - (a - 82500) * 0.32f - 1000;
        printf("Pay = %.2f\n", pay);
    }
    else {
        printf("So tien khong hop le.\n");
    }
    
    return 0;


    // for (int i = 0; i < 5; i++) {
    //         scanf("%d",&arr[i]);
    //         if (arr[i] != 3) {
    //             printf("Gia tri : %d. \n", arr[i]);}
    //         else
    //             printf("Gia tri khong duoc bang %d. Nhap lai!\n", a);
        
    // }
    // return 0;
    


}

