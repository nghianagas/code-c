#include<stdio.h>
void sum();
void hieu();
void tich();
void thuong();
int main()
{
    int a;
    
    int x, y;
    

    do
    {
        printf("\n--- MENU ---\n");
        printf("0: Thoat\n");
        printf("1: Cong 2 so\n");
        printf("2: Tru 2 so\n");
        printf("3: Nhan 2 so\n");
        printf("4: Chia 2 so\n");
        printf("Chon chuc nang: ");
        
        scanf("%d", &a);
        if (a == 0) {
            printf("Ban da chon thoat.\n");
            break; // Thoát khỏi vòng lặp
        }
        if (a < 0 || a > 4)
        {
                printf("Gia tri khong hop le. Vui chọn các chế đọ từ 0 đén 4!\n");
        }

        printf("Nhap so thu nhat (x): ");
        scanf("%d", &x);
        printf("Nhap so thu hai (y): ");
        scanf("%d", &y);
        if (a==1)
        
            sum(x,y);

        
        else if (a==2)
        
            hieu(x,y);

        
        else if (a==3)
        
            tich(x,y);

        
        else if (a==4)
        
            thuong(x,y);

        
        
        
    }
    while (1);

    


    return 0;


}
void sum(int x,int y)
    {
        int sum = x+y;
        printf("sum = %d",sum);

    }
     void hieu(int x,int y)
    {
        int hieu = x-y;
        printf("x-y = %d",hieu);
        
    }

    void tich(int x,int y)
    {
        int tich = x*y;
        printf("x*y = %d",tich);
        
    }
    void thuong(int x,int y)
    {
        int thuong = x/y;
        int du = x%y;
        printf("x/y = %d\ndu = %d",thuong,du);
        
        
        
    }