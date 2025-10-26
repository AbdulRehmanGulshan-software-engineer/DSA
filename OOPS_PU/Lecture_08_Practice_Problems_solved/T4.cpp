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
	//put 100 x 100 white box in center of the image
	for (i = height / 2 - 50 ; i < height / 2 + 50 ; i++)
		for (j = width / 2 - 50 ; j < width / 2 + 50 ; j++)
			pixels[i * width + j] = 255;
	ofstream out("white_box.pgm",ios::binary);
	out << type << "\n";
	out << comment << "\n";
	out << width << " " << height << "\n";
	out << maxval ;
	out.write((char*) pixels, width * height);
	return 0;
}
