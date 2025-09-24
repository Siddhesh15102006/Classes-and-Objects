// Siddhesh Gajare
// 25070123505
// A3

#include<iostream>
using namespace std;
class calc {
    public:
    float a,b;
    float add(){
        return a+b;
    }
    float subtract(){
        return a-b;
    }
    float multiply(){
        return a*b;
    }
    float divide(){
        return a/b;
    }
};
int main(){
    
    calc c1;
    cout<<"Enter the Number A : ";
    cin>>c1.a;
    cout<<"Enter the Number B : ";
    cin>>c1.b;
    while(1)
    {
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;

    int choice;
    cout<<"enter the choice : ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Sum = "<<c1.add()<<endl;
        break;
        case 2:
        cout<<"difference = "<<c1.subtract()<<endl;
        break;
        case 3:
        cout<<"product = "<<c1.multiply()<<endl;
        break;
        case 4:
        cout<<"divide = "<<c1.divide()<<endl;
        break;
        
    }
}
}

Output :- 
Enter the Number A : 5
Enter the Number B : 5
1.Add
2.Subtract
3.Multiply
4.Divide
enter the choice : 3
product = 25
