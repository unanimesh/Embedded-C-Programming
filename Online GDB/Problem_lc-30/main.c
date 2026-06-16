#include<stdio.h>
int main()
{
    unsigned char distanceA2B = 160;
    unsigned char distanceB2C = 40;
    unsigned char distanceA2C;
    
    distanceA2C = distanceA2B + distanceB2C;
    
    printf("The distance between A2C %uKM\n",distanceA2C);
    printf("The distance between A2C %oKM in Octal Format\n",distanceA2C);
    printf("The distance between A2C %xKM in Lower Case HexaDecimal Format\n",distanceA2C);
    printf("The distance between A2C %XKM in Upper Case HexaDecimal Format\n",distanceA2C);
    return 0;
    
}