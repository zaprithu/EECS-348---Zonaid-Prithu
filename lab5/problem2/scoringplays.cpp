#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rec_helper(int maximum);
void scores(int current, int maximum, int td8, int td7, int td6, int fg3, int sf2, int final);
int main() {
    printf("Enter 0 or 1 to STOP \n");
    printf("Enter the NFL score: ");
    int maximum;
    scanf("%d", &maximum);
    printf("\n");
    if(maximum == 0 || maximum == 1) {
        printf("Exiting program...\n");
        return 0;
    }
    printf("Possible scoring combinations: \n");
    rec_helper(maximum);
    return 0;
}
void rec_helper(int maximum) {
    scores(0, maximum, 0, 0, 0, 0, 0, 1);
}
void scores(int current, int maximum, int td8, int td7, int td6, int fg3, int sf2, int final) {
    if (current == maximum) {
        printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td8, td7, td6, fg3, sf2);
    }
    if (current + 2 <= maximum && final <= 2) {
        scores(current + 2, maximum, td8, td7, td6, fg3, sf2 + 1, 2);
    }
    if (current + 3 <= maximum && final <= 3) {
        scores(current + 3, maximum, td8, td7, td6, fg3 + 1, sf2, 3);
    }
    if (current + 6 <= maximum && final <= 6) {
        scores(current + 6, maximum, td8, td7, td6 + 1, fg3, sf2, 6);
    }
    if (current + 7 <= maximum && final <= 7) {
        scores(current + 7, maximum, td8, td7 + 1, td6, fg3, sf2, 7);
    }
    if (current + 8 <= maximum && final <= 8) {
        scores(current + 8, maximum, td8 + 1, td7, td6, fg3, sf2, 8);
    }
}