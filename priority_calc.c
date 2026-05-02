// =========================================================================
// MEMBER 4: Prishey - PRIORITY CALCULATION (IF-ELSE, FLOATS)
// =========================================================================
void calculatePriority(struct Emergency *e) {
    printf("\n--- Member 4: Priority & Distance Logic ---");
    printf("\nEnter Distance from Nearest Station (in KM): ");
    scanf("%f", &e->distance);

    // If-Else conditional statements logic
    if (e->distance <= 5.0) {
        e->priorityLevel = 1; // Critical - Near
        printf("Status: CRITICAL (Estimated Response Time: < 5 mins)\n");
    } else if (e->distance > 5.0 && e->distance <= 15.0) {
        e->priorityLevel = 2; // Urgent - Moderate
        printf("Status: URGENT (Estimated Response Time: 10-15 mins)\n");
    } else {
        e->priorityLevel = 3; // Normal - Far
        printf("Status: STANDARD (Estimated Response Time: > 20 mins)\n");
    }
}
