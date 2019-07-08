// Assumptions: The second integer will always be greater than the first integer
//              There will always be at least one value between the two numbers
#include <iostream>
using namespace std;

int calculate( int num_1, int num_2, char oper);
int main(void)
{

    int number_1, number_2, result;
    char op;
    cin >> number_1 >> number_2 >> op;

    result = calculate(number_1, number_2, op);

    cout << number_1 << " " << number_2 << " " << op << endl;

    cout << "The result is: " << result << endl;

    return 0;
}

int calculate( int num_1, int num_2, char oper)
{
    int result= 0;;
    switch(oper)
    {
        case '+':
            for(int i = num_1 + 1; i < num_2; i++)
            {
                result = result + i;
            }
        break;

        case '-':
            result = num_1 + 1;
            for(int i = num_1 + 2; i < num_2; i++)
            {
                result = result - i;
            }
        break;

        case '*':
            result = 1;
            for(int i = num_1 + 1; i < num_2; i++)
            {
                result = result * i;
            }
        break;
    return result;
}
