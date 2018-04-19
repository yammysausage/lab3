#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int no = 0;
	float result;
	float massa;
	vector<float>mass;
	//float mass[122];
	ifstream inFile("file.in.txt", ios::in);

	if (!inFile) {
		cerr << "failed" << endl;
		system("pause");
		exit(1);
	}
	ofstream outFile("result.txt", ios::out);
	while (inFile >> massa) {
		if (massa != 0) {
			
		mass.push_back( massa);
			no++;
		}

	}
	//float mass_end = sizeof(mass) / sizeof(int);
	sort(  mass.begin(),  mass.end());
	reverse ( mass.begin() ,mass.end());
	result = mass[0] + mass[1] + mass[2] + mass[3] + mass[4];
	outFile << result<< endl;
	cout << result << endl;

	system("pause");
	//cin.get();
	return 0;
}