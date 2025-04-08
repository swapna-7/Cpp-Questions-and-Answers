#include<iostream>
using namespace std;

// Multiplication using recursion function
    // int mul(int a,int b){
    //     if (b==0){
    //         return 0;
    //     }
    //     else{
    //         return a+mul(a,b-1);
    //     }
    // }

// Sum of all digits in an integer until we get a single digit using recursion
    // int sum(int n){
    //         if (n==0){
    //             return 0;
    //         }
    //         else if (n%9==0){
    //             return 9;
    //         }
    //         else{
    //             return n%9;
    //         }
    //     }

// Reverse a number using recursion 
    // int rev(int n){
    //         if (n==0){
    //             return 0;
    //         }
    //         else{
    //             cout<<n%10;
    //             return rev(n/10);
    //         }
    //     }

// GCD of 2 numbers using recursion
    // int gcd(int a,int b){
    //     if (b==0){
    //         return a;
    //     }
    //     else{
    //         return gcd(b,a%b);
    //     }
    // }

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

// Print all even numbers from 1 to N using a while loop.
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int i=1;
    // while(i<=n){
    //     if (i%2==0){
    //     cout<<i;
    // }
    //     i++;
    // }

// Multiplication table (skips odd multiples)
    // int n,start;
    // cin>>n>>start;
    // int i=start;
    // while(i<=20){
    //     if(i%2==0){
    //     cout<<n<<"X"<<i<<"="<<n*i<<"\n";
    //     }
    //     i++;
    // }

// Rock Paper Scissors
    // char p1,p2,ch='y';
    // while(ch!='n'){
    //     cout<<"player 1:";
    //     cin>>p1;
    //     cout<<"player 2:";
    //     cin>>p2;
    //     if(p1==p2){
    //         cout<<"draw\n";
    //     }
    //     else{
    //      switch(p1){
    //         case 'r':
    //         if (p2=='s'){
    //             cout<<"p1 wins\n";
    //         }
    //         else{
    //             cout<<"p2 wins\n";
    //         }
    //         break;
    //         case 'p':
    //         if (p2=='r'){
    //             cout<<"p1 wins\n";
    //         }
    //         else{
    //             cout<<"p2 wins\n";
    //         }
    //         break;
    //         case 's':
    //         if (p2=='p'){
    //             cout<<"p1 wins\n";
    //         }
    //         else{
    //             cout<<"p2 wins\n";
    //         }
    //         break;
    //         default:
    //         cout<<"invalid input\n";
    //         break;
    //      }
         
    //     }
    // cout<<"Do you want to play again [y/n]?";
    // cin>>ch;

    // }

// Sum of all numbers in an integer till we get a single digit
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // while (n > 9){
    //     int sum = 0;
    //     while (n != 0){
    //         sum += n % 10;
    //         n /= 10;
    //     }
    //     n = sum;
    // }
    // cout << "Sum of digits: " << n;
                                    // (OR)
    // int n;
    // cin>>n;
    // if (n==0){
    //     cout<<0;
    // }
    // else if (n%9==0){
    //     cout<<9;
    // }
    // else{
    //     cout<<n%9;
    // }
// Prime Number
    // int n;
    // cin>>n;
    // if (n<=1){
    //     cout<<n<<" is not prime";
    // }
    // else{
    //     for (int i=2;i*i<=n;i++){
    //         if (n%i==0){
    //             cout<<n<<" is not prime";
    //             break;
    //         }
    //         else{
    //             cout<<n<<" is prime";
    //         }
    //     }
    // }

// print prime numbers from n1 to n2
    // int n1,n2;
    // cin>>n1>>n2;
    // for (int i=n1;i<=n2;i++){
    //     if (i<=1){
    //         continue;
    //     }
    //     else{
    //         for (int j=2;j*j<=i;j++){
    //             if (i%j==0){
    //                 break;
    //             }
    //             else{
    //                 cout<<i<<" ";
    //             }
    //         }
    //     }
    // }

