#include<stdio.h>

int add(int a,int b)
    {return a+b;}
int sub(int a, int b)
    {return a-b;}
int mov(int a, int b)
    {return a*b;}
int div(int a, int b)
    {
        if (b != 0)
            return a/b;
        else 
            printf(" mẫu số phải khác 0");
            
    }
int main()
{
int (*prt[])(int,int)={add,sub,mov,div};
int bution;
int x,y;
while (1)
{
        printf("\n--- MENU ---\n");
        printf("0: Cong 2 so\n1: Tru 2 so\n2: Nhan 2 so\n3: Chia 2 so\n4: Thoat\n");
        printf("Chon chuc nang: ");
       
        scanf("%d", &bution);
    if (bution==4)
        {break;}
    if (bution >= 0 && bution <= 3)
    {
        printf("nhap x\n");
        scanf("%d",&x);
        printf("nhap y\n");
        scanf("%d",&y);
        int ham = prt[bution](x,y);
        if(y != 0)
        {
        
        
        printf("Kết quả = %d\n", ham);
        }

    }
    else{printf("chonlai");}
    
}
return 0;
}

