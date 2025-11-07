class Student {
	static int count;
public:
	Student() { count++; }
	static void showCount() {
		cout << count;
	}
};
int Student::count = 0;
