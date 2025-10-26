#include <iostream>
#include <fstream>
#include <cstdio>
#include <string.h>
using namespace std;
unsigned char* transform(unsigned char* p, int width, int height){
	unsigned char *q = new unsigned char[width * height];
	int i, j;
	for (i = 0 ; i < height ; i++)
		for (j = 0 ; j < width ; j++)
			q[j * height + height - i - 1] = p[i * width + j];
	return q;
}
int main(){
	ifstream in("flower.pgm",ios::binary);
	string type, comment;
	char ch, filename[20] = "image", int_char[10];
	int i, j, width, height, maxval;
	getline(in, type);
	getline(in, comment);
	in >> width >> height >> maxval;
	unsigned char *pixels = new unsigned char [height * width], *temp;
	in.read((char*) pixels, width * height);
	in.close();
	int size = width * height;
	ofstream out;
	//Generating 10 images by rotating image 90 degree in each image.
	for (int k = 1 ; k <= 20 ; k++){
		filename[0] = 0;	
		strcat(filename, "image");
		sprintf(int_char, "%d", k);
		strcat(filename, int_char);
		strcat(filename, ".pgm");
		out.open(filename, ios::binary);
		out << type << "\n";
		out << comment << "\n";
		out << width << " " << height << "\n";
		out << maxval << "\n";
		temp = transform(pixels, width, height);
		delete []pixels;
		pixels = temp;
		out.write((char*) pixels, width * height);
		out.close();
	}
	return 0;
}
