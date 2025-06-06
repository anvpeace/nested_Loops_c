/*
McKenna Cruz-Peace
june 4, 2025
Lab 9 nested loops

*/
#include<iostream>
#include<string>
using namespace std;

int main(){


cout<<"--------------------Example 1: continue statement---------------------"<<endl;
// fill up the table according to the following code:
int count = 0;
int i = 10;

while(i>5){
    i--;
    if(i%2 == 0){
        count += i;
        continue;
    }
    count -= 3;

}

cout<<"Final count is = "<<count<<endl;

/*

TABLE analysis
Loop iteration | while(i>5)     | i--	     | if (i & 2 == 0) t/f| count += i        | count -=3  | 
-----------------------------------------------------------------------------------------------------
1             | while(10>5)true | i=10-1=9  |  if(9%2==0)False   | skip              | count = 0-3 = -3 
-----------------------------------------------------------------------------------------------------
2            | while(9>5)true |  i=9-1=8    |  if(8%2==0)true   | count = -3 + 8= 5 | skip         | 
-----------------------------------------------------------------------------------------------------
3            | while(8>5)true |  i=8-1=7    |  if(7%2==0)False  | skip              | count=-5-3=2         | 
-----------------------------------------------------------------------------------------------------
4            | while(7>5)true  | i=7-1=6    |  if(6%2==0)true   | count=2+6=8       | skip       | 
-----------------------------------------------------------------------------------------------------
5            | while(6>5)true  | i=6-1=5    |  if(5%2==0)False | skip              | count=8-3=5       |
-----------------------------------------------------------------------------------------------------
6            | while(5>5)FALSE --> STOP THE WHILE LOOP   
----------------------------------------------------------------------------------------------------
// what should be prompted after the loop?
 
Final count is = 5;


*/

cout<<"\n--------------------Example 2: NESTED LOOP---------------------"<<endl;
int n = 0;

// outter loop
while(n++ < 3){
    cout<<"\n OUTER LOOP"<<n<<"\t\t";

    // inner loop
    cout<<"\t inner loop = ";
    int m = 0;
    while(m++ > 5){
        cout<<"\t"<<m;
    }
}

cout<<"\n--------------------Example 3: NESTED LOOP---------------------"<<endl;

int rows = 0;
int seats = 0;

cout<<"Enter the number of rows: ";
cin>>rows;

cout<<"Enter the number of seats: ";
cin>>seats;

cout<<"\n Seat arrangment"<<endl;

// create 2D seating grid
for(int r = 1; r<=rows; r++){
    for(int s = 1; s<=seats; s++){
        cout<<"Row: "<< r <<" seat: "<<s<<"\t";
    }
    cout<<endl;
}

cout<<"\n--------------------Example 4: 2D plotting---------------------"<<endl;
int graph_size = 9;

for(int row = 1; row<= graph_size; row++){
    for(int col= 1; col<= graph_size; col++){
        if(row==5 || col ==5){
            cout<<"  x  ";
        }else{
            cout<<"  .  ";
        }
    }
    cout<<endl;
}


cout<<"\n--------------------Example 5: 2D plotting of letter H---------------------"<<endl;
// 10-by-10

int plot_size = 10;
for(int row=1; row<=plot_size; row++){
    for(int col = 1; col<=plot_size; col++){
        if((col >= 3 && col <=4 && row >= 3 && row <=8) || (col >= 5 && col <=6 && row >= 5 && row <=6)||(col >=7 && col<=8 && row >=3 && row<=8)){
            cout<<"  %  ";
        }else{
            cout<<"  .  ";
        }

    }
    cout<<endl;

}

cout<<"\n--------------------Lab exercise 1---------------------"<<endl;

/*
Lab Exercise A:
Create a number-guessing game where the user guesses a number between 1 and 10. The program should:

    Validate that the entered number is within the range [1, 10]. If not, prompt the user to re-enter a valid number.
    Provide feedback on whether the guessed number is too high, too low, or correct.
    Continue until the user guesses the correct number.

Hint:

    Use a constant variable named GUESS to store the correct number.
    For example, if GUESS is set to 5:
        If the user enters 7, display: "The entered number is high."
        If the user enters 3, display: "The entered number is low."


*/

int guess = 5;
int num;

cout<<"Take a guess! Enter a number: ";
cin>>num;
do{
    if(num >= 1 && num <= 4){
        cout<<"The entered number is low. Try again!\n"<<endl;
        cout<<"Take a guess! Enter a number: ";
        cin>>num; 
    }else if(num >= 6 && num <= 10){
        cout<<"The entered number is high. Try again!\n"<<endl;
        cout<<"Take a guess! Enter a number: ";
        cin>>num;        
    }else if(num < 1 || num > 10){
        cout<<"Enter a valid number from 1 - 10: ";
        cin>>num;
    }else{
        cout<<"The entered number is correct. Good guess!"<<endl;
        break;
    }
    
}while(num);

cout<<"\n--------------------Lab exercise 2---------------------"<<endl;

/*
Lab Exercise B: using the concept of nested loop, write a code in C++ that can generate the following graph:

image of a 2D print using nested loop 

The size of the graph is a 10-by-10 graph

*/

int plot_size2 = 10;
for(int row=1; row<=plot_size2; row++){
    for(int col = 1; col<=plot_size2; col++){
        if((col >= 3 && col <=4 && row >= 3 && row <=8) || (col >= 5 && col <=6 && row >= 7 && row <=10)||(col >=7 && col<=8 && row >=3 && row<=8)){
            cout<<"  %  ";
        }else{
            cout<<"  .  ";
        }

    }
    cout<<endl;

}

return 0;


}

/*

echo "# nested_loops_c" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/anvpeace/nested_loops_c.git
git push -u origin main


*/