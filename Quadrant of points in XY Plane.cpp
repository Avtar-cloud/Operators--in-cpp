//AVTAR SINGH ENTC 24070123027
//24070123027
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "The x-coordinate is: ";
    cin >> x;
    cout << "The y-coordinate is: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 1." << endl;
    } 
    else if (x < 0 && y > 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 2." << endl;
    } 
    else if (x < 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 3." << endl;
    } 
    else if (x > 0 && y < 0) {
        cout << "The point (" << x << ", " << y << ") lies in Quadrant 4." << endl;
    }
    else if (x == 0 && y == 0) {
        cout << "The point is at the origin." << endl;
    }
    else if (x == 0) {
        cout << "The point lies on the Y-axis." << endl;
    }
    else if (y == 0) {
        cout << "The point lies on the X-axis." << endl;
    }

    return 0;
}
