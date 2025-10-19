/*
    What
    If

    Why
    Basic flow contol

    How
    IF keyword
*/

#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 0;
    qInfo() << "Enter your age";
    cin >> age;

    if(age==0) qFatal("Not a valid age!"); //True or False

    qInfo() << "You enterd:" << age;

    if(age < 18)
    {   //scope
        qInfo() << "you are not an adult!";
        qInfo() << "Come back when you are older!";
    }

    //Here regardless!

    if(age < 21 && age >= 18) qInfo();


    qInfo() << "Done";

    return a.exec();
}
