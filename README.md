# CPP03
# README: C++ Exercises - Inheritance and Class Design

This README provides an explanation of the theory and concepts covered in the three C++ exercises related to class design, inheritance, and polymorphism. The exercises involve building a series of robot-like classes, demonstrating object-oriented programming principles such as constructors, destructors, inheritance, and method overriding.

---

## **Exercise 00: Aaaaand... OPEN!**

### **Concepts Covered**:
- **Class Design**: This exercise introduces the concept of designing a basic class (`ClapTrap`) with private attributes and public member functions.
- **Attributes and Methods**: You'll learn how to set up attributes such as health points (`Hit points`), energy points, and attack damage.
- **Constructor and Destructor**: You will implement the constructor and destructor to initialize and clean up objects. Both should print messages for clarity.
- **Encapsulation**: The `ClapTrap` class will encapsulate behavior such as attacking, taking damage, and repairing itself, while maintaining control over its attributes (like hit points and energy points).
- **Conditionals**: Implementing checks to ensure that actions (such as attacking or repairing) only occur if there are sufficient resources (health and energy).

### **Explanation**:
In this exercise, you will create the `ClapTrap` class that represents a basic robot. The class has attributes for hit points, energy points, and attack damage, and it can attack, take damage, and repair itself. Each of these actions costs energy, and there are conditions to ensure that the robot can only perform actions when it has the required hit and energy points. You will print messages whenever the robot performs an action, such as attacking or repairing, to make the process more interactive.

---

## **Exercise 01: Serena, my love!**

### **Concepts Covered**:
- **Inheritance**: This exercise teaches how to create a derived class (`ScavTrap`) from a base class (`ClapTrap`). The derived class will inherit all attributes and methods of the base class and can override them or add new functionality.
- **Constructor and Destructor Chaining**: When creating an object of a derived class, the constructor of the base class is called first. Likewise, when an object is destroyed, the derived class destructor is called last. Understanding this chaining order is important in object-oriented programming.
- **Method Overriding**: You will override the `attack()` function in the derived class (`ScavTrap`) to display a different message. Overriding allows derived classes to change or extend the functionality of base class methods.

### **Explanation**:
In this exercise, you will create a new class called `ScavTrap` that is derived from `ClapTrap`. `ScavTrap` will inherit the attributes of `ClapTrap` but with modified values for hit points, energy points, and attack damage. You will override the `attack()` method to print a different message, showing the specific behavior of `ScavTrap`. Additionally, the `ScavTrap` class will have its own special ability, `guardGate()`, which puts the robot in "Gatekeeper mode."

---

## **Exercise 02: Repetitive work**

### **Concepts Covered**:
- **Multiple Levels of Inheritance**: This exercise introduces multiple inheritance layers. You will extend `ScavTrap` to create a further subclass, `FragTrap`.
- **Constructor and Destructor Chaining**: Similar to `ScavTrap`, `FragTrap` will inherit from `ClapTrap`, and proper constructor/destructor chaining must be demonstrated.
- **Method Overriding**: You will override the `attack()` method again in the `FragTrap` class to change the message printed during an attack.
- **Special Abilities**: `FragTrap` will have a new special ability, `highFivesGuys()`, which prints a positive message, reflecting the robot's unique functionality.
- **Polymorphism**: The ability to create objects of different classes (`ClapTrap`, `ScavTrap`, `FragTrap`) and use them interchangeably.

### **Explanation**:
In this exercise, you will create another derived class, `FragTrap`, from `ClapTrap`. Just like `ScavTrap`, `FragTrap` will inherit attributes from `ClapTrap` and override the `attack()` function to display a custom message. It will also have different attributes (such as 100 hit points, 100 energy points, and 30 attack damage). The special ability `highFivesGuys()` will be unique to `FragTrap`, allowing the robot to ask for high fives. You will also test the construction and destruction process to ensure proper chaining and that the correct messages are printed.

---

## **Conclusion**

These exercises provide a hands-on introduction to object-oriented programming principles in C++, including class design, inheritance, method overriding, and constructor/destructor chaining. By creating a series of robot-like classes (`ClapTrap`, `ScavTrap`, `FragTrap`), you will gain experience with polymorphism and learn how to structure your code in a modular and reusable way. You'll also understand how to extend a base class and customize its behavior while preserving the shared functionality through inheritance.

