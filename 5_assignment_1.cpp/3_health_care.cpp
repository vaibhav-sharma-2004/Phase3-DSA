#include<iostream>
using namespace std;

int main(){

    int age;
    int BMI;
    int chronic;

    cin>>age>>BMI>>chronic;

    //CASE 1:

    if(age>=60){

        if(BMI>=30){

            if(chronic>=2){
                cout<<"High Risk";
            }

            else{
                cout<<"Moderate Risk";
            }
        }

        else{

            if(chronic>=1){
                cout<<"Moderate Risk";
            }

            else{
                cout<<"Low Risk";
            }
        }
    }

    //CASE:2
    else if(age>=40 && age<60){

        if(BMI>=25){

            if(chronic>=2){
                cout<<"Moderate Risk";
            }

            else{
                cout<<"Low Risk";
            }
        }

        else{
            cout<<"Low Risk";
        }
    }

    else{

        if(BMI>=28){

            if(chronic>=1){
                cout<<"Moderate Risk";
            }

            else{
                cout<<"Low Risk";
            }
        }

        else{
            cout<<"Very Low Risk";
        }
    }

    return 0;
}