#include <iostream>
#include <ctime>
#include "HeaderArray.h"
using namespace std;


int main()
{
    aboutA();
    int mas[N];
    int WorkingPart;
    int* p1 = &mas[0];
    int variant = inputMethod();
    bool res;
    do{
    if(variant == 1)
    {
        cout << "Random input:" << endl;
        res = RandomArray( mas,WorkingPart);
    }
    else if(variant == 2)
    {
        cout << "Keyboard input:" << endl;
        res = keyArray( mas,WorkingPart);
    }
    else if((variant!=1) || (variant!=2))
    {
        cout << "End of work." << endl;
        exit(EXIT_SUCCESS);
    }
    if(res == 1) Output(WorkingPart, p1);
    variant = inputMethod();
    }while(1);
}



