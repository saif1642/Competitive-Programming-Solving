
/*infix To postfix
author:MD. Saiful Islam */

#include<stdio.h>
#include<vector>
#include<iostream>
#include<stack>
#include<string>
#include <ctype.h>
using namespace std;


string InfixToPostfix(string exp);
int HigherPrecedence(char op1, char op2);
bool IsOperator(char ch);
bool IsOperand(char ch);


int main()
{
    int T;

    cin>>T;
    getchar();
   for(int i=1;i<=T;i++){

	string exp;

	getline(cin,exp);
	string postfix = InfixToPostfix(exp);
	cout<<postfix<<"\n";
   }
}


string InfixToPostfix(string expression)
{

	stack<char>s;
	string postfix="";
	for(int i = 0;i< expression.length();i++) {
		if(expression[i] == ' ' || expression[i] == ',') continue;

		else if(IsOperator(expression[i]))
		{
			while(!s.empty() && s.top() != '(' && HigherPrecedence(s.top(),expression[i]))
			{
				postfix+= s.top();
				s.pop();
			}
			s.push(expression[i]);
		}
		else if(IsOperand(expression[i]))
		{
			postfix +=expression[i];
		}

		else if (expression[i] == '(')
		{
			s.push(expression[i]);
		}

		else if(expression[i] == ')')
		{
			while(!s.empty() && s.top() !=  '(') {
				postfix += s.top();
				s.pop();
			}
			s.pop();
		}
	}

	while(!s.empty()) {
		postfix += s.top();
		s.pop();
	}

	return postfix;
}


bool IsOperand(char ch)
{
	if(isdigit(ch))
        return true;
	if(isalpha(ch))
	   return true;

	return false;
}


bool IsOperator(char ch)
{
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='$')
		return true;

	return false;
}



int GetOperatorWeight(char op)
{
	int weight = -1;
	switch(op)
	{
	case '+':
	    weight = 1;
	    break;
	case '-':
		weight = 2;
		break;
	case '^':
		weight = 3;
		break;

	case '*':
	    weight = 4;
	    break;
	case '/':
		weight = 5;
           break;
    case '$':
		weight = 6;
        break;

	}
	return weight;
}

int HigherPrecedence(char op1, char op2)
{
	int op1Weight = GetOperatorWeight(op1);
	int op2Weight = GetOperatorWeight(op2);

	return op1Weight > op2Weight ?  true: false;
}

