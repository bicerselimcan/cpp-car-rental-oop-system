# Car Rental System: Object-Oriented Programming in C++ (CENG241)

This repository contains a full object-oriented C++ software development project completed during my **2nd-year Computer Engineering** studies at Çankaya University (January 2024).

The project implements a complete **Car Rental Management System** in C++, demonstrating key Object-Oriented Programming (OOP) paradigms: class inheritance, polymorphism, encapsulation, header/implementation file separation (`.h`/`.cpp`), and object composition.

## Objectives
* **OOP Paradigms:** Apply Encapsulation, Inheritance, Polymorphism, and Composition in C++.
* **Class Hierarchy:** Construct base classes (`Vehicle`) and derived specialized classes (`Car`).
* **Modular Header Separation:** Separate class declarations (`.h`) from execution logic (`.cpp`) across domain entities (`Car`, `Vehicle`, `City`, `Date`, `Personel`, `Price`, `Place`).
* **Console Control System:** Build a CLI driver application (`Project.cpp`) for vehicle inventory management, personnel tracking, reservation pricing, and location dispatching.

## Methodology & Architecture

1. **Domain Entity Design:**
   * `Vehicle` & `Car`: Base and derived class hierarchy encapsulating vehicle attributes, daily rates, and availability.
   * `Date` & `Price`: Utility classes handling calendar arithmetic and rental fee computations.
   * `Personel` & `City` & `Place`: Location and staff management structures supporting dispatch workflows.
2. **Polymorphic Operations:** Implemented virtual member functions enabling dynamic binding during rental calculations.
3. **Comprehensive Documentation:** Produced a detailed PDF project report (`CAR RENTAL SYSTEM - REPORT.pdf`) documenting UML diagrams, class relationships, and execution flow charts.

## Evaluation & Key Retrospective Learnings

* **Encapsulation & Interface Safety:** Keeping member variables private (`m_dailyRate`, `m_plate`) while exposing controlled getters/setters preserves domain invariant integrity.
* **Separation of Concerns:** Splitting domain models into isolated header/implementation pairs speeds up compilation and simplifies debugging.

## Repository Structure

```text
├── CAR RENTAL SYSTEM - REPORT.pdf           # Primary project architectural report
├── CENG 241.pdf                              # Course syllabus & guidelines
├── CENG241PROJE.docx                         # Project specification proposal
├── CENG241PROJEchart.docx                    # Class hierarchy flowcharts
├── CENG-241 Midterm Notları...html           # Midterm exam reference notes
├── Project.cpp                               # Main application entry point / driver
├── Vehicle.h / Vehicle.cpp                   # Base vehicle class declaration & implementation
├── Car.h / Car.cpp                           # Derived car class declaration & implementation
├── City.h / City.cpp                         # City location domain entity
├── Date.h / Date.cpp                         # Calendar & rental duration utility
├── Personel.h / Personel.cpp                 # Staff & employee domain entity
├── Place.h / Place.cpp                       # Rental office location domain entity
├── Price.h / Price.cpp                       # Pricing & invoice calculation engine
└── readme.md                                 # Project documentation
```

## Setup & How to Run

1. **Prerequisites:** Install a C++ compiler supporting C++11 or higher (G++, Clang++).
2. **Compilation:** Link and compile all `.cpp` files into a single binary executable:
   ```bash
   make
   ```
3. **Execution:** Launch the interactive terminal application:
   ```bash
   make clean && make
   ./CarRentalSystem
   ```

## Tech Stack
* **Language:** C++ (C++11 Standard)
* **Design Patterns:** Object-Oriented Programming (OOP), Inheritance, Polymorphism, Encapsulation
* **Compiler:** G++ / Clang++

## Authors & Academic Context
Developed for **CENG241** during **2nd-Year Computer Engineering** studies at Çankaya University (January 2024).

* **Author:** Muhammed Selimcan Biçer
* **Academic Level:** 2nd Year (Sophomore)
* **Completion Date:** January 2024
