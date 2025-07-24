//AVTAR SINGH
//24070123027
//ENTC A1
#include <iostream>
using namespace std;

int main(){
    int mat, eng, chem, phy, python;
    int sum;
    float average;
    cout << "Enter marks for Maths: ";
    cin >> mat;
    cout << "Enter marks for English: ";
    cin >> eng;
    cout << "Enter marks for Chemistry: ";
    cin >> chem;
    cout << "Enter marks for Physics: ";
    cin >> phy;
    cout << "Enter marks for Python: ";
    cin >> python;
    sum = mat + eng + chem + phy + python;
    average = sum / 5.0;
    cout << "Average marks: " << average << endl;
    if (average >= 80 && average <= 90){
        cout << "The grade is O." << endl;
    }
    else if (average >= 70 && average < 80){
        cout << "The grade is A+." << endl;
    }
    else if (average >= 60 && average < 70){
        cout << "The grade is B." << endl;
    }
    else if (average >= 50 && average < 60){
        cout << "The grade is C." << endl;
    }
    else if (average >= 40 && average < 50){
        cout << "The grade is D." << endl;
    }
    else {
        cout << "Fail." << endl;
    }

    return 0;
}
//Enter marks for Maths: 54
//Enter marks for English: 95
//Enter marks for Chemistry: 48
//Enter marks for Physics: 47
//Enter marks for Python: 47
//Average marks: 58.2
//The grade is C.
