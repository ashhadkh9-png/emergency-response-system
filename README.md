# 🚨 Emergency Response System
**BSCS Semester 1 — Group Project**  
Console Application written in C

---

## 📖 About
A console-based Emergency Response System that helps users report
emergencies, calculates priority levels and response costs, and
saves a full report to file.

---

## ✨ Features
- Collect user info (name, phone, address)
- Select emergency type: Ambulance, Fire Brigade, Police, Disaster Alert
- Enter distance to location
- Auto-calculate priority (Critical / High / Medium / Low)
- Calculate cost based on emergency type + distance
- Generate and save a full response report

---

## 👨‍💻 Team Members

| Name | Role |
|---|---|
| Muhammad Ashhad | Main Menu, Report & File Saving, GitHub |
| Shakila | User Info Input |
| Rabia Aziz | Emergency Type Selection |
| Nayab Sajid | Distance Input & Priority Calculation |
| Sehar Tariq | Cost Calculation |
| Prishey Khan | Console UI & Graphics |

---

## 🛠️ How to Compile & Run

```bash
gcc main.c user.c emergency.c cost.c report.c ui.c -o emergency_response
./emergency_response
```

On Windows:
```bash
gcc main.c user.c emergency.c cost.c report.c ui.c -o emergency_response.exe
emergency_response.exe
```

---

## 📁 File Structure

```
emergency-response/
├── main.c         → Main menu and program flow
├── emergency.h    → Shared structs and declarations
├── user.c         → User info input
├── emergency.c    → Emergency selection, distance, priority
├── cost.c         → Cost calculation
├── report.c       → Final report display and file saving
├── ui.c           → Console graphics and colors
└── reports.txt    → Auto-generated saved reports
```

---

## 🚨 Emergency Types & Costs

| Type | Base Cost | Per KM |
|---|---|---|
| 🚑 Ambulance | PKR 500 | PKR 80/km |
| 🔥 Fire Brigade | PKR 1000 | PKR 100/km |
| 👮 Police Help | PKR 300 | PKR 50/km |
| 🌪️ Disaster Alert | PKR 2000 | PKR 150/km |

---

## 📚 Language & Tools
- Language: C
- Compiler: GCC
- Version Control: GitHub
- Semester: 1st Semester BSCS
