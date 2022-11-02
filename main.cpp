#include <iostream>
#include <math.h>
#include <string>
#include <bits/stdc++.h>



using namespace std;

int main()
{
    string name;
    double m1,f1;
    double exam;
    double h1,h2,h3,h4,h5;
    double hw_avg,hw_grade;
    double q1,q2,q3,q4,quiz_grade;
    double larges,numeric;

    cout << "The purpose of this program is to calculate your CS201 grade. What is your name? ";
    cin >> name;
    cout << "Hello "<< name<<", what are your midterm and final exam grades? ";
    cin >> m1 >> f1;
    exam = ((m1*0.3)+(f1*0.35))/0.65;
    if(exam <30){
        cout <<name <<", your weighted exam average is less than 30, you will fail the course!"<<endl;
        return 0;

    }
    else{
        cout<<"What are the grades of your 5 homework? ";
        cin >> h1>>h2>>h3>>h4>>h5;
        hw_grade = (h1+h2+h3+h4+h5)/(exam*5);
        if(hw_grade<=2){
            hw_avg=(h1+h2+h3+h4+h5)/5;
            cout<<"You'll get all the points earned from homework!"<<endl;

        }
        if(hw_grade<3 && hw_grade>2){
            hw_avg = (3-hw_grade)*((h1+h2+h3+h4+h5)/5);
            cout<<"You'll get " << hw_avg <<" from the points earned from homework!"<<endl;
        }
        if(hw_grade>=3){
            hw_avg = 0;
            cout<<"You'll get NONE of the points earned from homework!"<<endl;

        }
        cout<<"What are the grades of your 4 quizzes? If any, enter your grade as 0 for missed quizzes. ";
        cin>>q1>>q2>>q3>>q4;
        double left_min= min(q1,q2);
        double right_min= min(q3,q4);
        double final_min= min(left_min,right_min);
        larges=((q1+q2+q3+q4)-(final_min))/30*(100);
        numeric =(larges*0.1)+(hw_avg*0.25)+(m1*0.3)+(f1*0.35);

        cout<<name<<", your grade for CS201 is: "<<numeric<<endl;





    }


    return 0;
}
