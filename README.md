# 🚁 Drone Package Delivery System

**Course:** Software Quality Engineering (SQE)  
**Lab:** Lab #13 — Software Configuration Management (SCM) Plan  
**University:** Riphah International University — Faculty of Computing (WISH)  
**Tool Used:** GitHub (Version Control)

---

## 📋 Project Description

A company uses drones to deliver packages. This system manages:
- **Drone Routes** — flight algorithm for navigation
- **Delivery Status** — real-time tracking of each package
- **Package Tracking** — assignment of packages to drones

Multiple developers work on updating flight algorithms and delivery features. **SCM is applied using GitHub** to avoid conflicts and manage updates efficiently.

---

## 📁 Project Structure

```
drone-delivery-system/
│
├── main.cpp                    ← Entry point of the system
│
├── src/
│   ├── flight_algorithm.h      ← Header: drone route planning
│   ├── flight_algorithm.cpp    ← Implementation: route calculation
│   ├── delivery_tracker.h      ← Header: delivery status tracking
│   ├── delivery_tracker.cpp    ← Implementation: status updates
│   ├── package_manager.h       ← Header: package assignment
│   └── package_manager.cpp     ← Implementation: package management
│
├── tests/
│   └── test_cases.txt          ← Manual test cases for all modules
│
└── docs/
    └── SRS.md                  ← Software Requirements Specification
```

---

## ⚙️ Configuration Items (SCM)

| # | Configuration Item | Type | Description |
|---|---|---|---|
| 1 | `main.cpp` | Source Code | Main entry point |
| 2 | `flight_algorithm.cpp` | Source Code | Route planning logic |
| 3 | `delivery_tracker.cpp` | Source Code | Real-time status updates |
| 4 | `package_manager.cpp` | Source Code | Package assignment |
| 5 | `SRS.md` | Document | Requirements specification |
| 6 | `test_cases.txt` | Test Artifact | Manual test cases |
| 7 | `README.md` | Documentation | Project overview |

---

## 🔁 SCM Lifecycle — GitHub Mapping

| SCM Phase | GitHub Activity |
|---|---|
| Configuration Identification | Repository created, files named and organized |
| Version Control | Initial commit = v1.0 |
| Change Control | Code modified + commit message = v1.1 |
| Status Accounting | Commit history with hash, author, date |
| Configuration Audit | Code review after each commit |
| Configuration Release | Final committed version = deployment ready |

---

## 🔧 How to Compile and Run

```bash
g++ main.cpp src/flight_algorithm.cpp src/delivery_tracker.cpp src/package_manager.cpp -o drone_system
./drone_system
```

---

## 📌 Version History

| Version | Commit Message | Change |
|---|---|---|
| v1.0 | Initial commit — added main.cpp | First working version |
| v1.1 | Updated drone ID and status | Feature update |
| v1.2 | Updated flight algorithm | Performance improvement |

---

## 👨‍💻 Contributors

- Developer Team — Riphah International University
- Supervised by: Ma'am Shumaila Iqbal
- Lab Designer: Miss Amber Khalil
