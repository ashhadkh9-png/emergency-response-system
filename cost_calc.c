// =========================================================================
// MEMBER 5: Shakila - COST CALCULATION IN PKR (MATH & CALL BY REFERENCE)
// =========================================================================
void calculateFinalBill(struct Emergency *e) {
    float baseTax = 300.0;     // Fixed Govt Tax / Service Fee in PKR
    float ratePerKm = 95.0;    // Service rate per KM in PKR
    float emergencySurcharge = 0.0;

    printf("\n--- Member 5: PKR Financial Processing ---");
    
    // Additional logic: Critical emergencies have a small priority surcharge
    if (e->priorityLevel == 1) {
        emergencySurcharge = 150.0; // Extra charges for fast dispatch
    } else if (e->priorityLevel == 2) {
        emergencySurcharge = 50.0;
    }

    // Mathematical formula for PKR billing
    e->totalCost = baseTax + (e->distance * ratePerKm) + emergencySurcharge;
}
