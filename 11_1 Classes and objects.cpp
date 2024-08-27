//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;

class cube {
    public:
    double height = 2.0;
    double width = 3.0;
    double length = 5.0; 
};

int main() {
    cube c1;
    double vol = c1.height * c1.width * c1.length;
    cout << "volume = " << vol << endl;
    return 0;
}