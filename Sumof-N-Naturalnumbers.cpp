#include <iostream>
using namespace std;

//WhileLoop
int main() {
    int N;
    cout<<"Enter the value of N: "<<endl;
    cin>>N;
    int i = 1;
    int sum = 0;
    while(i <= N)
    {
        sum += i;
        i++;
    }
    cout<<"The sum is: "<<sum;
	return 0;
}