// Perfect number
    // int n;
    // cin>>n;
    // int sum=0;
    // for (int i=1;i<n;i++){
    //     if (n%i==0){
    //         sum+=i;
    //     }
    // }
    // if (sum==n){
    //     cout<<n<<" is a perfect number";
    // }
    // else{
    //     cout<<n<<" is not a perfect number";
    // }

// Amstrong number
    // int n;
    // cin>>n;
    // int sum=0,temp=n;
    // while (n!=0){
    //     int digit=n%10;
    //     sum+=digit*digit*digit;
    //     n/=10;
    // }
    // if (sum==temp){
    //     cout<<temp<<" is an amstrong number";
    // }
    // else{
    //     cout<<temp<<" is not an amstrong number";
    // }

// Strong number
    // int n;
    // cin>>n;
    // int sum=0,temp=n;
    // while (n!=0){
    //     int digit=n%10;
    //     int fact=1;
    //     for (int i=1;i<=digit;i++){
    //         fact*=i;
    //     }
    //     sum+=fact;
    //     n/=10;
    // }
    // if (sum==temp){
    //     cout<<temp<<" is a strong number";
    // }
    // else{
    //     cout<<temp<<" is not a strong number";
    // }

// Fibonacci
    // int n;
    // cin>>n;
    // int a=0,b=1,c;
    // cout<<a<<" "<<b<<" ";
    // for (int i=2;i<n;i++){
    //     c=a+b;
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    // }
// Fibonacci until sum=n
    // int n;
    // cin>>n;
    // int a=0,b=1,c;
    // cout<<a<<" "<<b<<" ";
    // while (c<=n){
    //     c=a+b;
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    // }

// Print number of days in the given month using array
    // int month,year;
    // cout<<"Enter month and year: "; 
    // cin>>month>>year;
    // int cal[]={31,28,31,30,31,30,31,31,30,31,30,31};
    // if (month==2){
    //     if (year%4==0 && year%100!=0 || year%400==0){
    //         cout<<29;
    //     }
    //     else{
    //         cout<<28;
    //     }
    // }
    // else if (month>=1 && month<=12){
    //     cout<<cal[month-1];
    // }
    // else{
    //     cout<<"Invalid month";
    // }

// Print number of days in the given month using switch case statement
    // int month,year;
    // cout<<"Enter month and year: ";
    // cin>>month>>year;
    // switch(month){
    //     case 1:
    //     case 3:
    //     case 5:
    //     case 7:
    //     case 8:
    //     case 10:
    //     case 12:
    //         cout<<31;
    //         break;
    //     case 4:
    //     case 6:
    //     case 9:
    //     case 11:
    //         cout<<30;
    //         break;       
    //     case 2:
    //         if (year%4==0 && year%100!=0 || year%400==0){
    //             cout<<29;
    //         }
    //         else{
    //             cout<<28;
    //         }
    //         break;
    //     default:
    //         cout<<"Invalid month";
    //         break;
    // }

// Print how many days are present from jan 1st to the given date
    // int day,month,year;
    // cout<<"Enter date, month and year: ";
    // cin>>day>>month>>year;
    // int cal[]={31,28,31,30,31,30,31,31,30,31,30,31};
    // int sum=0;
    // for (int i=0;i<month-1;i++){
    //     sum+=cal[i];
    //     if (month==2 && year%4==0 && year%100!=0 || year%400==0){
    //         sum+=1;
    //     }

    // }
    // sum+=day;
    // cout<<sum;

// Print how many days are present from jan 1st to the given date using switch case statement

