/*

Create an abstract data type that represents a videotape in a video rental store. Try to consider 
all the data and operations that may be necessary for the Video type to work well within the video 
rental management system. Include a print( ) member function that displays information about the Video.

*/

#include <iostream>
#include <string>

using namespace std; 

#ifndef VIDEO_H
#define VIDEO_H

struct VideoRental{
	
	string name; 
	string year; 
	string genre; 
	string price;
	string available;  
	
	void fill_database(ifstream& input_file, VideoRental arr[], int size);
	void checkout(VideoRental arr[], int index, string input); 
	void print(VideoRental arr[], int size); 
};


#endif // VIDEO_H ///:~
