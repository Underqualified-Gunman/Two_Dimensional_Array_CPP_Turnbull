//Student Name:Liam Turnbull
//Teacher: Dr. Tyson McMillan
//Date:11/8/2021

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <string>





using namespace std;



//functions protos
void display_city(int i); // this one takes i and does simple branching path for determining whether to say Cleburne or fort worth inside the for loops

int main()
{
  const int CITY = 2;
  const int WEEK = 7;
  int temperature[CITY][WEEK];

  //Note your input data from the above
  cout << "Enter all temperature for a week of Cleburne and then Fort Worth. \n";
  // Inserting the values into the temperature array
  // note for every dimension of the array you need a for loop.
  // 2 dimensions = 2 for loops
  for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {
      display_city(i);
      cout << ", Day " << j + 1 << " : ";
      //floats break this cin >> temperature[i][j];



    }
  }
  cout << "\n\nDisplaying Values:\n";
  // Accessing the values from the temperature array
  for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {
      display_city(i);
      cout << ", Day " << j + 1 
      << " = " << temperature[i][j] << endl;
    }
  }
  return 0;
}

//For up to 5 Points Extra Credit
//Expand this program:
//1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
//2. Create a one dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
//3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.
//4. print the results of temperature[i][j]; to the screen.

void display_city(int i)
// takes i and gets the value of one or 0 to determine whether to out put cleburne or fort worth does not have a endl inside
{
  if(i == 0)
  {
    cout << "Cleburne ";
  }
  else if (i==1)
  {
    cout << "Fort Worth ";
  }
}


/*

Research Input data: go to http://www.weather.com (Links to an external site.)
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.
//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table
//City X,     Day X: Temp

Cleburne,     Day 1: 59
Cleburne,     Day 2: 49
Cleburne,     Day 3: 58
Cleburne,     Day 4: 63
Cleburne,     Day 5: 69
Cleburne,     Day 6: 75
Cleburne,     Day 7: 74

Fort_Worth,   Day 1: 56
Fort_Worth,   Day 2: 48
Fort_Worth,   Day 3: 58
Fort_Worth,   Day 4: 63
Fort_Worth,   Day 5: 69
Fort_Worth,   Day 6: 76
Fort_Worth,   Day 7: 71
*/