// Print the sum between the zeros and return as an array
    // inp: [0,1,4,0,7,1,6,0,1,1,0]
    // op: [5,14,2]
    // int arr[100],n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // cout<<"Enter the elements of array: ";
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int sum=0,count=0;
    // for (int i=0;i<n;i++){
    //     if (arr[i]==0){
    //         if (count!=0){
    //             cout<<sum<<" ";
    //             sum=0;
    //         }
    //         count++;
    //     }
    //     else{
    //         sum+=arr[i];
    //     }
    // }
    // cout<<sum;

// Count number of ones place digits in an array
    // int arr[100],n;
    // cout<<"Enter the size of array: ";
    // cin>>n;
    // cout<<"Enter the elements of array: ";
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int count=0;
    // for (int i=0;i<n;i++){
    //     if (arr[i]%10==1){
    //         count++;
    //     }
    // }
    // cout<<count;

// Sprial matrix

// Multiplication of matrix

// Transpose of matrix

// Reverse a string sentence
    // string s="this is a text";
    // // op="text a is this"
    // string wrd=" ";
    // string rev=" ";
    // for (int i=0;i<s.length();i++){
    //     if (s[i]==' '){
    //         rev=wrd+" "+rev;
    //         wrd=" ";
    //     }
    //     else{
    //         wrd+=s[i];
    //     }
    // }
    // rev=wrd+" "+rev;
    // cout<<rev; 

// Find the length of last word
    // string s="this is a text";
    // int count=0;
    // for (int i=s.length()-1;i>=0;i--){
    //     if (s[i]==' '){
    //         break;
    //     }
    //     count++;
    // }
    // cout<<count;

// Fix bag amounts and when entered amount print no.of coins in bags used
    // int n;
    // cout<<"Enter the amount: ";
    // cin>>n;
    // int bag[8]={1000,500,100,50,10,5,2,1};
    // int count[8]={0};
    // for (int i=0;i<8;i++){
    //     if (n>=bag[i]){
    //         count[i]=n/bag[i];
    //         n=n%bag[i];
    //     }
    // }
    // cout<<"Bags used: ";
    // for (int i=0;i<8;i++){
    //     if (count[i]!=0){
    //         cout<<bag[i]<<"*"<<count[i]<<" ";
    //     }
    // }
    // cout<<endl;

/*Fix number of bags and when entered no.of coins , all the coins must fill 
 all th bags but no bag can have same number of coins */
    // int bags,n;
    // cout<<"Enter the number of bags: ";
    // cin>>bags;
    // cout<<"Enter the number of coins: ";
    // cin>>n;
    // int bag[bags];
    // int 
    
// Multiplication using recursion function
    // int mul(int a,int b){
    //     if (b==0){
    //         return 0;
    //     }
    //     else{
    //         return a+mul(a,b-1);
    //     }
    // }(on top)

    // int a,b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // cout<<mul(a,b);

// Sum of all digits in an integer until we get a single digit using recursion
    // int sum(int n){
    //     if (n==0){
    //         return 0;
    //     }
    //     else if (n%9==0){
    //         return 9;
    //     }
    //     else{
    //         return n%9;
    //     }
    // }(on top)
   
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<sum(n);
    
// Reverse a number using recursion 
    // int rev(int n){
    //     if (n==0){
    //         return 0;
    //     }
    //     else{
    //         cout<<n%10;
    //         return rev(n/10);
    //     }
    // }(on top)
    // int n;
    // cout<<"Enter a number: ";
    // cin>>n;
    // cout<<rev(n);

// Reverse a string using recursion
// Check if the string is palindrome or not
// GCD of 2 numbers using recursion
    // int gcd(int a,int b){
    //     if (b==0){
    //         return a;
    //     }
    //     else{
    //         return gcd(b,a%b);
    //     }
    // }(on top)
    // int a,b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    // cout<<gcd(a,b);

// Pointers
    int *p;
    int a[5]={1,2,3,4,5};
    p=&a[0];
    for (int i=0;i<=4;i++){
        cout<<*(p+i)<<" ";
    }
    cout<<endl;


    return 0;
}


