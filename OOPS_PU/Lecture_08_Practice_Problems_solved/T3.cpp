#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream in("output_binary.pgm",ios::binary);
	string type, comment;
	char ch;
	int i, j, width, height, maxval, temp;
	getline(in, type);
	getline(in, comment);
	in >> width >> height >> maxval;
	unsigned char *pixels = new unsigned char [height * width];
	in.read((char*) pixels, width * height);
	in.close();
	//put white column after every five columns
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j += 5)
			pixels[i * width + j] = 255;
	ofstream out("white_column.pgm",ios::binary);
	out << type << "\n";
	out << comment << "\n";
	out << width << " " << height << "\n";
	out << maxval ;
	out.write((char*) pixels, width * height);
	return 0;
}
