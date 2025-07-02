#include<stdio.h>
int main(void)
{
    // luyen tap
    // int number =0;
    // int *pointer = &number;
    // *pointer =1;
    // printf("value =%d\n",number);
    // printf("value =%d\n",*pointer);

    // ext1
    char var1;
    var1 = 100;
    printf("value =%d\n",var1);
    printf("address =%u\n",&var1);
    // ext2
    // gán địa chỉ vả vào ptr
    char *pointer = &var1;
    // lấy giá trị từ ptr đàn trỏ tới
    char var1_read = *pointer;
    printf("value =%d\n",var1_read);
    *pointer = 65;
    printf("var1_new: %d\n", var1);

    return 0;


}