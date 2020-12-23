#include <iostream>
using namespace std;

//WhileLoop
int main() {
    int num;
    cout<<"Enter the value of the number: "<<endl;
    cin>>num;
    int sum = 0;
    while(num != 0)
    {
        sum += num%10;
        num /= 10;
    }
    cout<<"The sum is: "<<sum;
	return 0;
}
