// =========================================================================
// MEMBER 3: Ashhad - EMERGENCY TYPE SELECTION (ARRAYS & LOOPS)
// =========================================================================
void selectEmergencyType(struct Emergency *e) {
    // Array of Strings (2D Array)
    char types[4][25] = {"Medical / Ambulance", "Fire Brigade", "Police (15)", "Disaster / Rescue"};
    int choice;
    int valid = 0;

    printf("\n--- Member 3: Classification Module ---");
    printf("\nAvailable Emergency Services:\n");
    
    // For loop to display array elements
    for(int i = 0; i < 4; i++) {
        printf("%d. %s\n", i+1, types[i]);
    }

    // While loop for input validation
    while (!valid) {
        printf("Select Service (1-4): ");
        scanf("%d", &choice);
        
        if(choice >= 1 && choice <= 4) {
            e->typeIndex = choice - 1; // Array index logic
            valid = 1;
        } else {
            printf("Invalid selection! Please select between 1 and 4.\n");
        }
    }
}
