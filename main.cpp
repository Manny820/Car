#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main(){
    int count = 0;

    //create the array of cars and initialize
    Car garage[3]={Car(2006, "Porsche"),Car(2016, "Toyota"), Car(2002, "Subaru")};

    //another way to initalize
    garage[2]=Car(2017,"FFR 818S");//notice this is carNum 4

//main loop
    for (int i=0;i<3;i++){
        cout << "Loop Number: " << i << endl;
        cout << "Car Make: " << garage[i].getMake() << endl;
        cout << "Car Year: " << garage[i].getYearModel() << endl;
        cout << "CarNum: " << garage[i].getCarNum() << endl;
//accelerate loop
        for (count = 0; count < 5; count++){
            cout << "Accelerating...";
            garage[i].accelerate();
            cout << "Current speed: " << garage[i].getSpeed() << endl;
        }
//brake loop
        for (count = 0; count < 5; count++){
            cout << "Braking...";
            garage[i].brake();
            cout << "Current speed: " << garage[i].getSpeed() << endl;
        }
        cout << endl;
    }

    return 0;
}
