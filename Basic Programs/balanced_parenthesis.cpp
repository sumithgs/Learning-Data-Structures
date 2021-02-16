#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool arepair(char opening,char closing){
if(opening=='{'&&closing=='}')return true;
else if(opening=='['&&closing==']')return true;
else if(opening=='('&&closing==')')return true;

return false;
}

bool arepaired(string exp){
stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !arepair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main(){
    string expression;
    cout << "enter the expression"<<endl;
    cin>>expression;
    if(arepaired(expression)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not-Balanced";
    }
}

