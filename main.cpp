#include<iostream>
using namespace std;
int main()
{

// This program checks if a number is even or odd using the ternary operator.
    // int n;
    // cin>>n;
    // n%2== 0 ? cout << "Even" : cout << "Odd";
    // n&2== 0 ? cout << "Even" : cout << "Odd";

// Perfect power of 2
    // int n;
    // cin>>n;
    // n & (n-1)==0 ? cout << "Not a perfect power of 2" : cout << "Perfect power of 2"; 

// Maximum of 3 numbers
    // int a,b,c;
    // cin>>a>>b>>c;
    // if (a>b && a>c){
    //     cout <<a<<" is the greatest";
    // }
    // else if (b>a && b>c){
    //     cout <<b<<" is the greatest";
    // }
    // else if (c>a && c>b){
    //     cout <<c<<" is the greatest";
    // }
    // else{
    //     cout <<a<<" is the greatest";
    // }

// Maximum of 3 numbers using ternary operator
    // int a,b,c;
    // cin>>a>>b>>c;
    // (a>b && a>c) ? cout <<a<<" is the greatest" : (b>a && b>c) ? cout <<b<<" is the greatest" : cout <<c<<" is the greatest";

// Maximum of 4 numbers
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // if (a>b && a>c && a>d){
    //     cout <<a<<" is the greatest";
    // }
    // else if (b>a && b>c && b>d){
    //     cout <<b<<" is the greatest";
    // }
    // else if (c>a && c>b && c>d){
    //     cout <<c<<" is the greatest";
    // }
    // else if (d>a && d>b && d>c){
    //     cout <<d<<" is the greatest";
    // }
    // else{
    //     cout <<a<<" is the greatest";
    // }

// Maximum of 4 numbers using ternary operator
    // int a,b,c,d;
    // cin>>a>>b>>c>>d;
    // (a>b && a>c && a>d) ? cout <<a<<" is the greatest" : (b>a && b>c && b>d) ? cout <<b<<" is the greatest" : (c>a && c>b && c>d)? cout <<c<<" is the greatest": cout <<d<<" is the greatest";

// Lower case to upper case
    // char ch;
    // cin>>ch;
    // if (ch >= 'a' && ch <= 'z'){
    //     cout << char(ch - 32);
    // }
    // else if (ch >= 'A' && ch <= 'Z'){
    //     cout << char(ch + 32);
    // }
    // else{
    //     cout << "Invalid character";
    // }

// Leap year
    // int year;
    // cin>>year;
    // if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    //     cout << year << " is a leap year";
    // }
    // else{
    //     cout << year << " is not a leap year";
    // }

//  Grade of student using switch case statement
    // int marks;
    // cout << "Enter the marks of student: ";
    // cin >> marks;
    // switch (marks/10)
    // {
    //     case 10:
    //     case 9:
    //         cout << "Grade A";
    //         break;
    //     case 8:
    //         cout << "Grade B";
    //         break;
    //     case 7: 
    //         cout << "Grade C";
    //         break;
    //     case 6:
    //         cout << "Grade D";
    //         break;
    //     case 5:
    //         cout << "Grade E";
    //         break;
    //     default:
    //         cout << "Grade F";
    //         break;
    // }
       
// Given number is positive or negative using if else statement
    // int n;
    // cin>>n;
    // if (n > 0){
    //     cout << n << " is positive";
    // }
    // else if (n < 0){
    //     cout << n << " is negative";
    // }
    // else{
    //     cout << n << " is zero";
    // }

// Given number is positive or negative using switch case statement
    // int n;
    // cout << "Enter a number: ";
    // cin>>n;

    // switch (n > 0)
    // {
    //     case 1:
    //         cout << n << " is positive";
    //         break;
    //     case 0:
    //         switch (n < 0)
    //         {
    //             case 1:
    //                 cout << n << " is negative";
    //                 break;
    //             case 0:
    //                 cout << n << " is zero";
    //                 break;
    //         }
    //         break;
    //     default:
    //         cout << "Invalid input";
    //         break;
      
    // } 
                                     // (or)
    // 
    
// Choosing an arithmetic operation using switch case statement
    // int a,b;
    // char op;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Enter an operator (+, -, *, /): ";
    // cin >> op;
    // switch (op)
    // {
    //     case '+':
    //         cout << "Result: " << a + b;
    //         break;
    //     case '-':
    //         cout << "Result: " << a - b;
    //         break;
    //     case '*':
    //         cout << "Result: " << a * b;
    //         break;
    //     case '/':
    //         if (b != 0)
    //             cout << "Result: " << a / b;
    //         else
    //             cout << "Division by zero is not allowed";
    //         break;
    //     default:
    //         cout << "Invalid operator";
    //         break;
    // }

// Swaping two numbers using bitwise XOR operator
    // int a,b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // cout << "After swapping: a = " << a << ", b = " << b << endl;

// Swaping two numbers using addition and subtraction
    // int a,b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout << "After swapping: a = " << a << ", b = " << b << endl;

// Swaping two numbers using multiplication and division
    // int a,b;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // a = a * b;
    // b = a / b;
    // a = a / b;
    // cout << "After swapping: a = " << a << ", b = " << b << endl;

// Swaping two numbers using temporary variable
    // int a,b,temp;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // temp = a;
    // a = b;
    // b = temp;
    // cout << "After swapping: a = " << a << ", b = " << b << endl;

// Swaping two numbers using pointers
    // int a,b,temp;
    // cout << "Enter two numbers: ";
    // cin >> a >> b;
    // cout << "Before swapping: a = " << a << ", b = " << b << endl;
    // int *p1 = &a;
    // int *p2 = &b;
    // temp = *p1;
    // *p1 = *p2;
    // *p2 = temp;
    // cout << "After swapping: a = " << a << ", b = " << b << endl;

// Check if given character is vowel or consonant
    // char ch;
    // cout << "Enter a character: ";
    // cin >> ch;
    // if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
    //     cout << ch << " is a vowel";
    // }
    // else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
    //     cout << ch << " is a consonant";
    // }
    // else{
    //     cout << "Invalid character";
    // }
// Check if given character is vowel or consonant using switch case statement
        // char ch;
        // cout << "Enter a character: ";
        // cin >> ch;
        // if ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        //     switch(ch){
        //         case 'a':
        //         case 'e':
        //         case 'i':
        //         case 'o':
        //         case 'u':
        //         case 'A':
        //         case 'E':
        //         case 'I':
        //         case 'O':
        //         case 'U':
        //             cout<<"Vowel";
        //         default:
        //             cout<<"consonant";
        //         }
        //     }

// Classify a triangle based on its sides
    // int a,b,c;
    // cout << "Enter the sides of the triangle: ";
    // cin >> a >> b >> c;
    // if (a == b && b == c){
    //     cout << "Equilateral triangle";
    // }
    // else if (a == b || b == c || a == c){
    //     cout << "Isosceles triangle";
    // }
    // else{
    //     cout << "Scalene triangle";
    // }

//  


    return 0;
}

