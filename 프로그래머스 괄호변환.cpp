#include <string>
#include <vector>
#include <queue>

using namespace std;

string u= "";
string v= "";

int check(string a);
void divide(string b);
string step(string c);

string solution(string p) {
	string answer = "";
	answer = step(p);
    return answer;
}

int check(string a) {
	queue <char> q1;
	if (a == "")
		return 1;
	if (a[0] == '(')
	{
		q1.push(a[0]);
		for (int i = 1; i < a.length(); i++)
		{
			if (a[i] == '(')
				q1.push(a[i]);
			else
			{
				if (q1.size() == 0)
					return 0;
				else
					q1.pop();
			}
		}
		if (q1.size() == 0)
			return 1;
	}
	else
		return 0;
}

void divide(string b) {
	queue <char> q2;
	int c1 = 0;
	int c2 = 0;
	int i = 1;
	if (b == "")
	{
		u = "";
		v = "";
		return;
	}
	if (b[0] == '(')
		c1++;
	else
		c2++;
	while (c1 != c2)
	{
		if (b[i] == '(')
			c1++;
		else
			c2++;

		i++;
	}
	u = b.substr(0, i);
	v = b.substr(i, b.length() - i);
	return;
}

string step(string c) {
	string temp = "";
	if (c == "")
		return temp;

	divide(c);
	if (check(u) == 1)
	{
		temp = u;
		temp = temp +step(v);
	}
	else
	{
		for (int j = 1; j < u.length() - 1; j++)
		{
			if (u[j] == '(')
				temp = temp + ')';
			else
				temp = temp + '(';
		}
		string temp2 = "(" + step(v) + ')';
		temp = temp2 + temp;
	}
	return temp;
}