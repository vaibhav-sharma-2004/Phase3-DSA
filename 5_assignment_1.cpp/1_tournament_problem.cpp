#include<iostream>
using namespace std;

int main(){

    //input from user
    int level;
    int score;
    int penalty;

    cin>>level;
    cin>>score;
    cin>>penalty;

    //CASE 1:level=5

    if(level==5){

        if(score>=90){

            if(penalty==0){
                cout<<"Champion";
            }

            else{
                cout<<"Qualified";
            }
        }

        else{

            if(score>=70){
                cout<<"Qualified";
            }

            else{
                cout<<"Disqualified";
            }
        }
    }

    //CASE 2:level=3 or 4

    else if(level==3 || level==4){

        if(score>=80){

            if(penalty<=2){
                cout<<"Promoted";
            }

            else{
                cout<<"Needs Review";
            }
        }

        else{
            cout<<"Try Again";
        }
    }

    //CASE 3: level<=2

    else if(level<=2){

        if(score>=60){

            if(penalty<=3){
                cout<<"Advance";
            }

            else{
                cout<<"Warning Issued";
            }
        }

        else{
            cout<<"Eliminated";
        }
    }

    //done
    return 0;
}