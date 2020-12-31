

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

string status;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if(age <= 20){
        int height;
        cout << "Enter your height: ";
        cin >> height;

        if(height < 160){
            status = "UNFRIEND";

        }else if (height < 175){
            status = "FRIEND";
        }else {
            int property;
            cout << "Enter your property: ";
            cin >> property;

            if(property > 6900000){
                status = "MARRIED";
            }else{
                status = "ONE-NIGHT-STAND";
            }

        }


    }else if(age < 30){
        int property;
        cout << "Enter your property: ";
        cin >> property;

        if(property > 10000000){
                status = "BEST FRIEND";
            }else{
                status = "UNFRIEND";
            }
    }else{
        status = "UNFRIEND";
    }

    cout << "Your status = " << status;
}