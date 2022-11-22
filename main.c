#include <stdio.h>
#include <assert.h>
#include "25_pair_colorcode_functions.h"
#include "i.h"
int main() {
    printtable();
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}
