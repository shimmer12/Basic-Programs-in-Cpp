#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the principle amount: ";
    int principle;
    cin>>principle;
    cout<<"Enter the rate of interest in percentage: ";
    int rateofinterest;
    cin>>rateofinterest;
    cout<<"Enter the time period in years: ";
    int timeperiod;
    cin>>timeperiod;
    int interest;
    interest = (principle*rateofinterest*timeperiod)/100;
    int amount;
    amount = interest + principle;
    cout<<"The interest is: "<<interest;
    cout<<"The total amount is: "<<amount;
	return 0;
}
