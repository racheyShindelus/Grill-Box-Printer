#include <stdio.h>

void printBox(int height, int width);

int main() {
    int height;
    int width;
    printf("Enter grill width: ");
    scanf("%d", &width);
    printf("Enter grill height: ");
    scanf("%d", &height);

    if (width < 2 || width > 30 || height <2 || height > 12)
    {
        if (width < 2)  
        {
            printf("Grill width is to narrow.\n");
        }
        if (width > 30)  
        {
            printf("Grill width is to wide.\n");
        }
        if (height < 2)
        {
            printf("Grill height is too low.\n");
        }
        if (height > 12)
        {
            printf("Grill height is too high.\n");
        }
        printf("The width must be 2-30 and the height must be 2-12.\n");
    }
    else
    {
        printf("Grill width: %d\n", width);
        printf("Grill height: %d\n", height);
        printBox(height, width);
    }
    return 0;
}

void printBox(int height, int width)
{
    printf("*");
    for (int i = 0; i < width; i++) // line width
    {
        printf("-");
    }
    printf("*");
    for(int j = 0; j < height; i++) // side height
    {
        printf("|");
        if (j > 1 || j < (height - 1))
        {
            for (int i = 0; i < width; i++) // line width
    {
        printf("-");
    }
        }
    }
    printf("*");
    for (int i = 0; i < width; i++) // line width
    {
        printf("-");
    }
    printf("*");
}