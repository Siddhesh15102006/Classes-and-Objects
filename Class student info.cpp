// Siddhesh
// 25070123505
// A3
#include<iostream>
using namespace std;
class Student {
public:
    string name;
    string branch;
    string subject;
    string year;
    float result;
};
int main(){
    Student s1;
    s1.name = "Siddhesh Gajare";
    s1.branch = "Electronics & Telecomunication Engineering";
    s1.subject = "C++ & Data Structures";
    s1.year = "Second Year";
    s1.result = 5.0;
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl << endl;
    Student s2;
    s2.name = "Amit Pawar";
    s2.branch = "AI&ML Engineering";
    s2.subject = "Python";
    s2.year = "Second Year";
    s2.result = 8.0;
    cout << "Name: " << s2.name << endl;
    cout << "Branch: " << s2.branch << endl;
    cout << "Subject: " << s2.subject << endl;
    cout << "Year: " << s2.year << endl;
    cout << "Result: " << s2.result << endl;
    return 0;
}

Output :-
Name: Siddhesh Gajare
Branch: Electronics & Telecomunication Engineering
Subject: C++ & Data Structures
Year: Second Year
Result: 5

Name: Amit Pawar
Branch: AI&ML Engineering
Subject: Python
Year: Second Year
Result: 8


=== Code Execution Successful ===
