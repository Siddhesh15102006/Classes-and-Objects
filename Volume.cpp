// Siddhesh
// 25070123505
// A3

#include <iostream>
using namespace std;
class Cube {
public:
    float side;

    float volume() {
        return side * side * side;
    }
    
};
int main() {
    Cube c1, c2;

    cout << "Enter side length of Cube 1: ";
    cin >> c1.side;

    cout << "Enter side length of Cube 2: ";
    cin >> c2.side;
    cout << endl;
    if(c1.side <= 0 || c2.side <= 0) {
        cout << "Side length must be a positive number." << endl;
        return 0;
    }
    float v1 = c1.volume();
    float v2 = c2.volume();
    cout << "Volume of Cube 1: " << v1 << endl;
    cout << "Volume of Cube 2: " << v2 << endl;
return 0;
}

Output :-
Enter side length of Cube 1: 20
Enter side length of Cube 2: 20

Volume of Cube 1: 8000
Volume of Cube 2: 8000


=== Code Execution Successful ===  
