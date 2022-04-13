#include <iostream>
#include <string>
using namespace std;

// Задача 1
string multStr(string str, int num) {
	string res;
	for (int i = 0; i < num; i++)
		res += str;
	return res;
}
// Задача 2
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

	// Задача 1
	cout << "Задача 1.\nВведите строку:\n";
	getline(cin, str);
	cout << "Введите количество повторений:\n";
	cin >> n;
	cin.ignore();
	cout << multStr(str, n) << "\n\n";

	// Задача 2
	cout << "Задача 2.\nВведите сообщение:\n";
	getline(cin, str);
	if (checkSpam(str))
		cout << "Обнаружен спам!\n";
	else
		cout << "Спама не обнаружено.\n";








	// Методы - это функции, применяемые к объектам класса с помощью специального синтаксиса.
	/*string str; // объявление строковой переменной
	str = "Hello world!";
	cout << str << endl;
	string newStr = "12345";*/
	//str.insert(3, newStr/*, 2*/); // на экране - Hel12354lo world!
	// последний аргумент "2", показывает с какой позиции выводить вставляемый текст "newStr"
	//str.replace(1, 3, newStr); // на экране "H12345o world!"
	//str.replace(1, 3, ""); // на экране "Ho world!" - убираем 3 элемента "ell"
	//cout << str << endl;
	//cout << "Введите подстроку: ";
	//getline(cin, newStr);
	//cout << "Индекс первого вхождения = " << str.find(newStr, 6) << endl; // Ищем позицию вхождения введённого элемента с начала массива str
																		  // Указывает на то, с какой позиции с начала начинать поиск
	//cout << "Индекс первого вхождения = " << str.rfind(newStr) << endl; // Ищем позицию вхождения введённого элемента с конца массива str
																		// Указывает на то, с какой позиции с конца начинать поиск
	/*int index;
	cout << "Введите позицию: ";
	cin >> index;
	cin.ignore();
	cout << "Подстрока: " << str.substr(index) << endl; // Возвращается все элементы массива, начиная с введённого символа (цифры)
	cout << "Подстрока: " << str.substr(index, 4) << endl; // Возвращается 4 символа, начиная с введённого символа (цифры)
	int n;
	cin >> n;
	str = to_string(n);
	str += "!!!";
	cout << str << endl;*/

	/*str = "Hello!";
	for (int i = 0; i < str.length(); i++) // Возводится в верхний регистр
		str[i] = toupper(str[i]);
	cout << str << endl;

	for (int i = 0; i < str.length(); i++) // Возводится в нижний регистр
		str[i] = tolower(str[i]);
	cout << str << endl;*/

	// Превращает отдельные цифры в одно число
	/*cout << "Введите строку: ";
	cin >> str;
	cin.ignore();
	int num = stoi(str);
	cout << num << endl;*/

	// Методы length и size
	/*cout << "Size = " << str.size() << endl; // Метод size аналогичен методу length
	cout << "Length = " << str.length() << endl;

	for (int i = 0; i < str.length(); i++)
		cout << str[i] << " ";
	cout << endl;*/

	/*string name;
	cout << "Введите своё имя: ";
	// cin >> name; // считывание до первого пробела или enter'a
	getline(cin, name);
	cout << "Привет, " << name << "!\n";
	unsigned short age;
	cout << "Введите свой возраст: ";
	cin >> age;
	cin.ignore();
	cout << "Тебе " << age << " лет, ого!\n";
	string address;
	cout << "Введите свой адрес: ";
	getline(cin, address);
	cout << "Вы живёте на " << address << ".\n";*/

	return 0;
}