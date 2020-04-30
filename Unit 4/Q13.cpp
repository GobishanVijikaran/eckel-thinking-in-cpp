/*

Create an abstract data type that represents a videotape in a video rental store. Try to consider 
all the data and operations that may be necessary for the Video type to work well within the video 
rental management system. Include a print( ) member function that displays information about the Video.

*/
#include <iostream>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include "TMA2Question1.h"

using namespace std; 

void VideoRental::fill_database(ifstream& input_file, VideoRental arr[], int size){
	string dvd[size];  
	
	for(int i=0; i<size; i++){
		getline(input_file, dvd[i]);
		stringstream ss(dvd[i]); 
		getline(ss, arr[i].name, ',');
		getline(ss, arr[i].genre, ',');
		getline(ss, arr[i].year, ',');
		getline(ss, arr[i].price, ',');
		getline(ss, arr[i].available, ',');
	} 
}

void VideoRental::checkout(VideoRental arr[], int index, string input){
	
	string dvd_availability = arr[index].available; 
	int length = dvd_availability.length(); 
	char in[] = "yes"; 
	char out[] = "no"; 
	char available[length]; 
	
	strcpy(available, dvd_availability.c_str()); 
	if(strcmp(available, in) == 0){
		arr[index].available = out; 
		cout << "\n" << input << " added to cart." << "\n " << endl;
	}
	
	else if(strcmp(available, out) == 0){
		cout << "\n" << input << " is already checked out! Try another DVD! " << endl;
	}
}

void VideoRental::print(VideoRental arr[], int size){
	
	for(int i=0; i<size; i++){
		cout << "Name of Movie: " << arr[i].name << "\n" << "Genre: " << arr[i].genre << "\n" << "Year: " << arr[i].year << "\n"; 
		cout << "Price: $" << arr[i].price << "\n" << "Available? : " << arr[i].available << "\n" << endl;
	}
	cout << "What movie do you want to check out?" << endl; 
}


int main(){
	
	const int size = 10;
	VideoRental dvd[size]; 

	ifstream input("test.txt");  
	
	dvd[size].fill_database(input, dvd, size); 

	cout << "Welcome to COMP206 Video Rental!" << "\n" << endl; 
	cout << "--------------------------------------------------------" << endl; 
	cout << "Here are the DVDs we have: " << "\n" << endl; 

	string takeout; 
	char response;
	
	dvd[size].print(dvd, size); 
	
	while(true){
		cin >> takeout;
		for (int k=0; k < size; k++){
			if(dvd[k].name == takeout){
				dvd[size].checkout(dvd, k, takeout); 
			}
		}
		
		cout << "Continue Shopping? (y/n)" << endl; 
		cin >> response; 
		
		if(response == 'y'){
			dvd[size].print(dvd, size);
		}
		
		else if(response == 'n'){
			cout << "Thank you for shopping! Approach the cashier to pay." << endl; 
			exit(0); 
		}
	}
}
