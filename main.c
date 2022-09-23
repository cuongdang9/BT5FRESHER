#include<stdio.h>
float n;
void km(){
    do{
        
        printf("\nQuang duong ban da di la:  ");
        scanf("%d",&n);
    } while(n <=0);
    }
int main(int argc, char const *argv[])
{
    int t1=5000, t2=4000, t3=3000;
    int tong;
    km();
    if(n<=1)
    {
        printf("\nso tien can tra: %d VND",t1);
    }
    else if (n > 1 && n <=31)
    {
    tong=t1+t2*(n-1);
    printf("\nso tien can tra: %d VND",tong);
    }
    else if (n>31)
    {
    tong= t1 + t2*30 + t3*(n-31);
    printf("\nso tien can tra la: %d VND",tong);
    }
    return 0;
}
