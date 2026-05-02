// =========================================================================
// MEMBER 6: Sehar - FILE HANDLING & PKR REPORT (FILE I/O & CALL BY VALUE)
// =========================================================================
void saveAndShowReport(struct Emergency e) { // Call by value
    FILE *fptr;
    char types[4][25] = {"Medical / Ambulance", "Fire Brigade", "Police (15)", "Disaster / Rescue"};
    
    // Generate Timestamp
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("\n--- Member 6: File I/O & Final Report ---");

    // File I/O Logic
    fptr = fopen("pkr_emergency_record.txt", "a"); // Append mode

    if (fptr == NULL) {
        printf("\nError: Could not open record file!");
        return;
    }

    // Saving to File
    fprintf(fptr, "[%02d-%02d-%d %02d:%02d] Name: %s | Contact: %s | Type: %s | Priority: %d | Bill: Rs. %.2f\n", 
            tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min,
            e.name, e.phone, types[e.typeIndex], e.priorityLevel, e.totalCost);
    fclose(fptr);

    // Final Report Display (GUI equivalent in console)
    printf("\n\n");
    printf("==================================================\n");
    printf("      OFFICIAL EMERGENCY RECEIPT (GOVT OF PK)     \n");
    printf("==================================================\n");
    printf("Date/Time: %02d-%02d-%d %02d:%02d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_hour, tm.tm_min);
    printf("Name     : %s\n", e.name);
    printf("Contact  : %s\n", e.phone);
    printf("Location : %s\n", e.address);
    printf("Service  : %s\n", types[e.typeIndex]);
    printf("Distance : %.2f KM\n", e.distance);
    printf("Priority : %s\n", (e.priorityLevel==1)?"CRITICAL (IMMEDIATE)": (e.priorityLevel==2)?"URGENT":"STANDARD");
    printf("--------------------------------------------------\n");
    printf("Total Payable: Rs. %.2f (PKR)\n", e.totalCost);
    printf("==================================================\n");
    printf(">>> Data successfully saved to 'pkr_emergency_record.txt'\n");
    printf(">>> Emergency units have been dispatched. Stay calm!\n");
}
