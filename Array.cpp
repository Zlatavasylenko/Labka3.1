#include <iostream>
#include <ctime>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include "HeaderArray.h"
using namespace std;


//Інформація про автора
void aboutA() {
    cout << "Laboratory work 2-1. Changing the array.\nK-14 Vasylenko Zlata\n"<<endl;
}

// Вивести меню користувачеві та повернути номер варіанта
int inputMethod(){
 int variant;
    cout<<endl<<"Please,select option:"<<endl;
    cout<<"1-> Random input"<<endl;
    cout<<"2-> Keyboard input"<<endl;
    cout<<"Any other number -> exit"<<endl;
    cin.clear();
    cin.sync();
    cin >> variant;
    return variant;
}

bool RandomArray(int (&mas)[N],int &WorkingPart)
{
    srand(time(0));
    WorkingPart = rand() % 12 + 1;
    for(int i = 0; i < WorkingPart; i++)
    {
        mas[i] = rand();
    }
    return true;
}

//Заповнити масив вручну
bool keyArray(int (&mas)[N], int &WorkingPart)
{
    for(int i = 0; i < N; i++)
    {
        cout<<"id["<<i<<"] = ";
        if(!(cin >> mas[i]))
        {
            if(i == 0)
            {
                cout<<"Error";
                return false;
            }
            else
            {
                WorkingPart = i;
                return true;
            }
        }
    }
    WorkingPart = N;
    return true;
}

void Output(int &WorkingPart, int* p)
{
    for(int i = 0; i < WorkingPart; i++)
    {
        if(i%5 == 0)
        {
            cout<<endl;
        }
        cout<<"|"<<setw(15)<<p[i]<<"|";
    }
}

