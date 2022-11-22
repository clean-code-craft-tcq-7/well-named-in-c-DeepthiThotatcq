#include "TelecomColorCode.h"

 {
    // Get the corresponding pair number for the given color pair
    int GetPairNumberFromColorPair(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }

    // Get the corresponding colour pair for the given pair number
    ColorPair GetColorPairFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor = (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
    }

    // print the Telecommunication colour code table
    void printColourCoding() {
        int numberOfPossiblePair = (numberOfMajorColors * numberOfMinorColors);
        printf("------------------------------------------------------");
        for(int pairNumber=1;pairNumber<=numberOfPossiblePair;pairNumber++)
        {
            ColorPair colorPair = GetColorPairFromPairNumber(pairNumber);
            printf(pairNumber , colorPair.getColorPairString());
            
        }
        printf("------------------------------------------------------");
    }
}
