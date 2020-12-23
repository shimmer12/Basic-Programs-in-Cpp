#include <iostream>
using namespace std;

int main() {
    float temp;
    cout<<"Enter the temperature in Celsius: "<<endl;
    cin>>temp;
    float tempinfah = (temp*9)/5 + 32;
    cout<<"The temperature in Fahrenheit is: "<<tempinfah;
	return 0;
}
