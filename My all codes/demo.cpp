#include<iostream>
using namespace std;

int main()
{
    int number_one,number_two,sum,sub,multiple;
    double devide,rem;

    cout<<"Enter the two number = ";
    cin>>number_one>>number_two;

    sum = number_one + number_two;
    sub = number_one - number_two;
    multiple = number_one*number_two;
    devide = float(number_one)/number_two;
    rem = (number_one) % number_two;

    cout<<"Sum = " << sum;
    cout<<"\nSub = " << sub;
    cout<<"\nMultiple = " << multiple;
    cout<<"\nDevide = " << devide;
    cout<<"\nRem = " << rem;

    return 0;

}
