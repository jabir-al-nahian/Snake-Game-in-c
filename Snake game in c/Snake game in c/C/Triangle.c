#include <stdio.h>
int main()
{
    int side1, side2, side3;
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1==side2 && side2==side3)
    {
        printf("Equilateral Triangle\n");
    }
    else if(side1==side2 || side1==side3 || side2==side3)
    {
        printf("Isosceles Triangle\n");
    }
    else
    {
        printf("Bad Triangle\n");
    }
    return 0;
}
