/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int score = 0;
    //THE TEST IS STARTED!
    cout << "\t\t AI LÀ TRỌC PHÚ\n";
    // Question 1
    cout << "1. What is the capital of France?" << endl;
    cout << "   a) Paris" << endl;
    cout << "   b) London" << endl;
    cout << "   c) Berlin" << endl;
    char answer1;
    cin >> answer1;
    if (answer1 == 'a') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is Paris." << endl;
    }
    
    // Add more questions here...
    
    cout << "Your total score: " << score << " out of 1" << endl;
    
    // Question 1
    cout << "2. Who is the CEO of Apple" << endl;
    cout << "   a) Steve Jobs" << endl;
    cout << "   b)Bill Gates" << endl;
    cout << "   c) Elon Musk" << endl;
    char answer2;
    cin >> answer2;
    if (answer1 == 'a') {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Incorrect. The correct answer is Paris." << endl;
    }
    
    // Add more questions here...
    
    cout << "Your total score: " << score << " out of 1" << endl;
    return 0;
}



