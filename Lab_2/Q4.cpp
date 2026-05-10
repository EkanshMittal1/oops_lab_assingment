#include<iostream>
using namespace std;

class Rectangle{
    public:
    int width;
    int height;

    void getData(){
        cout << "Enter width " ;
        cin >> width;

        cout << "Enter height ";
        cin >> height;
    }

    void calculateArea(){
        cout << "Area is : " << width*height << endl;
    }
};

int main (){

    Rectangle r;

    r.getData();
    r.calculateArea();


    return 0;
}