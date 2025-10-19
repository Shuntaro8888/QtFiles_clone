/*
    What
    Do and While loops

    Why
    To repeat code

    How
    Use the DO and WHILE keywords
*/


#include <QCoreApplication>
#include <iostream>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int start = 80;
    int max = 100;

    // while loop - evaluate first
    int i = 1000;
    while(i < max) {
        qInfo() << "while = " << i;
        i++;
    }

    qInfo("-------------");

    //Do loop - evaluate last
    i = 1000;
    do {
        qInfo() << "Do = " << i;
        i++;
    } while(i < max);

    qInfo() << "Done";

    return a.exec();
}
