#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

class Box {
private:
    int length{};
    int breadth{};
    int height{};
public:
    Box();
    Box(int length, int breadth, int height);
    Box(const Box &box);
    int getLength() const;
    int getBreadth() const;
    int getHeight() const;
    long long CalculateVolume() const;
    bool operator<(const Box &other) const;
    friend std::ostream& operator<<(std::ostream& out, const Box& box);
};

Box::Box() {}

Box::Box(int length, int breadth, int height)
    : length(length), breadth(breadth), height(height) {}

Box::Box(const Box &box)
    : length(box.length), breadth(box.breadth), height(box.height) {}

int Box::getLength() const {
    return length;
}

int Box::getBreadth() const {
    return breadth;
}

int Box::getHeight() const {
    return height;
}

long long Box::CalculateVolume() const {
    return static_cast<long long>(length) * breadth * height;
}

bool Box::operator<(const Box &other) const {
    if (length < other.length) {
        return true;
    } else if (length == other.length && breadth < other.breadth) {
        return true;
    } else if (length == other.length && breadth == other.breadth && height < other.height) {
        return true;
    } else {
        return false;
    }
}

std::ostream& operator<<(std::ostream& out, const Box& box) {
    out << box.length << " " << box.breadth << " " << box.height;
    return out;
}


// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
