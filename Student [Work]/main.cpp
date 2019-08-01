//
//  main.cpp
//  Class Student
//
//  Created by Matthew Austin on 3/7/16.
//  Copyright (c) 2016 Matt. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Student
{
    int scores[3], low;
    float average;
public:
    //Getting the Scores
    void Score(int scores[]){
        int x;

        for( x = 0; x < 3; x++){
            cout << "Enter Score " << x+1 << ": ";
            cin >> scores[x];
        }


    }

    //Calculating the Average
    float calcAvg(int scores[]){
        int x, tot=0;

        for (x = 0; x<3; x++){
            tot+=scores[x];
        }

        average = (tot)/(3.0);
        return average;
    }

    //Displaying the Scores, Average, and Low
    void Display(int scores[])
    {


        cout << " " << endl;

        cout << "score total: "<< calcAvg(scores) * 3.0 << endl;
        cout << "score average: " << calcAvg(scores)  << endl;


    }

};




int main(){
    int scores[4];

    Student Score;
    Score.Score(scores);
    Student calcAvg;
    calcAvg.calcAvg(scores);
    Student Display;
    Display.Display(scores);

    return 0;

}
