#include<stdio.h>

struct laptop
{
    char brand[10];
    int ram;
    int storage;
    char cpuModel[10];
    float screenSize;
    float price;
};

int main() {

    struct laptop l1;

    printf("\n enter Brand : ");
    scanf("%s",l1.brand);

    printf("\n enter Ram : ");
    scanf("%d",&l1.ram);

    printf("\n enter Storage : ");
    scanf("%d",&l1.storage);

    printf("\n enter CPU Model : ");
    scanf("%s",l1.cpuModel);

    printf("\n enter Screen Size : ");
    scanf("%f",&l1.screenSize);

    printf("\n enter Price : ");
    scanf("%f",&l1.price);

    printf("\nBrand : %s \nCPU : %s \nScreen size : %f \nRam : %d \nStorage : %d \nPrice : %f", l1.brand, l1.cpuModel, l1.screenSize, l1.ram, l1.storage, l1.price);

    return 0;
}