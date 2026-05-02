# 🚨 Pakistan Emergency Response System (1122)
**BSCS Semester 1 — Group Project**

A simple C-based emergency response system that allows citizens to report emergencies in Pakistan and receive instant priority assessment and PKR billing.

---

## 📖 Project Overview

This system mimics the **1122 Emergency Services** in Pakistan. Users can:
- Report emergencies (Medical, Fire, Police, Disaster)
- Enter location details
- Get automatic priority assessment
- Receive PKR billing instantly
- Get a receipt and confirmation

---

## ✨ Features

- **Emergency Classification**: 4 types of services (Ambulance, Fire, Police, Disaster)
- **Distance-based Priority**: Auto-calculates urgency based on distance
- **PKR Billing System**: Calculates cost with base tax + per-km rate + surcharges
- **File Logging**: All reports saved to `pkr_emergency_record.txt`
- **Receipt Generation**: Official govt-style receipt for each emergency
- **Timestamp Tracking**: Every emergency logged with date/time

---

## 👥 Team Members & Roles

| Member | Name | Role | Features |
|---|---|---|---|
| **1** | Nayab Sajid | Structures & Main Menu | Do-while loop, Switch case, Menu system |
| **2** | Rabia Aziz | User Input Module | String input, Call by reference, scanf |
| **3** | Muhammad Ashhad | Emergency Classification | Arrays, For loops, Input validation |
| **4** | Prishey Khan | Priority Calculation | If-else logic, Distance calculations |
| **5** | Shakila | Cost Calculation | Math operations, PKR billing formula |
| **6** | Sehar Tariq | Report & File Handling | File I/O, Time functions, Receipt generation |

---

## 🛠️ How to Compile & Run

### On Windows (Git Bash):
```bash
gcc main.c user_input.c emergency_type.c priority_calc.c cost_calc.c report.c -o emergency_response.exe
./emergency_response.exe
```

### On Linux/Mac:
```bash
gcc main.c user_input.c emergency_type.c priority_calc.c cost_calc.c report.c -o emergency_response
./emergency_response
```

---

## 🔄 Workflow

1. User runs program
2. Main menu shows 3 options
3. User selects "Create New Emergency Alert"
4. System collects: Name → Phone → Address → Emergency Type → Distance
5. System calculates: Priority → Cost
6. System generates receipt and saves to file
7. User returns to menu

---

## 💰 Pricing Formula
Total Cost = Base Tax (300 PKR) + (Distance × Rate Per KM) + Priority Surcharge
Rate Per KM: 95 PKR
Priority Surcharges:

CRITICAL (≤5km): +150 PKR
URGENT (5-15km): +50 PKR
STANDARD (>15km): +0 PKR


---

## 📝 Sample Output
Name     : Ashhad
Contact  : 0340-2802910
Location : Karachi, Sindh
Service  : Medical / Ambulance
Distance : 8.5 KM
Priority : URGENT
Total Payable: Rs. 1057.50 (PKR)

---

## 🎓 C Concepts Used

- **Structures**: Emergency struct with multiple data types
- **Pointers**: Call by reference (&emg)
- **Arrays**: 2D arrays for emergency types
- **Loops**: Do-while, For, While
- **Conditionals**: If-else statements
- **Functions**: Modular programming with 6 separate functions
- **File I/O**: fopen, fprintf, fclose
- **Strings**: scanf with %[^\n]
- **Time**: time.h for timestamps

---
## 📝 How Each Member Contributed

**Member 1 (Nayab Sajid)** - Structures & Main Menu
- Defined `struct Emergency` with all required fields
- Created main() with do-while loop for continuous menu
- Implemented switch case for user choices
- Used pointers implicitly in scanf (&choice)

**Member 2 (Rabia Aziz)** - User Input
- Collected: Name, Phone, Address
- Used scanf with %[^\n] to accept spaces in strings
- Implemented call by reference (&e) to modify struct
- Buffer management with getchar()

**Member 3 (Muhammad Ashhad)** - Emergency Classification
- Created 2D array of emergency types
- Implemented for loop to display options
- Added while loop for input validation
- Used array indexing (typeIndex)

**Member 4 (Prishey Khan)** - Priority Calculation
- Took distance as float input
- Used if-else-if chain for priority levels
- Critical: distance ≤ 5km
- Urgent: distance 5-15km
- Standard: distance > 15km

**Member 5 (Shakila)** - Cost Calculation
- Implemented billing formula
- Base tax = 300 PKR (fixed)
- Distance cost = distance × 95 PKR
- Priority surcharge: Critical +150, Urgent +50, Standard 0
- Used float arithmetic for precision

**Member 6 (Sehar Tariq)** - Report & File Handling
- Used fopen() in append mode to log all emergencies
- Used fprintf() to write formatted data
- Used time.h to generate timestamps
- Used call by value (report receives struct copy)
- Generated official receipt format

---
## ✅ Testing Checklist

- [ ] All 6 .c files compile without errors
- [ ] Main menu displays correctly
- [ ] Can create emergency alert
- [ ] User info input accepts spaces
- [ ] All 4 emergency types selectable
- [ ] Distance input calculates priority correctly
- [ ] Cost calculation matches formula
- [ ] Receipt displays all information
- [ ] Report saved to pkr_emergency_record.txt
- [ ] Can return to menu and create new alerts
- [ ] Exit option works properly

---

## 📚 Language & Tools

- **Language**: C (Simple, Standard C - ANSI C)
- **Compiler**: GCC
- **Version Control**: GitHub
- **Semester**: 1st Semester BSCS
- **Lines of Code**: ~250 lines
- **Modules**: 6 separate .c files
- **University**: Benazir Bhutto Shaheed Univerity, Lyari

---

## 🎯 Learning Outcomes

This project teaches:
1. ✅ Modular programming (separate functions)
2. ✅ Data structures (structs)
3. ✅ Pointers and references
4. ✅ Arrays and loops
5. ✅ File input/output
6. ✅ Team collaboration on GitHub
7. ✅ Real-world problem solving (emergency system)
8. ✅ Business logic (billing calculations)

---
**Made with ❤️ by BSCS Semester 1 Students**
