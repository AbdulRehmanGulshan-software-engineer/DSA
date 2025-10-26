#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int width = 256, height = 256;
    int block_size = 8;   // each block is 8x8
    int blocks_per_row = width / block_size; // 32
    int blocks_per_col = height / block_size; // 32

    ofstream fout("blocks.pgm");
    fout << "P2\n";
    fout << "# Created by Abdul Rehman Gulshan\n";
    fout << width << " " << height << "\n";
    fout << "255\n";

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            int block_row = i / block_size;
            int block_col = j / block_size;
            int block_id  = block_row * blocks_per_row + block_col;
            
            int shade = 100 + block_id;   
            if (shade > 255) shade = shade % 256; // clamp/repeat
            
            fout << shade << " ";
        }
        fout << "\n";
    }

    fout.close();
    return 0;
}
