---
# 🧪 Experiment 11 :- Classes and Objects in C++

---

➕ Q1. Calculator
✅ Aim

To implement a simple calculator using a class with basic arithmetic operations.

📚 Theory

A class groups related data and functions. Methods inside the class perform operations on data. Objects instantiate classes to use these functionalities.

📐 Syntax
class Calculator {
public:
    int add(int, int);
    int subtract(int, int);
    int multiply(int, int);
    float divide(int, int);
};

🧠 Logic

Define functions for addition, subtraction, multiplication, and division inside the class.

Create an object and call these functions with user inputs.

💻 Code
```cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    float divide(int a, int b) {
        if (b != 0) return (float)a / b;
        else {
            cout << "Error: Division by zero" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Add: " << calc.add(x, y) << endl;
    cout << "Subtract: " << calc.subtract(x, y) << endl;
    cout << "Multiply: " << calc.multiply(x, y) << endl;
    cout << "Divide: " << calc.divide(x, y) << endl;

    return 0;
}
```

📌 Conclusion

Successfully implemented basic arithmetic operations using a class and object.

---

🟦 Q2. Code for Area of Rectangle
✅ Aim

To calculate the area of a rectangle using a class.

📚 Theory

Area of rectangle = length × breadth. Class can encapsulate the dimensions and provide a method to calculate area.

📐 Syntax
class Rectangle {
private:
    float length, breadth;
public:
    void setDimensions(float, float);
    float area();
};

🧠 Logic

Store length and breadth as private members.

Use setter method to assign values.

Calculate area with a member function.

💻 Code
```cpp
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;
public:
    void setDimensions(float l, float b) {
        length = l;
        breadth = b;
    }
    float area() {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    float l, b;
    cout << "Enter length and breadth: ";
    cin >> l >> b;

    rect.setDimensions(l, b);
    cout << "Area of rectangle: " << rect.area() << endl;

    return 0;
}
```

📌 Conclusion

Encapsulated rectangle properties and computed area successfully using a class.

---

👨‍🎓 Q3. Class Student Information
✅ Aim

To create a class that stores and displays student information.

📚 Theory

Classes model real-world entities. Data members store attributes like name, roll number, and marks; member functions handle data input and display.

📐 Syntax
class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void input();
    void display();
};

🧠 Logic

Define data members for student details.

Input data from user.

Display the stored information.

💻 Code
```cpp
#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;
public:
    void input() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display() {
        cout << "\nStudent Details:\n";
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
```

📌 Conclusion

Created a class to input and display student information effectively.

---

🧊 Q4. Volume of a Cuboid
✅ Aim

To calculate the volume of a cuboid using a class.

📚 Theory

Volume = length × breadth × height. A class can encapsulate these dimensions and provide a volume method.

📐 Syntax
class Cuboid {
private:
    float length, breadth, height;
public:
    void setDimensions(float, float, float);
    float volume();
};

🧠 Logic

Store dimensions privately.

Provide methods to set dimensions and compute volume.

💻 Code
```cpp
#include <iostream>
using namespace std;

class Cuboid {
private:
    float length, breadth, height;
public:
    void setDimensions(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }
    float volume() {
        return length * breadth * height;
    }
};

int main() {
    Cuboid c;
    float l, b, h;
    cout << "Enter length, breadth and height: ";
    cin >> l >> b >> h;

    c.setDimensions(l, b, h);
    cout << "Volume of cuboid: " << c.volume() << endl;

    return 0;
}
```

📌 Conclusion

Successfully calculated the volume of a cuboid using class encapsulation.
