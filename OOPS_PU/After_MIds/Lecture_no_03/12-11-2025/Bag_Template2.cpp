#include <iostream>

using namespace std;

template <class T>
class Bag{
		int size, cSize;
		T *x;
		void resize(){
			T *t = new T[size + size];
			for (int i = 0 ; i < size ; i++)
				t[i] = x[i];
			delete []x;
			x = t;
			size += size;
		}
		void clear(){	
			delete []x;
			x = nullptr;
			cSize = size = 0;
		}
		Bag& copy(const Bag& b){
			x = new T[b.size];
			for (int i = 0 ; i < b.cSize ; i++)
				x[i] = b.x[i];
			size = b.size;
			cSize = b.cSize; 
			return *this;
		}
	public:
		Bag(int s = 10){	
			size = s;
			cSize = 0;
			x = new T[size];
		}
		Bag(const Bag& b){
			copy(b);
		}
		Bag& operator = (const Bag &b){
			clear();
			return copy(b);
		}
		void show() const{	
			for (int i = 0 ; i < cSize ; i++)
				cout << x[i] << ' ';
			cout << "\n";				
		}
		Bag& operator += (T x){
			if (cSize == size)	resize();
			this -> x[cSize++] = x;
			return *this;			
		}
		Bag& operator --(){
			if (cSize > 0)
				cSize--;
			return *this;
		}
		bool operator > (const Bag &b){
			int sum1 = 0, sum2 = 0;
			for (int i = 0 ; i < cSize ; i++)	sum1 += x[i];
			for (int j = 0 ; j < b.cSize ; j++)	sum2 += b.x[j];
			return sum1 < sum2;
		}
		~Bag(){	clear();			}
};
class Point{
	int x, y;
	public:
		Point(int x = 0, int y = 0){
			this -> x = x;
			this -> y = y;
		}
		friend ostream& operator << (ostream& out, const Point&p){
			out << p.x << '\t' << p.y << '\n';
			return out;
		}
};
int main(){
	Bag<Point> b1;
	b1 += Point(3, 5);
	b1 += Point(3, 4);
	b1 += Point(5, 5);
	b1 += Point(1, 6);
	b1.show();
	Bag<Point> b2 = b1, b3 = b1;
	b2 += Point(1, 2);
	b2.show();
	--b3;
	b3.show();
	b3 += Point(13, 25);
	b3.show();
	return 0;
}