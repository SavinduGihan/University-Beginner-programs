#include <stdio.h>

#define ROWS 6
#define COLS 8

void initializeParking(int parking[ROWS][COLS]);
void displayParking(int parking[ROWS][COLS]);
void parkVehicle(int parking[ROWS][COLS], int row, int col);
void removeVehicle(int parking[ROWS][COLS], int row, int col);
int countAvailableSpaces(int parking[ROWS][COLS]);
void rowWithMostEmptySlots(int parking[ROWS][COLS]);
void detectConsecutiveEmptySlots(int parking[ROWS][COLS]);

int main() {
    int parking[ROWS][COLS];

    initializeParking(parking);

    parking[0][0] = 2;
    parking[0][1] = 2;

    parkVehicle(parking, 1, 2);
    parkVehicle(parking, 2, 3);
    parkVehicle(parking, 3, 4);

    removeVehicle(parking, 2, 3);

    displayParking(parking);

    printf("\nAvailable Empty Slots: %d\n", countAvailableSpaces(parking));

    rowWithMostEmptySlots(parking);

    detectConsecutiveEmptySlots(parking);

    return 0;
}

void initializeParking(int parking[ROWS][COLS]) {
    int i, j;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            parking[i][j] = 0;
        }
    }
}

void displayParking(int parking[ROWS][COLS]) {
    int i, j;

    printf("\nParking Layout:\n");

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            printf("%d ", parking[i][j]);
        }
        printf("\n");
    }

    printf("\n0 = Empty | 1 = Parked | 2 = VIP Reserved\n");
}

void parkVehicle(int parking[ROWS][COLS], int row, int col) {
    if(parking[row][col] == 0) {
        parking[row][col] = 1;
        printf("Vehicle parked at [%d][%d]\n", row, col);
    } else {
        printf("Slot [%d][%d] is not available.\n", row, col);
    }
}

void removeVehicle(int parking[ROWS][COLS], int row, int col) {
    if(parking[row][col] == 1) {
        parking[row][col] = 0;
        printf("Vehicle removed from [%d][%d]\n", row, col);
    } else {
        printf("No vehicle found at [%d][%d]\n", row, col);
    }
}

int countAvailableSpaces(int parking[ROWS][COLS]) {
    int i, j, count = 0;

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS; j++) {
            if(parking[i][j] == 0) {
                count++;
            }
        }
    }

    return count;
}

void rowWithMostEmptySlots(int parking[ROWS][COLS]) {
    int i, j;
    int maxEmpty = 0, rowIndex = 0;

    for(i = 0; i < ROWS; i++) {
        int emptyCount = 0;

        for(j = 0; j < COLS; j++) {
            if(parking[i][j] == 0) {
                emptyCount++;
            }
        }

        if(emptyCount > maxEmpty) {
            maxEmpty = emptyCount;
            rowIndex = i;
        }
    }

    printf("Row with most empty slots: Row %d (%d empty slots)\n",
           rowIndex, maxEmpty);
}

void detectConsecutiveEmptySlots(int parking[ROWS][COLS]) {
    int i, j;

    printf("\nConsecutive Empty Slots:\n");

    for(i = 0; i < ROWS; i++) {
        for(j = 0; j < COLS - 1; j++) {

            if(parking[i][j] == 0 && parking[i][j + 1] == 0) {
                printf("Consecutive empty slots found in Row %d at Columns %d and %d\n",
                       i, j, j + 1);
            }
        }
    }
}
