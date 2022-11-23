#include <stdio.h>
#include <assert.h>
#include "telecom colorcode.h"
#include "decom.h"
const int MAX_COLORPAIR_NAME_CHARS = 16;

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
