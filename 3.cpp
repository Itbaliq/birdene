#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main()
{
int tota;
vector<std::string> A;
string a, b;
cout << "Enter your text." << endl;
getline(cin, a);
a = a + ' ';
	for (int i = 0; i < a.length(); i++)
{
	if (isalpha(a[i])) b += a[i]; 
	if ((!(isalpha(a[i]))) && (b != ""))
	{
		A.push_back(b);
		b = "";
	}
}
cout << "Unique words:" << endl;
for (int i = 0; i < A.size(); i++)
{
	tota = 0;
	for (int j = 0; j < A.size(); j++)
	{
		if (A[i] == A[j]) tota++;
	}
	if (tota == 1)
	{
		cout << A[i] << endl;
	}
}
system("pause"); 
return 0;   
}