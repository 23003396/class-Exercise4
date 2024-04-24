#include <iostream>

using namespace std;

int add_numbers(int num1 , int num2 ){
  int sum = num1 + num2;
  return sum;
 }
 int subtract_num(int num1 , int num2){
   int sub = num1 - num2;
   return sub;
   }
 int multiply_num(int num1,int num2){
   int product = num1 * num2;
   return product;
   }
 double divide_num(int num1,int num2){
    if(num2 != 0 ){
    double div = num1/num2;
    return div;
    }else{
    cout<<"The second integer is zero, divide by zero"<<endl;
    }
    }
 int modulus_num(int num1,int num2){
    int remainder = num1 % num2;
    return remainder;
    }

int main()
{
     char proceed;
  do{
   cout<<"=============================="<<endl;
   cout<<" MENU "<<endl;
   cout<<"=============================="<<endl;
   cout<<" 1. Add "<<endl;
   cout<<" 2. Subtract "<<endl;
   cout<<" 3. Multiply "<<endl;
   cout<<" 4. Divide "<<endl;
   cout<<" 5. Modulus "<<endl;
   cout<<"=============================="<<endl;
   int choice, num1, num2;

   cout<<"Enter your choice(1-5): ";

   cin>> choice;
   cout<<"Enter integer number 1 : ";
   cin>> num1;
   cout<<"Enter integer number 2 : ";
   cin>> num2;
   cout<<"\n"<<endl;



   if ( choice == 1){
        int Results = add_numbers(num1,num2);
        cout<<"Result: "<< Results<<endl;
        cout<<"Press y or Y to continue: ";
        cin>> proceed;
   }
   else if( choice == 2){
    int results = subtract_num(num1,num2);
    cout<<"Result: "<< results<<endl;
    cout<<"Press y or Y to continue: ";
    cin>> proceed;
   }
   else if(choice == 3){
    int results = multiply_num(num1,num2);
    cout<<"Result: "<<results<<endl;
    cout<<"Press y or Y to continue: ";
        cin>> proceed;
   }
   else if(choice == 4){
    double results = divide_num(num1,num2);
     cout<<"Result: "<< results<<endl;
     cout<<"Press y or Y to continue: ";
       cin>> proceed;
   }
   else if(choice == 5){
    int results = modulus_num(num1,num2);
    cout<<"Result: "<< results<<endl;
    cout<<"Press y or Y to continue: ";
    cin>> proceed;
   }
   else{
    cout<<"Please choose the correct choice"<<endl;
    cout<<"Press y or Y to continue: ";
    cin>> proceed;
   }

}while(proceed == 'y' || proceed == 'Y');
}

