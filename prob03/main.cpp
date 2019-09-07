// This program calculates a person's height in feet (') and inches (").

#include<iostream>
int main()
{
// variables to calculate height in feet and inches

 int inches;


// display  the height in feet amd inches

std::cout << "Please enter the person's height in inches\n";
std::cin >> inches;

// once i've got the inches, i write the variables used to convert into height in feet and inches
int heightFeet = inches / 12;
int heightInches = inches % 12;

std::cout << "That person is "<< heightFeet<<"\'"<<heightInches<<"\"";







  /* code */
  return 0;
}
