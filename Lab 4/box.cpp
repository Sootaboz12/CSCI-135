/*
Author: Mohammad Islam
Course: CSCI 137
Instructor: Genady Maryash
Assingment: Lab 8 A

Lab 8 A: Invers the image's color
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(string newFile, int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open(newFile);

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;
}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(string outfile, int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open(outfile);
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' ';
			ostr << endl;
		}
	}
	ostr.close();
	return;
}

void invert(int image[MAX_H][MAX_W], int& h, int& w){
    int invert[MAX_H][MAX_W];
    for(int i = 0; i < h; i++){
        for (int j = 0; j < w; j++){
            invert[i][j] = 255 - image[i][j];
        }
    }
    writeImage("outImage.pgm", invert, h, w);
}

void half(int image[MAX_H][MAX_W], int& h, int& w)
{
    int half[MAX_H][MAX_W];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (j >= w/2) {
                half[i][j] = 255 - image[i][j];
            }
            else {
                half[i][j] = image[i][j];
            }
        }
    }
    writeImage("outImage.pgm", half, h, w);
}

void box(int image[MAX_H][MAX_W], int& h, int& w)
{
    int box[MAX_H][MAX_W]; // Initializes the box 
    for (int i = 0; i < h; i++) { // takes in the first array
        for (int j = 0; j < w; j++) { // the second array therefore the color valeus
            if ((j >= (w/4) && i >= (h/4)) && (j <= ((w*3)/4) && i <= ((h*3)/4))) { // the first quarter of the image and the last quarter
                box[i][j] = 255; // sets teh array values of colors in those slots to white
            }
            else {
                box[i][j] = image[i][j]; // otherwise the image remains the same in other places.
            } //w rterye ryewe  reye w erw er yr yey ru ryu  teg df gr
        } // eryetyerylritjwet
    } // wryerthrubteiury

    writeImage("outImage.pgm", box, h, w);
} //w/ryeytur utytjtgdf/ wet wryey/ r uyu rrgsd/fse r yrt urt/ury ry riry

int main() {

	int img[MAX_H][MAX_W];
	int h, w;
	readImage("inImage.pgm", img, h, w); //wrye y etu rtur w erf a f r e y u rt r ew er wf er

	box(img, h, w);
}
