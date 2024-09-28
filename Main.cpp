//COMSC-210 | Lab 14: Color Class | Anthony R. Sarabia


#include <iostream>
using namespace std;

// ASSIGNMENT INSTRUCTIONS!!!!
//Create a Color class that has as its private member variables three integers representing the red, green, and blue values of that color.
//Code normal setter& getter member functions.Also code a member print() method to print the object data.
//In main(), create several Color objects, populate them with data, and output their values to the console in neatly 
//- formatted output using the object's print() method.
//Commit your code every ten minutes while working.Set a timer.


//STEP #1: Let's create that color class

class Color {
	//private member variables three ints representing red, green, blue
private:
	int red;
	int green;
	int blue;

public:
	//Now, let's do those normal setters & getters, as well as the member print() method
	
	Color(int r = 0, int g = 0, int b = 0);  //Construtor

	void setRed(int r); //SETTERS
	void setGreen(int g);
	void setBlue(int b);

	int getRed() const; // GETTERS
	int getGreen() const;
	int getBlue() const;

	void print() const; // print() method
};