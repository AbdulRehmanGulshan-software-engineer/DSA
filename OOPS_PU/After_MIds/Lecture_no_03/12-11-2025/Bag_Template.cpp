#include <iostream>

using namespace std;

template <class type>
class Bag{
		int size, cSize;
		type *x;
		void resize(){
			type *t = new type[size + size];
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
			x = new type[b.size];
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
			x = new type[size];
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
		Bag& operator += (type x){
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
			type sum1 = 0, sum2 = 0;
			for (int i = 0 ; i < cSize ; i++)	sum1 += x[i];
			for (int j = 0 ; j < b.cSize ; j++)	sum2 += b.x[j];
			return sum1 < sum2;
		}
		~Bag(){	clear();			}
};
int main(){
	Bag<int> b1;
	b1 += 12;
	b1 += 23;
	b1 += 2;
	b1 += 45;
	b1.show();
	Bag<int> b2 = b1, b3 = b1;
	b2 += 40;
	--b3;
	b3 += 20;
	return 0;
}