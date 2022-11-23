#include <stdio.h>
#include <assert.h>
#include "decom.h"
#include "telecom colorcode.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    printf("************************************\n");
    printf("Telecomunication color code table\n");
    printf("************************************\n");
    printcolorcode();
    return 0;
}
