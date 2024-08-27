//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include<iostream>
using namespace std;
class cube
{
    private:
    double height=2.0;
    double width=3.0;
    double length=4.0;

    public:
    double volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    double v = cube1.volume();
    cout<<"volume:"<<v<<endl;
}
