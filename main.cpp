//Student Name:Liam Turnbull
//Teacher: Dr. Tyson McMillan
//Date:11/8/2021

//A program to practice working with multi-dimensional arrays

#include <iostream>
#include <string>





using namespace std;

/*

Research Input data: go to http://www.weather.com (Links to an external site.)
Pick two cities of your choice. Fill in the temperature for the 7 days of this week of both cities. Fill in this text data table, which will be used in your program.
//City_One = 1, City_Two = 2  Replace City_One and City_Two with the names of your cities

//Data Table
//City X,     Day X: High Temp  Low Temp

Cleburne,     Day 1: High Temp  Low Temp
Cleburne,     Day 2: High Temp  Low Temp
Cleburne,     Day 3: High Temp  Low Temp
Cleburne,     Day 4: High Temp  Low Temp
Cleburne,     Day 5: High Temp  Low Temp
Cleburne,     Day 6: High Temp  Low Temp
Cleburne,     Day 7: High Temp  Low Temp

Fort_Worth,   Day 1: High Temp  Low Temp
Fort_Worth,   Day 2: High Temp  Low Temp
Fort_Worth,   Day 3: High Temp  Low Temp
Fort_Worth,   Day 4: High Temp  Low Temp
Fort_Worth,   Day 5: High Temp  Low Temp
Fort_Worth,   Day 6: High Temp  Low Temp
Fort_Worth,   Day 7: High Temp  Low Temp
*/
void display_city(int i);

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
      
      cin >> temperature[i][j];
    }
  }
  cout << "\n\nDisplaying Values:\n";
  // Accessing the values from the temperature array
  for (int i = 0; i < CITY; ++i)
  {
    for(int j = 0; j < WEEK; ++j)
    {
      cout << "City " << i + 1 << ", Day " << j + 1 
      << " = " << temperature[i][j] << endl;
    }
  }
  return 0;
}

//For up to 5 Points Extra Credit
//Expand this program:
//1. Create a one dimensional array, cityOne[7] to store the 7 temperatures of city 1, assume that value 0 represents day 1, 1 represents day 2....
//2. Create a on dimensional array, cityTwo[7] to store the 7 temperatures of city 2 , assume that value 0 represents day 1, 1 represents day 2....
//3. Using a for loop (or nested for loop), feed the data of CityOne[] and CityTwo[] into temperature[i][j], where i is index of the City Number, and j is the index of the temp for the day.
//4. print the results of temperature[i][j]; to the screen.

void display_city(int i)
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