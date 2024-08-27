//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;

class Cube {
    public:
    double height;
    double length;
    double width;
    Cube() : height(8.0), length(9.0), width(9.0) {}
    double volume() {
        return height * width * length;
    }
};
int main() {
    Cube c1;
    double v = c1.volume();
    cout << "Volume = " << v << endl;
    return 0;
}