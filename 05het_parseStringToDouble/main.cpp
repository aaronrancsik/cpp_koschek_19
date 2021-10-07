#include <stdio.h>

#pragma warnings(disable : 4996)

using namespace std;

/*
double feladat(char * s)
{
    int index =0;
    bool point = false;
    bool error = false;

    while (!error && s[index]!='\0' && s[index] !='.')
    {
        index++;
    }

    double szam = 1;
    double power = -1;

    bool error1 = false;
    while (!error1 && s[index] != '\0')
    {
        if(s[index] >= '0' && s[index] <= '9')
        {
            double tmp = pow(10, power);
            power--;
            char ertek = s[index];
            tmp = ertek*tmp;

            szam*= tmp;
        }else{
            //error1 = true;
        }
        index++;

    }


    while (!error && s[index]!='\0')
    {

        if(s[index]=='+' || s[index]=='-')
        {

        }
        else if(s[index] >= '0' && s[index] <= '9')
        {

        }
        else if(!point && s[index] == '.')
        {

        }
        index++;
    }
    return  0;
}
*/

double feladat(char * s)
{
    double val, power;
    int i, sign=1;

    i=0;

    while (s[i]== ' ' || s[i]=='\n' || s[i]=='\t')
    {
        i++;
    }

    if(s[i]=='+' || s[i]=='-')
    {
        sign = (s[i++] == '+') ? (1) : (-1);
    }

    val =0;
    while (s[i] >= '0' && s[i] <= '9')
    {
        int si = s[i];
        int tmp = si - '0';
        val = 10*val + tmp;
        i++;
    }

    if(s[i]=='.')
        i++;


    power =1;
    while (s[i] >= '0' && s[i] <= '9')
    {
        val = 10*val + s[i++] -'0';
        power *=10;
    }


    return (sign * val/power);


}

int main(int argc, char * argv[])
{
    double x;
    char *ertek = (char*)"\n\t -123.456";


    x = feladat(ertek);

    printf(": \n%s -> %f", ertek, x);
    return (0);

}