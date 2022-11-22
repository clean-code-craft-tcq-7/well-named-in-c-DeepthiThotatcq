#include "TelecomColorCodeUtility.h"

void ValidatePairNumberWithColourPair(int pairNumber,
    MajorColor expectedMajor, MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorPairFromPairNumber(pairNumber);
    printf("Got pair", colorPair.getColorPairString());
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void ValidateColourPairWithPairNumber( MajorColor major,
    MinorColor minor, int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColorPair(major, minor);
    printf("Got pair number", pairNumber);
    assert(pairNumber == expectedPairNumber);
}


int main() {
    ValidatePairNumberWithColourPair(4, WHITE, BROWN);
    ValidatePairNumberWithColourPair(5, WHITE, SLATE);
    ValidateColourPairWithPairNumber(BLACK, ORANGE, 12);
    ValidateColourPairWithPairNumber(VIOLET, SLATE, 25);
    printColourCoding();
    return 0;
}
