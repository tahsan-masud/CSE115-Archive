#include <stdio.h>

int main() {
    // Normal colors
    printf("=== Normal Colors ===\n");
    printf("\033[30mBlack\033[0m\n");
    printf("\033[31mRed\033[0m\n");
    printf("\033[32mGreen\033[0m\n");
    printf("\033[33mYellow\033[0m\n");
    printf("\033[34mBlue\033[0m\n");
    printf("\033[35mMagenta\033[0m\n");
    printf("\033[36mCyan\033[0m\n");
    printf("\033[37mWhite\033[0m\n\n");

    // Bright colors
    printf("=== Bright Colors ===\n");
    printf("\033[90mBright Black (Gray)\033[0m\n");
    printf("\033[91mBright Red\033[0m\n");
    printf("\033[92mBright Green\033[0m\n");
    printf("\033[93mBright Yellow\033[0m\n");
    printf("\033[94mBright Blue\033[0m\n");
    printf("\033[95mBright Magenta\033[0m\n");
    printf("\033[96mBright Cyan\033[0m\n");
    printf("\033[97mBright White\033[0m\n\n");

    // Background colors
    printf("=== Background Colors ===\n");
    printf("\033[40mBlack BG\033[0m\n");
    printf("\033[41mRed BG\033[0m\n");
    printf("\033[42mGreen BG\033[0m\n");
    printf("\033[43mYellow BG\033[0m\n");
    printf("\033[44mBlue BG\033[0m\n");
    printf("\033[45mMagenta BG\033[0m\n");
    printf("\033[46mCyan BG\033[0m\n");
    printf("\033[47mWhite BG\033[0m\n\n");

    // Bright background colors
    printf("=== Bright Background Colors ===\n");
    printf("\033[100mBright Black BG\033[0m\n");
    printf("\033[101mBright Red BG\033[0m\n");
    printf("\033[102mBright Green BG\033[0m\n");
    printf("\033[103mBright Yellow BG\033[0m\n");
    printf("\033[104mBright Blue BG\033[0m\n");
    printf("\033[105mBright Magenta BG\033[0m\n");
    printf("\033[106mBright Cyan BG\033[0m\n");
    printf("\033[107mBright White BG\033[0m\n\n");

    // Font styles
    printf("=== Styles ===\n");
    printf("\033[1mBold\033[0m\n");
    printf("\033[3mItalic (may not work on all terminals)\033[0m\n");
    printf("\033[4mUnderline\033[0m\n");
    printf("\033[7mReverse\033[0m\n");

    return 0;
}
