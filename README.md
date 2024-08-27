# Experiment 11

## Aim:
To study and implement Classes and Objects

## Theory: 
Classes:
Definition: A class is a blueprint or template for creating objects. It defines the properties (data members) and behaviors (member functions or methods) that the objects created from the class will have.

object:
Definition: An object is an instance of a class. When you create an object, you are creating a specific example of the class, with its own set of data.

## Code 1:
~~~
//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 2.0;
    int width = 3.0;
    int length = 5.0;
};

int main()
{
    cube c1;
    int vol = c1.height*c1.width*c1.length;
    cout<<"volume:"<<vol<<endl;
}
~~~

## Output:

![image](https://github.com/user-attachments/assets/448ae36b-14ed-4b19-84ba-f691bdec142d)

## Code 2:
~~~
//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;

class cube
{
    public:
    int height = 2;
    int width = 2;
    int length = 2;
    int volume()
    {
        int v; 
        v = height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    cout<<"volume: "<<cube1.volume()<<endl;
}
~~~

## Output:

![image](https://github.com/user-attachments/assets/5d82fd12-3cee-44c7-9162-31e5018c9aea)

## Private And Public Variables:
~~~
//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;

class cube
{
    private:
    int height=2;
    int width=3;
    int length=5;

    public:
    int volume()
    {
        double v;
        v=height*width*length;
        return v;
    }
};

int main()
{
    cube cube1;
    cout<<"volume: "<<cube1.volume()<<endl;
}
~~~

## Output:

![image](https://github.com/user-attachments/assets/b87e9ae3-b535-481c-883a-7f14fe5b9e63)

## Displaying A Function Inside A Class:
~~~
//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;
class cube{
    public:
    double height=2.0;
    double width=3.0;
    double length=5.8;
     double volume(){
     double v;
     v=height*width*length;
        return v;
}
void disp_vol(double vol){
    cout<<"Volume:"<<vol<<endl;

}
};
int main()
{
    cube cube1;
    double vol=cube1.volume();
    cube1.disp_vol(vol);
}
~~~
![image](https://github.com/user-attachments/assets/5e14095e-edb9-4d09-b8e9-ad4302881b6a)

## Code 5:
~~~
//Name: Srihari Nair
//Prn: 23070123131
//Class: EnTC B-2
#include <iostream>
using namespace std;

class Volume 
{
    public:
        float length;
        float breadth;
        float height;
        
        void input() {
            cout << "Enter the value of length: ";
            cin >> length;
            cout << "Enter the value of breadth: ";
            cin >> breadth;
            cout << "Enter the value of height: ";
            cin >> height;
        }
                float vol() {
            return length * breadth * height;
        }
        
        void display() {
            double a = vol();
            cout << "The volume is " << a;
        }
};

int main() {
    Volume volume1;
    volume1.input();
    float a = volume1.vol();
    cout << a;
    return 0;
}
~~~

## Output:

![image](https://github.com/user-attachments/assets/b8a7a516-8630-4741-be9d-bad2a555427d)

## Conclusion:
