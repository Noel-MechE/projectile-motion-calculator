# Projectile Motion Calculator

Throughout my academic career I have struggled with projectile 
motion, so I dedicated this C++ program to calculating the motion 
of a projectile launched at a given angle and velocity.

**Outputs calculated:**
- Time of Flight
- Maximum Height
- Horizontal Range

Built as part of my portfolio for the Snap Engineering Academy 2026 application.

## Physics Behind the Project - Pre coding calculations

The program is based around Newtons 2nd Law of Motion which states 
(F = ma). Using this equation allows us to derive the equations 
needed for finding Total Time of Flight, Maximum Height and 
Horizontal Range.

I want to make it clear that for now the program will consider 
mass and air drag negligible, and so therefore the only force 
acting on the object is gravity. Rearranging the equation we 
get (a = -g). From here we carry out integration to solve for 
v(t) and r(t) in both x and y components with respect to t, 
giving us:

- Horizontal: x(t) = v₀cos(θ) × t
- Vertical:   y(t) = v₀sin(θ) × t - ½gt²

**Time of Flight** is derived by setting y(t) = 0 since the 
projectile launches and lands at ground level. Factoring out t 
gives two solutions; t = 0 is the launch moment which we 
ignore, and the second solution gives us the landing time:
t = (2 × v₀ × sin(θ)) / g

**Maximum Height** is derived by setting vertical velocity to 
zero, physically this is the moment the projectile stops rising 
and begins to fall. Solving for that time and substituting back 
into the vertical position equation gives us:
h = (v₀² × sin²(θ)) / (2g)

**Horizontal Range** is derived by substituting the Total Time 
of Flight into the horizontal position equation. Applying the 
double angle trig identity 2sin(θ)cos(θ) = sin(2θ) simplifies 
the expression to:
R = (v₀² × sin(2θ)) / g

## How to Run the Program

### Requirements
- A C++ compiler (g++ recommended)
- Windows: Install MinGW from mingw-w64.org
- Mac: g++ comes pre-installed with Xcode Command Line Tools

### Compiling and Running on Windows
1. Open Command Prompt
2. Navigate to the project folder. In my case I had everything saved on a secondary drive rather than my main drive but the process is the same throughout all drives. You must declare the drive your project is in before carrying out these commands:
   B:
   cd "Internship Projects\projectile-motion-calculator"
3. Compile the program:
   g++ Projectile.cpp -o Projectile
4. Run the program:
   Projectile.exe

### Compiling and Running on Mac
1. Open Terminal
2. Navigate to the project folder:
   cd ~/C++ Projects/projectile-motion-calculator
3. Compile the program:
   g++ Projectile.cpp -o Projectile
4. Run the program:
   ./Projectile

### Inputs Required
- Launch angle in degrees
- Initial velocity in m/s

### Example Output
What is the launch angle: 45
What is the initial velocity (m/s): 500

--- Results ---
Time of Flight:  72.080 s
Maximum Height:  6371.050 m
Horizontal Range: 25484.200 m

## Development Environment

This project was developed across two machines:
- Windows Desktop (home) located at B:\Internship Projects\projectile-motion-calculator
- MacBook Laptop (on the go) located at ~/C++ Projects/projectile-motion-calculator

To keep both machines in sync I used Git and GitHub throughout 
the entire development process.

### My Git Workflow

**Starting a session on Windows:**
1. Open Command Prompt
2. B:
3. cd "Internship Projects\projectile-motion-calculator"
4. git pull

**Starting a session on Mac:**
1. Open Terminal
2. cd ~/"C++ Projects/projectile-motion-calculator"
3. git pull

**Ending a session on both machines:**
1. git add .
2. git commit -m "description of changes made"
3. git push

This allowed me to seamlessly switch between machines without 
ever losing progress or having conflicting versions of my code. 
Every commit in the history of this repository represents a real 
step in my learning and development process.

## What I Learned

This project taught me far more than just C++ syntax. Coming from 
a mechanical engineering background I already understood the physics 
behind projectile motion, but translating that knowledge into a 
working program was a completely new challenge.

I learned how to declare variables and constants, accept user inputs, 
convert units, implement mathematical formulas using the cmath library, 
and display results cleanly using iomanip manipulators.

I also learned how to use Git and GitHub to manage my code across 
two machines, which taught me how real developers work in professional 
environments.

The most valuable thing I took away from this project is that 
engineering and programming are not separate skills — they complement 
each other. My mechanical engineering foundation made me a better 
programmer because I understood the why behind every formula, not 
just the syntax.

I am aware this program has limitations such as air drag and mass are 
currently excluded. These were intentional decisions to keep the 
program within my current skill level while still producing 
accurate results for basic projectile motion. Future improvements 
could include air drag modeling using numerical methods such as 
Eulers method, which I am currently studying in my Computer 
Methods course.
