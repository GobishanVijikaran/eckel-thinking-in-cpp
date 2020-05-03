/*

Create a Hen class. Inside this, nest a Nest class. Inside Nest, place an Egg class. Each class should have a display( ) member function. 
In main( ), create an instance of each class and call the display( ) function for each one.

*/

#include <iostream>

using namespace std; 

class Hen{
	
	public:
		Hen(); 
		~Hen(); 
		void display(); 
		
		class Nest{
			
			public: 
			Nest(); 
			~Nest(); 
			void display(); 
			
				class Egg{
					
					public: 
					Egg(); 
					~Egg(); 
					void display(); 
				};
		};
}; 

Hen::Hen(){
	cout << "Hen constructor called..." << endl; 
}

Hen::~Hen(){
	cout << "Hen destructor called..." << endl; 
}

void Hen::display(){
	cout << "Hen display() ..." << endl; 
}

Hen::Nest::Nest(){
	cout << "Nest constructor called..." << endl; 
}

Hen::Nest::~Nest(){
	cout << "Nest destructor called..." << endl; 
}

void Hen::Nest::display(){
	cout << "Nest display() ..." << endl; 
}

Hen::Nest::Egg::Egg(){
	cout << "Egg constructor called..." << endl; 
}

Hen::Nest::Egg::~Egg(){
	cout << "Egg destructor called..." << endl; 
}

void Hen::Nest::Egg::display(){
	cout << "Egg display() ..." << endl; 
}

int main(){
	
	Hen* hen_ptr = new Hen; 
	Hen::Nest* nest_ptr = new Hen::Nest; 
	Hen::Nest::Egg* egg_ptr = new Hen::Nest::Egg;  
	
	hen_ptr->display(); 
	nest_ptr->display(); 
	egg_ptr->display(); 
 
 	delete hen_ptr; 
 	delete nest_ptr; 
 	delete egg_ptr; 
}
