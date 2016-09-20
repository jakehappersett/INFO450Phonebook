#include <iostream> 
#include <cstring> 


using namespace std;

//char phonebook[10][2][50] = {{{'j','a','k','e'},{'8','0','4'}}};
char pb[10][2][50];
void addEntry(char arr[10][2][50]);
void display(char arr[10][2][50]);
int i = 0;
int main () {
	char opt;
	do {
		cout << "--------------------------" << endl;
		cout << "  what do you want to do  " << endl;
	        cout << "--------------------------" << endl;
		cout << " add new contact  --> a   " << endl;
		cout << " display contacts --> d   " << endl;
		cout << " quit             --> q   " << endl;
		cin >> opt;
		if (opt == 'a' || opt == 'A') 
		{
			if (i < 10) {

				cin.ignore(); //clears the input buffer (found this online), allows me to use the cin.getline after a cin 
				addEntry(pb);
			}
			else{
				cout << "It's full, get less friends!" << endl;
			}
		}
		else if (opt == 'd' || opt =='D')
		{
			display(pb);
		}
		else if (opt== 'q' || opt == 'Q')
			break;
	}while(1==1);

	return 0;

	
}

void addEntry(char arr[10][2][50])
{
	cout << "what is the name?" << endl;
	cin.getline(arr[i][0], 50);

//	cout << "what is the number?" << endl;
//	cin.getline(arr[i][1], 50);
	cout <<"i is"<< arr[i][0] << endl;
//	for (int c=0; c < i+1; c++){
//	//	cout << "c is" << arr[c][0] << endl;
//	//	cout << "i in the loop is" << arr[i][0] << endl;
//		if ((arr[c][0] == arr[i][0])&& c!=i))
//		{
//			cout << "you already did that" << endl;
//		}
//		else if ((arr[c][0] != arr[i][0])&&(c == i))
//		{
//			cout << "what is the number?" << endl;
//			cin.getline(arr[i][1], 50);
//		}
//		else{}
//	}
	i++;
}

}
void display(char arr[10][2][50])
{

	for (int a=0; a < i; a ++)
	{
		cout << "Entry: " << a+1 << " Name: " << arr[a][0] << " Number: " << arr[a][1] << endl;
	}
}

