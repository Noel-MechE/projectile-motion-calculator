/*
    This program calculates projectile motion
    Written by: Noel A Bobadilla Castillo
    Date: March 2026
*/

//Since we will be accpeting inputs and displaying outputs we must work with the following library 
#include <iostream>
//Since we will also be working with math functions we will using cmath
#include <cmath> //Remeber to convert from degrees to radians
#include <iomanip> //Will be included for the use of setprecision and fixed manipulators

using namespace std;

int main() 
{

    //The program will accept two inputs from the user that being velocity anf angle so let us declare these variables from the user
    double Velocity;
    double Angle;

/*Since most physics values involve decimals we declare
    variables as double to accept decimal numbers.
    Input variables are not given a value because those
    will come from the user. The constants G and PI are
 declared and unchanged throughout the program.*/

    //Since this is a physics based program, we will always work with certain constants and in this case we will work with gravity and pi, therefore let us declare those constants
    const double G = 9.81;
    /*
    Once we have declared variables and the things we will acpet and work with we can now begin to accept such inputs
    */
    
    //User input
    cout<< "What is the launch angle: ";
    cin>> Angle;

    cout<< "What is the intial velocity (m/s): ";
    cin>> Velocity;

    /*Recalling that cmath works with radians our next step 
    before making calulations is to ensure all values are in 
    their proper units
    */
   //Converting angles from degree to radians
   double AngleRad = Angle * (M_PI / 180.0);
    
//Once we have the required data/info we will procced to carry out the calculations
/*
    Time of Flight: derived from vertical position equation y(t) = v0*sin(θ)*t - ½*g*t²
    Setting y(t) = 0 and factoring out t gives two solutions.
    t = 0 is the launch moment so we use the second solution:
    t = (2 * v0 * sin(θ)) / g
*/
double TimeOfFlight = (2 * Velocity * sin(AngleRad)) / G;

/*
    Maximum Height: maximum occurs when vertical velocity equals zero.
    Setting vy(t) = 0 gives t_peak = v0*sin(θ) / g
    Substituting back into position equation and simplifying:
    h = (v0² * sin²(θ)) / (2 * g)
*/
double MaxHeight = ((Velocity * Velocity) * (sin(AngleRad) * sin(AngleRad))) / (2 * G);

/*
    Horizontal Range: substitute Time of Flight into x(t) = v0*cos(θ)*t
    Applying the double angle identity 2*sin(θ)*cos(θ) = sin(2θ):
    R = (v0² * sin(2θ)) / g
*/
double HorizontalRange = ((Velocity * Velocity) * sin(2 * AngleRad)) / G;

//Once we have derived and declared the equations that will be used, we can now display the results, here is where <manip> will come into play 
//Int his case our setprecision will be 3 as I want to keep the results neat while being precise
cout<<fixed<<setprecision(3);
cout<< "\n--- Results ---\n";
cout<< "Time of Flight :"<<TimeOfFlight<<" s\n";
cout<< "Maximum Height" :<<MaxHeight<< "m\n";
cout<< "Horizontal Range:"<<HorizontalRange<<" m\n";

    return 0;
}