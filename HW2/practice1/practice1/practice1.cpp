#include <iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	vector<int> computer = { 0,2,1,1,2,0,1,2,2,0,1,0 };
	vector<string> a = { "rock","scissors","paper" };
	string you;
	int player, com = 0;

	cout << "Enter your choice: ";
	while (cin >> you && you != "quit") {
		if (you == "rock")
			player = 0;
		else if (you == "scissors")
			player = 1;
		else if (you == "paper")
			player = 2;
		else {
			cout << "�߸��� �Է�\n";
			continue;
		}

		if (com > 11)com -= 12;
		cout << a[computer[com]] << "  " << a[player] << ": ";
		if (player == computer[com])
			cout << "no one win\n";
		else if ((player == 0 && computer[com]==1) || (player == 1 && computer[com]==2) || (player == 2 && computer[com]==0))
			cout << "you win\n";
		else
			cout << "you lose\n";

		com++;


		cout << "Enter your choice: ";
	}
}