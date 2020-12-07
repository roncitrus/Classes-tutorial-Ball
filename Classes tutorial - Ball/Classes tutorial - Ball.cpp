#include <iostream>
using namespace std;

class Ball
{
public:
	Ball() {
		string m_colour = "Black";
		double radius = 10.0;
	};

	Ball(string colour) {
		m_colour = colour;
		double m_radius = 10.0;
	}

	Ball(double radius) {
		m_radius = radius;
		string m_colour = "Black";
	}

	Ball(string colour, double radius) {
		m_radius = radius;
		m_colour = colour;
	}

	void print() {
		cout << "Colour: " << m_colour << ", Radius: " << m_radius << endl;
	}
private:
	string m_colour = "Black";
	double m_radius = 10.0;
};


int main()
{
	Ball def{};
	def.print();

	Ball blue{ "blue" };
	blue.print();

	Ball twenty{ 20.0 };
	twenty.print();

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

	return 0;
}