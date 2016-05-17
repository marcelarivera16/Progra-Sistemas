#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
    int num;
    srand(time(0));
    {num = 1 + rand()%(201-1);
    cout<<num<<"";
    }

cout<<"\n";

    if (num>1 and num<60)
        cout<<"Rango 1 a 60";
    else if (num>61 and num<90)
        cout<<"Rango 61 a 90";
    else if (num>91 and num<160)
        cout<<"Rango 91 a 160";
    else
        cout<<"Rango 161 a 200";

cout<<"\n";


}
