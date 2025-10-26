#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream in("scene1.ppm",ios::binary);
	string type, comment;
	char ch;
	int i, j, width, height, maxval, temp;
	getline(in, type);
	getline(in, comment);
	in >> width >> height >> maxval;
	unsigned char *pixels = new unsigned char [height * width * 3];
	in.read((char*) pixels, width * height * 3);
	in.close();
	int size = width * height * 3;
	//removing green color from the image
	for (i = 1 ; i < size  ; i += 3)
		pixels[i] = 0;
	ofstream out("red_blue.ppm",ios::binary);
	out << type << "\n";
	out << comment << "\n";
	out << width << " " << height << "\n";
	out << maxval ;
	out.write((char*) pixels, width * height * 3);
	return 0;
}
