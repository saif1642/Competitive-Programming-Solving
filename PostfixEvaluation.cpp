#include<iostream>
#include<stack>
#include<string>
#include <ctype.h>
using namespace std;

int EvaluatePostfix(string exp);
int PerformOperation(char operation, int operand1, int operand2);
bool IsOperator(char ch);


int main()
{
	string exp;
	cout<<"Enter Postfix Expression: \n";
	getline(cin,exp);
	int result=EvaluatePostfix(exp);
	cout<<"Evaluated Postfix = "<<result<<"\n";
}


int EvaluatePostfix(string exp)
{
	stack<int>s;

	for(int i=0;i<exp.length();i++) {

		if(exp[i] == ' ' || exp[i] == ',')
            continue;

		else if(IsOperator(exp[i])) {
			int operand2 = s.top();
			      s.pop();
			int operand1 = s.top();
			      s.pop();

			int result = PerformOperation(exp[i], operand1, operand2);
			s.push(result);
		}
		else if(isdigit(exp[i])){
			int operand = 0;
			while(i<exp.length() && IsNumericDigit(exp[i])) {
				operand =(exp[i] - '0');
                i++;
			}
         i--;

			s.push(operand);
		}
	}
	return s.top();
}


bool IsOperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
		return true;

	return false;
}


int PerformOperation(char operation, int operand1, int operand2)
{
	if(operation=='+') return operand1 +operand2;
	else if(operation=='-') return operand1 - operand2;
	else if(operation=='*') return operand1 * operand2;
	else if(operation=='/') return operand1 / operand2;

	else cout<<"Unexpected Error \n";
	return -1;
}
