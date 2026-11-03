/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:Hotel Management System
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("--- 1D ARRAY: WEEKLY REVENUE TRACKER ---\n");
    double revenue[7];
    double total_revenue = 0.0;
    double average_revenue = 0.0;

    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: $", i + 1);
        scanf("%lf", &revenue[i]);
        total_revenue += revenue[i];
    }

    average_revenue = total_revenue / 7.0;

    printf("\nTotal Weekly Revenue: $%.2f\n", total_revenue);
    printf("Average Daily Revenue: $%.2f\n\n", average_revenue);


    printf("--- 2D ARRAY: ROOM OCCUPANCY (ONE BRANCH) ---\n");
    int occupancy[5][10];

    for (int floor = 0; floor < 5; floor++) {
        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; 
        }
    }

    for (int floor = 0; floor < 5; floor++) {
        int occupied_count = 0;
        int vacant_count = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupied_count++;
            } else {
                vacant_count++;
            }
        }
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied_count, vacant_count);
    }
    printf("\n");


    printf("--- 3D ARRAY: MULTIPLE BRANCHES OCCUPANCY ---\n");
    int chain[3][5][10];
    int total_chain_occupied = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                
                if (chain[branch][floor][room] == 1) {
                    total_chain_occupied++;
                }
            }
        }
    }

    printf("Total occupied rooms across all 3 branches: %d rooms\n", total_chain_occupied);

    return 0;
}