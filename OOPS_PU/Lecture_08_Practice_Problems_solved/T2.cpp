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
	//place complete white row after every 5 rows
	for (i = 1 ; i < height ; i += 5)
		for (j = 0 ; j < width ; j++)
			pixels[i * width + j] = 255;
	ofstream out("white_row.pgm",ios::binary);
	out << type << "\n";
	out << comment << "\n";
	out << width << " " << height << "\n";
	out << maxval ;
	out.write((char*) pixels, width * height);
	return 0;
}
