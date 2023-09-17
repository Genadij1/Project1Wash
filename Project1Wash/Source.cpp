#include "Header.h"
#include <cstdlib>
#include <thread>
#include <chrono>

int main()
{
	Stiralka stiralka;
	cout << "Stiralka" << endl;
	cout << "1 - turn on" << endl;
	int a;
	cin >> a;
	if (a == 1)
	{
		stiralka.turnOn();
		cout << "\nEnter the mode of washing: 1 - delicate, 2 - normal, 3 - intensive" << endl;
		int mode;
		cin >> mode;
		switch (mode)
		{
		case 1:
			stiralka.setMode("delicate");
			break;
		case 2:
			stiralka.setMode("normal");
			break;
		case 3:
			stiralka.setMode("intensive");
			break;
		default:
			cout << "Error" << endl;
			break;
		}
		cout << "\nEnter the temperature of washing: 1 - 30, 2 - 40, 3 - 60, 4 - 90" << endl;
		int temp;
		cin >> temp;
		switch (temp)
		{
		case 1:
			stiralka.setTemperature(30);
			break;
		case 2:
			stiralka.setTemperature(40);
			break;
		case 3:
			stiralka.setTemperature(60);
			break;
		case 4:
			stiralka.setTemperature(90);
			break;
		default:
			cout << "Error" << endl;
			break;
		}
	Spin:
		cout << "\nEnter the spin speed: 1 - 400, 2 - 600, 3 - 800, 4 - 1000" << endl;
		int speed;
		cin >> speed;
		switch (speed)
		{
		case 1:
			stiralka.setSpeed(400);
			break;
		case 2:
			stiralka.setSpeed(600);
			break;
		case 3:
			stiralka.setSpeed(800);
			break;
		case 4:
			stiralka.setSpeed(1000);
			break;
		default:
			cout << "Error" << endl;
			goto Spin;
		}
		cout << "\nEnter the time of washing: 1 - 30, 2 - 60, 3 - 90, 4 - 120" << endl;
		int time;
		cin >> time;
		switch (time)
		{
		case 1:
			stiralka.setTime(30);
			break;
		case 2:
			stiralka.setTime(60);
			break;
		case 3:
			stiralka.setTime(90);
			break;
		case 4:
			stiralka.setTime(120);
			break;
		default:
			cout << "Error" << endl;
			break;
		};
		cout << "\n" << stiralka.GetChoice() << endl;
		cout << "\n run?\n 1 - yes, 2 - Turn OFF" << endl;
		int run;
		cin >> run;
		if (run == 1)
		{
			char drum[24] = { '|', '/', '-', '\\','|', '/', '-', '\\','|', '/', '-', '\\','|', '/', '-', '\\','|', '/', '-', '\\','|', '/', '-', '\\' };
			int drumIndex = 0;
			bool isWashing = true;
			while (isWashing) {
				cout << "Washing process" << drum[drumIndex] << "\r";
				cout.flush();
				this_thread::sleep_for(chrono::milliseconds(100));
				drumIndex = (drumIndex + 1) % 24;
				if (drumIndex == 0)
				{
					isWashing = false;
				}
			}
			cout << "\nWashing is over" << endl;
		}
		else
		{
			stiralka.turnOff();
		}

		system("pause");
		return 0;
	}
}