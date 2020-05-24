#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std; 

class Point{
	public: 
	int x, y; 

		Point(){
			x = 0; 
			y = 0; 
		}; 

		Point(int xp, int yp){
			x = xp; 
			y = yp; 
		}; 

		friend ostream& operator<<(ostream& os, Point& pt){
			os << "(" << pt.x << "," << pt.y << ")"; 
			return os; 
		}; 
		
		Point& operator+(Point& pt){
			Point p; 
			p.x = x + pt.x; 
			p.y = y + pt.y; 
			return p; 
		}; 
		
		Point& operator-(Point& pt){
			Point p;
			p.x = x - pt.x; 
			p.y = y - pt.y; 
			return p; 
		}; 
		
};

class Shape{
	double area(); 
	double circumference(); 
	void box_point(); 
	void display(); 

};

class Circle: public Shape{
	Point a; 
	int radius; 
	public: 
	
		Circle(){
			radius = 0; 
		}
		
		Circle(Point& p1, int r){
			a = p1; 
			radius = r; 
		}
		
		double area(){
			return(M_PI*radius*radius); 
		}
		
		double circumference(){
			return (2*M_PI*radius); 
		}
		
		void box_point(){
			Point pt1(radius,radius);
			Point pt2(radius,-radius); 
			Point pt3(-radius, radius); 
			Point pt4(-radius, -radius); 
			
			Point b1 = a + pt1; 
			Point b2 = a + pt2; 
			Point b3 = a + pt3; 
			Point b4 = a + pt4; 
			
			cout << b1 << ", " << b2 << ", " << b3 << ", "  << b4; 
		}
		void display(){
			cout << "Class: Circle" << endl; 
			cout << "Area of Circle: " << area() << endl; 
			cout << "Circumference of Circle: " << circumference() << endl; 
			cout << "Bounding Box Points: "; 
			box_point(); 
			cout << "\n============================================" << endl; 
		}
};

class Square: public Shape{
	Point b, c, d, e; 
	public: 
		Square();
		Square(Point& p1, Point& p2, Point& p3, Point& p4){
			b = p1; 
			c = p2;
			d = p3; 
			e = p4; 
		} 
		
		double area(){
			Point side = b-c; 
			double length = sqrt(side.x*side.x + side.y*side.y);  
			return length; 
		}
		
		double circumference(){
			Point side = b-c; 
			double length = sqrt(side.x*side.x + side.y*side.y);  
			return (4*length); 
		}
		
		void box_point(){
			Point pt1(-1,-1);
			Point pt2(-1,1); 
			Point pt3(1,1); 
			Point pt4(1,-1); 
			
			Point b1 = b + pt1; 
			Point b2 = c + pt2; 
			Point b3 = d + pt3; 
			Point b4 = e + pt4; 
			
			cout << b1 << ", " << b2 << ", " << b3 << ", "  << b4;
		}
		void display(){
			cout << "Class: Square" << endl; 
			cout << "Area: " << area() << endl;  
			cout << "Perimeter: " << circumference() << endl; 
			cout << "Bounding Box Points: "; 
			box_point(); 
			cout << "\n============================================" << endl; 
		}
		 
};

class Triangle: public Shape{
	Point f, g, h; 
	public: 
		Triangle();
		Triangle(Point& p1, Point& p2, Point& p3){
			f = p1; 
			g = p2; 
			h = p3; 
		}
		
		double area(){
			double a = abs(f.x*(g.y - h.y) + g.x*(h.y - f.y) + h.x*(f.y - g.y)) / 2; 
			return a; 
		}
		
		double circumference(){
			Point side1 = f-g; 
			Point side2 = g-h; 
			Point side3 = h-f;  
			
			double length1 = sqrt(side1.x*side1.x + side1.y*side1.y); 	
			double length2 = sqrt(side2.x*side2.x + side2.y*side2.y);
			double length3 = sqrt(side3.x*side3.x + side3.y*side3.y);
	
			return length1 + length2 + length3; 
		}
		
		void box_point(){
			int fx = f.x; 
			int gx = g.x; 
			int hx = h.x; 
			
			int fy = f.y; 
			int gy = g.y; 
			int hy = h.y; 
			
			//Finding the minimum X value of the 3 points 
			int temp_minx = min(fx, gx); 
			int min_x = min(temp_minx, hx); 
			
			//Finding the minimum Y value of the 3 points
			int temp_miny = min(fy, gy); 
			int min_y = min(temp_miny, hy); 
			
			//Finding the maximum X value of the 3 points
			int temp_max_x = max(fx, gx); 
			int max_x = max(temp_max_x, hx); 
			
			//Finding the maximum Y value of the 3 points
			int temp_max_y = max(fy, gy); 
			int max_y = max(temp_max_y, hy); 
			
			Point b1(min_x, min_y); 
			Point b2(min_x, max_y); 
			Point b3(max_x, min_y); 
			Point b4(max_x, max_y); 
			
			cout << b1 << ", " << b2 << ", " << b3 << ", "  << b4;
			
		}
		void display(){
			cout << "Class: Triangle" << endl; 
			cout << "Area: " << area() << endl; 
			cout << "Perimeter: " << circumference() << endl; 
			cout << "Bounding Box Coordinates: "; 
			box_point(); 
			cout << "\n============================================" << endl; 
		}
};


int main(){
	
	// Creating a Circle
	Point cp1(1,1);
	Circle c(cp1,23); 
	c.display(); 
	
	//Creating a Square 
	Point cp2(-10,-5), cp3(-10,20), cp4(15,20), cp5(15,-5); 
	Square s(cp2, cp3, cp4, cp5); 
	s.display();  
	
	//Creating a Triangle 
	Point cp6(0,0), cp7(0,20), cp8(0,30); 
	Triangle t(cp6, cp7, cp8); 
	t.display(); 
}
