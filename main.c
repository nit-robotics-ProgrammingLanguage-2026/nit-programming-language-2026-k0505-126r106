#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input >= 0 && input < 10)
    {
        printf("NG");
    }
    if (input < 0 || input >=10)
    {
        printf("OK"); 
    }
    return 0;
}
