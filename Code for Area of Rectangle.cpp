// Siddhesh
// 25070123505
// A3

#include<iostream>
using namespace std;

 class Rectangle
 {
        public:
        float width;
        float length;
        void area(){
           float area=length*width;
           cout<<"Area of Rectange is:"<<area<<endl;
} 
}; 
 
int main(){
Rectangle R1;
R1.length=0;
R1.width=0;
cout<<"Length of Rectangle is :- ";
cin>>R1.length;
cout<<"Width of Rectangle is :- ";
cin>>R1.width; 
 
if(R1.length==R1.width){
    cout<<"It is a Square ! ";
}else{
   R1.area();
}
    return 0;
}

Output :-
Length of Rectangle is :- 20
Width of Rectangle is :- 20
It is a Square ! 

=== Code Execution Successful ===

Length of Rectangle is :- 30
Width of Rectangle is :- 50
Area of Rectange is:1500


=== Code Execution Successful ===
