#include <iostream>
#include <string>
using namespace std;

// ������ 1
string multStr(string str, int num) {
	string res;
	for (int i = 0; i < num; i++)
		res += str;
	return res;
}
// ������ 2
bool checkSpam(string str) {
	for (int i = 0; i < str.length(); i++)
		str[i] = tolower(str[i]);
	if (str.find("100% free") < str.length())
		return true;
	if (str.find("sales increase") < str.length())
		return true;
	if (str.find("only today") < str.length())
		return true;
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	string str;
	int n;

	// ������ 1
	cout << "������ 1.\n������� ������:\n";
	getline(cin, str);
	cout << "������� ���������� ����������:\n";
	cin >> n;
	cin.ignore();
	cout << multStr(str, n) << "\n\n";

	// ������ 2
	cout << "������ 2.\n������� ���������:\n";
	getline(cin, str);
	if (checkSpam(str))
		cout << "��������� ����!\n";
	else
		cout << "����� �� ����������.\n";








	// ������ - ��� �������, ����������� � �������� ������ � ������� ������������ ����������.
	/*string str; // ���������� ��������� ����������
	str = "Hello world!";
	cout << str << endl;
	string newStr = "12345";*/
	//str.insert(3, newStr/*, 2*/); // �� ������ - Hel12354lo world!
	// ��������� �������� "2", ���������� � ����� ������� �������� ����������� ����� "newStr"
	//str.replace(1, 3, newStr); // �� ������ "H12345o world!"
	//str.replace(1, 3, ""); // �� ������ "Ho world!" - ������� 3 �������� "ell"
	//cout << str << endl;
	//cout << "������� ���������: ";
	//getline(cin, newStr);
	//cout << "������ ������� ��������� = " << str.find(newStr, 6) << endl; // ���� ������� ��������� ��������� �������� � ������ ������� str
																		  // ��������� �� ��, � ����� ������� � ������ �������� �����
	//cout << "������ ������� ��������� = " << str.rfind(newStr) << endl; // ���� ������� ��������� ��������� �������� � ����� ������� str
																		// ��������� �� ��, � ����� ������� � ����� �������� �����
	/*int index;
	cout << "������� �������: ";
	cin >> index;
	cin.ignore();
	cout << "���������: " << str.substr(index) << endl; // ������������ ��� �������� �������, ������� � ��������� ������� (�����)
	cout << "���������: " << str.substr(index, 4) << endl; // ������������ 4 �������, ������� � ��������� ������� (�����)
	int n;
	cin >> n;
	str = to_string(n);
	str += "!!!";
	cout << str << endl;*/

	/*str = "Hello!";
	for (int i = 0; i < str.length(); i++) // ���������� � ������� �������
		str[i] = toupper(str[i]);
	cout << str << endl;

	for (int i = 0; i < str.length(); i++) // ���������� � ������ �������
		str[i] = tolower(str[i]);
	cout << str << endl;*/

	// ���������� ��������� ����� � ���� �����
	/*cout << "������� ������: ";
	cin >> str;
	cin.ignore();
	int num = stoi(str);
	cout << num << endl;*/

	// ������ length � size
	/*cout << "Size = " << str.size() << endl; // ����� size ���������� ������ length
	cout << "Length = " << str.length() << endl;

	for (int i = 0; i < str.length(); i++)
		cout << str[i] << " ";
	cout << endl;*/

	/*string name;
	cout << "������� ��� ���: ";
	// cin >> name; // ���������� �� ������� ������� ��� enter'a
	getline(cin, name);
	cout << "������, " << name << "!\n";
	unsigned short age;
	cout << "������� ���� �������: ";
	cin >> age;
	cin.ignore();
	cout << "���� " << age << " ���, ���!\n";
	string address;
	cout << "������� ���� �����: ";
	getline(cin, address);
	cout << "�� ����� �� " << address << ".\n";*/

	return 0;
}