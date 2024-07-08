#include <stdio.h>
#include <string.h>

// Function prototypes
void getCostDetails(const char* destination, int* travelCost, int* hotelCostAC, int* hotelCostNonAC);
int getFoodCost(const char* foodPreference);

int main() {
    char destination[100];
    char foodPreference[10];
    char roomPreference[10];
    int maxBudget, travelCost, hotelCost, foodCost, totalCost;

    // Get user inputs
    printf("Enter your maximum budget: ");
    scanf("%d", &maxBudget);
    printf("Enter your destination: ");
    scanf("%s", destination);
    printf("Enter your food preference (veg/nonveg): ");
    scanf("%s", foodPreference);
    printf("Enter your room preference (AC/NonAC): ");
    scanf("%s", roomPreference);

    // Get predefined costs for the given destination
    int hotelCostAC, hotelCostNonAC;
    getCostDetails(destination, &travelCost, &hotelCostAC, &hotelCostNonAC);

    // Get food cost based on preference
    foodCost = getFoodCost(foodPreference);

    // Determine hotel cost based on room preference
    if (strcmp(roomPreference, "AC") == 0) {
        hotelCost = hotelCostAC;
    } else {
        hotelCost = hotelCostNonAC;
    }

    // Calculate total cost
    totalCost = travelCost + hotelCost + foodCost;

    // Output the results
    printf("Total cost for travel to %s with %s food and %s room: %d\n", destination, foodPreference, roomPreference, totalCost);
    
    if (totalCost <= maxBudget) {
        printf("Your budget is sufficient for this trip.\n");
    } else {
        printf("Your budget is not sufficient for this trip.\n");
    }

    return 0;
}

// Function to get travel and hotel costs based on destination
void getCostDetails(const char* destination, int* travelCost, int* hotelCostAC, int* hotelCostNonAC) {
    if (strcmp(destination, "Paris") == 0) {
        *travelCost = 1000;
        *hotelCostAC = 2000;
        *hotelCostNonAC = 1500;
    } else if (strcmp(destination, "NewYork") == 0) {
        *travelCost = 800;
        *hotelCostAC = 1700;
        *hotelCostNonAC = 1200;
    } else if (strcmp(destination, "Tokyo") == 0) {
        *travelCost = 1200;
        *hotelCostAC = 2200;
        *hotelCostNonAC = 1600;
    } else {
        *travelCost = 500;  // Default values for unspecified destinations
        *hotelCostAC = 1500;
        *hotelCostNonAC = 1000;
    }
}

// Function to get food cost based on preference
int getFoodCost(const char* foodPreference) {
    if (strcmp(foodPreference, "veg") == 0) {
        return 200;
    } else if (strcmp(foodPreference, "nonveg") == 0) {
        return 300;
    } else {
        return 250;  // Default value for unspecified preferences
    }
}
