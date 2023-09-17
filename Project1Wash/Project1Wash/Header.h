#include <iostream>
#include <string>

using namespace std;

class Stiralka
{
private:
	bool isOn;
	string mode;
	int temperature;
	int time;
	int speed;
public:
	Stiralka() { isOn = false; mode = ""; temperature = 0; time = 0; speed = 0; };
	void turnOn() { cout << "\033[32mON\033[0m"; };
	void turnOff() { cout << "OFF"; };
	void setMode(string newMode) { this->mode = newMode; };
	void setTemperature(int newTemperature) { this->temperature = newTemperature; };
	void setTime(int newTime) { this->time = newTime; };
	void setSpeed(int newSpeed) { this->speed = newSpeed; };
	string GetChoice()
	{
		return "Mode: " + mode + "\nTemperature: " + to_string(temperature) + "\nTime: " + to_string(time) + "\nSpeed: " + to_string(speed);
	}
	~Stiralka() {};
};

