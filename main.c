#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// =========================================================================
// MEMBER 1: NAYAB - STRUCTURE DEFINITION & MAIN MENU (DO-WHILE, SWITCH, POINTERS)
// =========================================================================

struct Emergency {
    char name[50];
    char phone[15];
    char address[100];
    int typeIndex;      // 0: Ambulance, 1: Fire, 2: Police, 3: Disaster/Rescue
    float distance;
    float totalCost;
    int priorityLevel;  // 1: Critical, 2: Urgent, 3: Normal
};

// Function Prototypes (Modularity)
void inputUserInfo(struct Emergency *e);
void selectEmergencyType(struct Emergency *e);
void calculatePriority(struct Emergency *e);
void calculateFinalBill(struct Emergency *e);
void saveAndShowReport(struct Emergency e);
void displayTeamMembers(); 

int main() {
    struct Emergency emg;
    int choice;

    // MEMBER 1 LOGIC: 'do-while loop' for a continuous interactive menu
    do {
        printf("\n==================================================");
        printf("\n       PAKISTAN EMERGENCY RESPONSE (1122)         ");
        printf("\n==================================================");
        printf("\n1. Create New Emergency Alert");
        printf("\n2. View Team Members (Project Exhibition)");
        printf("\n3. Exit System");
        printf("\n==================================================");
        printf("\nSelect Option (1-3): ");
        
        // Pointers logic implicitly used in scanf
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Logic: Call by Reference (&emg) to update data globally across modules
                inputUserInfo(&emg);         // Member 2
                selectEmergencyType(&emg);   // Member 3
                calculatePriority(&emg);     // Member 4
                calculateFinalBill(&emg);    // Member 5
                saveAndShowReport(emg);      // Member 6
                break;
            case 2:
                displayTeamMembers();
                break;
            case 3:
                printf("\nExiting System... Allah Hafiz! Stay Safe Pakistan.\n");
                break;
            default:
                printf("\nInvalid Choice! Please enter a valid option.\n");
        }
    } while (choice != 3);

    return 0;
}

void displayTeamMembers() {
    printf("\n--- Project Developed By (6 Members) ---");
    printf("\nMember 1: Structures, Global Variables & Main Menu (Do-While)");
    printf("\nMember 2: User Input, Strings & Call by Reference");
    printf("\nMember 3: Emergency Classification, Arrays & Pointers");
    printf("\nMember 4: Priority & Distance Logic (If-Else Statements)");
    printf("\nMember 5: Financial Processing (PKR Cost Calculation)");
    printf("\nMember 6: File Handling, I/O & Call by Value (Report Gen)\n");
}
