#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>

using namespace std;

//function prototypes
void advisory();
void opening();
void screensize();
void home();

//loadings
class Loading
{
public:
	void calculator_loading();
	void messaging_loading();
	void games_loading();

	void pop_quiz_loading(); 
	void boolean_quiz_loading();
	void mad_libs_loading();

	void calendar_loading();
	void gallery_loading();
	void alarm_clock_loading();
	void word_day_loading();
	void browser_loading();

	void pay_electricity_loading();
	void flight_booking_loading();
	void hotel_reservation_loading();

	void power_off_shutting();
	void mars_one();
};

//functions for applications
void calculator();				
void messaging();				
void games();					

void pop_quiz();				
void boolean_quiz();			
void mad_libs();				

void calendar();				
void gallery();					
void alarm_clock();				
void word_day();				
void browser();					

void pay_electricity();
void flight_booking();
void hotel_reservation();

void power_off();				

int main()
{
	screensize();
	advisory();
	opening();
	central: 
	system("color F0");
	system("CLS");
	home();
	char app_num;
	cout << "    Enter the Application you want to access(1-9): ";
	cin >> app_num;
	cout << endl;
	switch (app_num)
	{
	case '0':
	{
		system("CLS");
		Loading obj;
		obj.mars_one();
		goto central;
		break;
	}
	case '1':		 //calculator
	{
	mycalculator:
			system("CLS");
			Loading obj;
			obj.calculator_loading();
			calculator();
			char choice;
			cout << " ======================================================== " << endl;
			cout << "||     Do you want to use the C++ Calculator again?     ||"<< endl;
			cout << "||        [Y] = YES          [B] = Back to home ->      ||"<< endl;
			cout << " ======================================================== " << endl;
			cout << "Choice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto mycalculator;
			}
			else if (choice == 'B' || choice == 'b')
			{
				goto central;
			}
			else
			{
				for (;;)
				{
					cout << " ======================================================== " << endl;
					cout << "||                     Invalid Choice!                  ||" << endl;
					cout << "||     Do you want to use the C++ Calculator again?     ||" << endl;
					cout << "||         [Y] = YES          [B] = Back to home ->     ||" << endl;
					cout << " ======================================================== " << endl;
					cout << "Choice: ";
					cin >> choice;
					if (choice == 'Y' || choice == 'y')
					{
						system("CLS");
						goto mycalculator;
					}
					if (choice == 'B' || choice == 'b')
					{
						system("CLS");
						goto central;
					}
				}
			}
		break;
	}
	case '2':		 //messaging
	{ 
	mymessaging:
			system("CLS");
			Loading obj;
			obj.messaging_loading();
			messaging();
			char choice;
			cout << " ======================================================== " << endl;
			cout << "||          Do you want to enter Message again?         ||"<< endl;
			cout << "||        [Y] = YES          [B] = Back to home ->      ||"<< endl;
			cout << " ======================================================== " << endl;
			cout << "Choice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
			system("CLS");
			goto mymessaging;
			}
			else if (choice == 'B' || choice == 'b')
			{
			goto central;
			}
			else
			{
				for (;;)
				{
					cout << " ======================================================== " << endl;
					cout << "||                     Invalid Choice!                  ||" << endl;
					cout << "||          Do you want to enter Message again?         ||" << endl;
					cout << "||         [Y] = YES          [B] = Back to home ->     ||" << endl;
					cout << " ======================================================== " << endl;
					cout << "Choice: ";
					cin >> choice;
					if (choice == 'Y' || choice == 'y')
					{
						system("CLS");
						goto mymessaging;
					}
					if (choice == 'B' || choice == 'b')
					{
						system("CLS");
						goto central;
					}
				}
			}	
		break;
	}
	case '3':		 //games
	{
	mygames:
		system("CLS");
		char game;
		Loading obj;
		obj.games_loading();
		games();
		cout << " ======================================================== " << endl;
		cout << "                 Choose your Game (1-3): ";
		cin >> game;

	if (game == '1')		//Pop-gramming
		{
			char choice;
			mypop_quiz:
			system("CLS");
			Loading obj;
			obj.pop_quiz_loading();
			pop_quiz();
			cout << "\n";
			cout << " ======================================================== " << endl;
			cout << "||               Play Pop-gramming again?               ||" << endl;
			cout << "||         [Y] = YES          [G] = Game Menu ->        ||" << endl;
			cout << " ======================================================== " << endl;
			cout << " \nChoice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto mypop_quiz;
			}
			else if (choice == 'G' || choice == 'g')
			{
				system("CLS");
				goto mygames;
			}
			else
			{
				for (;;)
				{
					cout << " ======================================================== " << endl;
					cout << "||                    Invalid Choice!                   ||" << endl;
					cout << "||               Play Pop-gramming again?               ||" << endl;
					cout << "||         [Y] = YES           [G] = Game Menu ->       ||" << endl;
					cout << " ======================================================== " << endl;
					cout << " \nChoice: ";
					cin >> choice;
					if (choice == 'Y' || choice == 'y')
					{
						system("CLS");
						goto mypop_quiz;
					}
					if (choice == 'G' || choice == 'g')
					{
						system("CLS");
						goto mygames;
					}
				}
			}
		}
	else if (game == '2')
		{
			char choice;
			myboolean_quiz:
			system("CLS");
			Loading obj;
			obj.boolean_quiz_loading();
			boolean_quiz();
			cout << "\n";
			cout << " ======================================================== " << endl;
			cout << "||               Play Boolean Quiz again?               ||" << endl;
			cout << "||         [Y] = YES          [G] = Game Menu ->        ||" << endl;
			cout << " ======================================================== " << endl;
			cout << " \nChoice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto myboolean_quiz;
			}
			else if (choice == 'G' || choice == 'g')
			{
				system("CLS");
				goto mygames;
			}
			else
			{
				for (;;)
				{
					cout << " ======================================================== " << endl;
					cout << "||                    Invalid Choice!                   ||" << endl;
					cout << "||               Play Boolean Quiz again?               ||" << endl;
					cout << "||         [Y] = YES           [G] = Game Menu ->       ||" << endl;
					cout << " ======================================================== " << endl;
					cout << " \nChoice: ";
					cin >> choice;
					if (choice == 'Y' || choice == 'y')
					{
						system("CLS");
						goto myboolean_quiz;
					}
					if (choice == 'G' || choice == 'g')
					{
						system("CLS");
						goto mygames;
					}
				}
			}
		}
	else if (game == '3')		//Mad Libs
		{
			char choice;
			mymad_libs:
			system("CLS");
			Loading obj;
			obj.mad_libs_loading();
			mad_libs();
			cout << "\n";
			cout << " ======================================================== " << endl;
			cout << "||                  Play Mad Libs again?                ||" << endl;
			cout << "||            [Y] = YES          [G] = Game Menu ->     ||" << endl;
			cout << " ======================================================== " << endl;
			cout << " \nChoice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto mymad_libs;
			}
			else if (choice == 'G' || choice == 'g')
			{
				system("CLS");
				goto mygames;
			}
			else
			{
				for (;;)
				{
					cout << " ======================================================== " << endl;
					cout << "||                    Invalid Choice!                   ||" << endl;
					cout << "||                  Play Mad Libs again?                ||" << endl;
					cout << "||         [Y] = YES           [G] = Game Menu ->       ||" << endl;
					cout << " ======================================================== " << endl;
					cout << " \nChoice: ";
					cin >> choice;
					if (choice == 'Y' || choice == 'y')
					{
						system("CLS");
						goto mymad_libs;
					}
					if (choice == 'G' || choice == 'g')
					{
						system("CLS");
						goto mygames;
					}
				}
			}
		}
	else if (game == '4')
		{
			goto central;
		}
	else
	{
		cout << " ======================================================== " << endl;
		cout << "|                  Incorrect game number!                |" << endl;
		cout << "|                     Invalid Choice!                    |" << endl;
		cout << "|              The C++ Games will EXIT soon!             |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(2000);
		goto central;
    }
	}
	case '4':		 //Calendar
	{
		system("CLS");
		char choice;
		Loading obj;
		obj.calendar_loading();
		calendar();
		cout << "|                                                        |" << endl;
		cout << "|                     Exit Calendar?                     |"<< endl;
		cout << "|                  [B] = Back to home ->                 |"<< endl;
		cout << " ======================================================== " << endl;
		cout << "Choice: ";
		cin >> choice;
		if (choice == 'B' || choice == 'b')
		{
			goto central;
		}
		else
		{
			for(;;)
			{
				cout << " ======================================================== " << endl;
				cout << "|                         Error!                         |" << endl;
				cout << "|               Press [B] to exit calendar..             |" <<endl;
				cout << " ======================================================== " << endl;
				cout << "Choice: ";
				cin >> choice;
				if (choice == 'B' || choice == 'b')
				{
					goto central;
				}
			}
		}
	}
	case '5':		 //Gallery
	{
		system("CLS");
		char choice;
		Loading obj;
		obj.gallery_loading();
		gallery();

		cout << "|                     Exit Gallery ?                     |" << endl;
		cout << "|                  [B] = Back to home ->                 |" << endl;
		cout << " ======================================================== " << endl;
		cout << "Choice: ";
		cin >> choice;
		if (choice == 'B' || choice == 'b')
		{
			goto central;
		}
		else
		{
			for (;;)
			{
				cout << " ======================================================== " << endl;
				cout << "|                         Error!                         |" << endl;
				cout << "|               Press [B] to exit Gallery..              |" << endl;
				cout << " ======================================================== " << endl;
				cout << "Choice: ";
				cin >> choice;
				if (choice == 'B' || choice == 'b')
				{
					goto central;
				}
			}
		}
		break;
	}
	case '6':		//Alarm Clock
	{
		system("CLS");
		char choice;
		Loading obj;
		obj.alarm_clock_loading();
		myalarm_clock:
		alarm_clock();
		cout << "\n\n";
		cout << " ======================================================== " << endl;
		cout << "||          Do you want to set Alarm Time again?        ||" << endl;
		cout << "||         [Y] = YES          [B] = Back to home ->     ||" << endl;
		cout << " ======================================================== " << endl;
		cout << "Choice: ";
		cin >> choice;
		cout << "\n\n";
		if (choice == 'Y' || choice == 'y')
		{
			system("CLS");
			goto myalarm_clock;
		}
		else if (choice == 'B' || choice == 'b')
		{
			goto central;
		}
		else
		{
			for (;;)
			{
				cout << " ======================================================== " << endl;
				cout << "||                     Invalid Choice!                  ||" << endl;
				cout << "||          Do you want to set Alarm Time again?        ||" << endl;
				cout << "||         [Y] = YES          [B] = Back to home ->     ||" << endl;
				cout << " ======================================================== " << endl;
				cout << "Choice: ";
				cin >> choice;
				if (choice == 'Y' || choice == 'y')
				{
					system("CLS");
					goto myalarm_clock;
				}
				if (choice == 'B' || choice == 'b')
				{
					system("CLS");
					goto central;
				}
			}
		}
		
		break;
	}
	case '7':		//Word of the Day
	{
		system("CLS");
		Loading obj;
		obj.word_day_loading();
		word_day();
		char choice;
		cout << "|                  Exit Word of the Day?                 |" << endl;
		cout << "|                  [B] = Back to home ->                 |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << " Choice: ";
		cin >> choice;
		if (choice == 'B' || choice == 'b')
		{
			goto central;
		}
		else
		{
			for (;;)
			{
				cout << " ======================================================== " << endl;
				cout << "|                         Error!                         |" << endl;
				cout << "|           Press [B] to exit Word of the Day..          |" << endl;
				cout << " ======================================================== " << endl;
				cout << "Choice: ";
				cin >> choice;
				if (choice == 'B' || choice == 'b')
				{
					goto central;
				}
			}
		}
		break;
	}
	case '8':		//browser
	{
		char choice1;
		system("CLS");
		Loading obj;
		obj.browser_loading();
		do
		{
			cout << " Enable Internet? [Y]=Yes [N]=No [B]=Back to Home" << endl;
			cout << "\n Choice: ";
			cin >> choice1;
			if (choice1 == 'Y' || choice1 == 'y')
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                                                        |" << endl;
				cout << "|          You can now use the internet for FREE!        |" << endl;
				cout << "|                                                        |" << endl;
				cout << " ======================================================== " << endl;
				cout << endl;
				break;
			}
			else if (choice1 == 'N' || choice1 == 'n')
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                                                        |" << endl;
				cout << "| You cant access different sites.Please enable internet.|" << endl;
				cout << "|                                                        |" << endl;
				cout << " ======================================================== " << endl;
				cout << endl;
			}
			else if (choice1 == 'B' || choice1 == 'b')
			{
				system("CLS");
				goto central;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                                                        |" << endl;
				cout << "|         Invalid Choice. Please enable internet.        |" << endl;
				cout << "|                                                        |" << endl;
				cout << " ======================================================== " << endl;
				cout << endl;
			}
		} while (choice1 != 'Y' || choice1 != 'y');
		cout << endl << endl;
		cout << "                 Press ANY KEY to continue...          " << endl;
		_getch();
		mybrowser:
		string link;
		char choice;
		browser();
		linksite:
		cin.ignore();
		cout << endl;
		cout << " Please enter the link of the site you want to access" << endl;
		cout << " https://";
		getline(cin, link);
		if (link == "www.cppelectricity.com")
		{
		cpp_electricity:
			system("CLS");
			Loading obj;
			obj.pay_electricity_loading();
			pay_electricity();
			cout << "\n\n";
			cout << " ======================================================== " << endl;
			cout << "||                Pay Electric Bill again?              ||" << endl;
			cout << "||         [Y] = YES        [B] = Back to Browser ->    ||" << endl;
			cout << " ======================================================== " << endl;
			cout << "Choice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto cpp_electricity;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				goto mybrowser;
			}
			else
			{
				cout << " ======================================================== " << endl;
				cout << "                      Invalid Choice!                     " << endl;
				cout << "               PayElectricity will EXIT soon!             " << endl;
				cout << " ======================================================== " << endl;
				Sleep(2000);
				goto mybrowser;
			}

		}
		else if (link == "www.cppflight.com")
		{
		cpp_flight:
			system("CLS");
			Loading obj;
			obj.flight_booking_loading();
			flight_booking();
			cout << "\n\n";
			cout << " ======================================================== " << endl;
			cout << "||                Book a flight again?                  ||" << endl;
			cout << "||        [Y] = YES        [B] = Back to Browser ->     ||" << endl;
			cout << " ======================================================== " << endl;
			cout << "Choice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto cpp_flight;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				goto mybrowser;
			}
			else
			{
				cout << " ======================================================== " << endl;
				cout << "                      Invalid Choice!                     " << endl;
				cout << "               FlightBooking will EXIT soon!              " << endl;
				cout << " ======================================================== " << endl;
				Sleep(2000);
				goto mybrowser;
			}

		}
		else if (link == "www.cpphotel.com")
		{
		cpp_hotel:
			system("CLS");
			Loading obj;
			obj.hotel_reservation_loading();
			hotel_reservation();
			cout << "\n\n";
			cout << " ======================================================== " << endl;
			cout << "||                  Reserve a Room again?               ||" << endl;
			cout << "||        [Y] = YES        [B] = Back to Browser ->     ||" << endl;
			cout << " ======================================================== " << endl;
			cout << "Choice: ";
			cin >> choice;
			cout << "\n\n";
			if (choice == 'Y' || choice == 'y')
			{
				system("CLS");
				goto cpp_hotel;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				goto mybrowser;
			}
			else
			{
				cout << " ======================================================== " << endl;
				cout << "                     Invalid Choice!                     " << endl;
				cout << "              HotelReservation will EXIT soon!           " << endl;
				cout << " ======================================================== " << endl;
				Sleep(2000);
				goto mybrowser;
			}
		}
		else if (link == "4")
		{
			goto central;
		}
		else
		{
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "| The site you want to access was blocked by C++ Browser |" << endl;
		cout << "|         Press ANY key to enter link again......        |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << endl;
		goto linksite;
		}
		break;
	}
	case '9':		//power off
	{
		system("CLS");
		power_off();
		Loading obj;
		obj.power_off_shutting();
		exit(1);
		break;
	}
	default:
	{
		cout << " ======================================================== " << endl;
		cout << "|                      Invalid Input!                    |" << endl;
		cout << "|     Please enter the correct number for application!   |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(2000);
		goto central;
	}
	}
	_getch();
	return 0;
}
void advisory()
{
	system("CLS");
	system("color F4");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                        Advisory                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|       To experience better view and display of the     |" << endl;
	cout << "|   C++ Phone, Please set these default values for the   |" << endl;
	cout << "|                     console screen.                    |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Layout: Window Size             Font: Raster Fonts    |" << endl;
	cout << "|          Width: 58                     Size:  8x12     |" << endl;
	cout << "|          Height: 52                                    |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << "                 Press ANY key to continue...             " << endl;
	_getch();
}
void opening()
{
	for (int j = 0; j < 2; j++)
	{
		system("CLS");
		system("color F1");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << "                            C ";
		Sleep(500);
		system("color F2");
		cout << "+ ";
		Sleep(500);
		system("color F3");
		cout << "+ " << endl<<endl;
		Sleep(500);
		system("color F1");
		cout << "                          P ";
		Sleep(500);
		system("color F2");
		cout << "H ";
		Sleep(500);
		system("color F3");
		cout << "O ";
		Sleep(500);
		system("color F4");
		cout << "N ";
		Sleep(500);
		system("color F5");
		cout << "E "<<endl<<endl;
		Sleep(500);
		system("color F4");
		cout << "                            . ";
		Sleep(500);
		system("color F4");
		cout << ". ";
		Sleep(500);
		system("color F4");
		cout << ". ";
		Sleep(500);
	}
}
void screensize()
{
HWND console = GetConsoleWindow();
RECT r;
GetWindowRect(console, &r); 
MoveWindow(console, r.left, r.top, 500, 680, TRUE); 
}
void home()
{
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                        C++ PHONE                       |" << endl;
	cout << "| C++ PHONE is an improvised phone using C++ Programming.|" << endl;
	cout << "|   The C++ Phone offers a variety of applications that  |" << endl;
	cout << "|            the user can use and interact with.         |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|             ===============================            |" <<endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" <<endl;
	cout << "|             ||   |+/-|  [1] Calculator   ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |MSG|  [2] Messaging    ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |<G>|  [3] Games        ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |Apr|  [4] Calendar     ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |^-^|  [5] Gallery      ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   | |_|  [6] Alarm Clock  ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |WOD|  [7] Word of the  ||            |" << endl;
	cout << "|             ||   |___|         Day       ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |-O-|  [8] Browser      ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |POW|  [9] Power Off    ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n";
}

void Loading::calculator_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |+/-|  [1] Calculator             Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::messaging_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |MSG|  [2] Messaging              Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::games_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |<G>|  [3] Games                  Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}

void Loading::pop_quiz_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |<G>|  [1] Pop-gramming Quiz      Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::boolean_quiz_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |<G>|  [2] Boolean Quiz           Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::mad_libs_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |<G>|  [3] Mad Libs               Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}

void Loading::calendar_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |Apr|  [4] Calendar               Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::gallery_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |^-^|  [5] Gallery                Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::alarm_clock_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       | |_|  [6] Alarm Clock            Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::word_day_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |WOD|  [7] Word of the Day        Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::browser_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |-O-|  [8] C++ Browser            Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
	system("CLS");
	system("color F4");
	cout << " ======================================================== " << endl;
	cout << "|                      C++ Browser                       |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|  New Tab      x | +                           _  O  X  |" << endl;
	cout << " ======================================================== " << endl;
	cout << "| <- -> C++ | https://                               ->> |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   |-O-|  [8] C++ Browser  ||             |" << endl;
	cout << "|            ||   |___|                   ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                     The C++ Browser                    |" << endl;
	cout << "|     The C++ Browser let the users use the internet     |" << endl;
	cout << "|                        for FREE!                       |" << endl;
	cout << "|    In this app, you can pay your electricity bills,    |" << endl;
	cout << "|  reserve hotels across the country and book a flight!  |" << endl;
	cout << "|                          ENJOY!                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| ====================================================== |" << endl;
	cout << "|   Please enable the C++ Internet to access different   |" << endl;
	cout << "|                          sites!                        |" << endl;
	cout << "| ====================================================== |" << endl;
	cout << endl;
}

void Loading::pay_electricity_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |-O-|  [1] C++ Pay Electricty     Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::flight_booking_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |-O-|  [2] C++ Flight Booking     Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}
void Loading::hotel_reservation_loading()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                         Loading...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |-O-|  [3] C++ Hotel Reservation  Loading...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                         Loading...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}

void Loading::power_off_shutting()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                   Shutting Down...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |POW|  [9] Power Off        Shutting Down...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                   Shutting Down...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
}

void Loading::mars_one()
{
	for (int i = 0; i < 2; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << "|                                     Please Wait...     |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|        ___                                             |" << endl;
		cout << "|       |<M>|  [O] CASE 0             Please Wait...     |" << endl;
		cout << "|       |___|                                            |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                     Please Wait...     |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
		cout << endl;
	}
	system("CLS");
	for (int i = 0; i < 100; i++)
	{
		system("color 0F");
		cout << "0101010101010101010101010101010101010101010101010101010101" << endl;
		cout << "1010101010101010101010101010101010101010101010101010101010" << endl;
		cout << "0101010101010101010101010101010101010101010101010101010101" << endl;
		cout << endl;
		system("color F0");
		cout << "1010101010101010101010101010101010101010101010101010101010" << endl;
		cout << "0101010101010101010101010101010101010101010101010101010101" << endl;
		cout << "1010101010101010101010101010101010101010101010101010101010" << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		system("CLS");
		system("color F4");
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                    CONGRATULATIONS!!                   |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		system("color F5");
		cout << "|                                                        |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|                    CONGRATULATIONS!!                   |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|                                                        |" << endl;
		Sleep(250);
		system("color F6");
		cout << "|                                                        |" << endl;
		cout << "|                    CONGRATULATIONS!!                   |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(250);
	}
	Sleep(1000);
	system("CLS");
	system("color F4");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                    CONGRATULATIONS!!                   |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|       You have just WON a TWO-WAY TICKET TO MARS!!     |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|             Brought to you by: C++ Mars One            |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << " This will end in :";
	Sleep(1000);
	cout << " 10 ";
	Sleep(1000);
	cout << " 9 ";
	Sleep(1000);
	cout << " 8 ";
	Sleep(1000);
	cout << " 7 ";
	Sleep(1000);
	cout << " 6 ";
	Sleep(1000);
	system("CLS");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << " ======================================================== " << endl;
	cout << "|                     TOP SECRET !!!                     |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|        We will be sending a confirmation code          |" << endl;
	cout << "|                  through your email !                  |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                 CONGRATULATIONS AGAIN!!                |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << " This will end in : 10  9  8  7  6 ";
	cout << " 5 ";
	Sleep(1000);
	cout << " 4 ";
	Sleep(1000);
	cout << " 3 ";
	Sleep(1000);
	cout << " 2 ";
	Sleep(1000);
	cout << " 1 ";
	Sleep(1000);
	system("CLS");
	system("color 0F");
	cout << endl;
	system("CLS");
	for (int i = 0; i < 100; i++)
	{
		system("color 0F");
		cout << "0101010101010101010101010101010101010101010101010101010101" << endl;
		cout << "1010101010101010101010101010101010101010101010101010101010" << endl;
		cout << "0101010101010101010101010101010101010101010101010101010101" << endl;
		cout << endl;
		system("color F0");
		cout << "1010101010101010101010101010101010101010101010101010101010" << endl;
		cout << "0101010101010101010101010101010101010101010101010101010101" << endl;
		cout << "1010101010101010101010101010101010101010101010101010101010" << endl;
	}
}
void calculator()
{
	int num1, num2;
	char selection;
	system("CLS");
	system("color F4");
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |+/-|  [1] Calculator   ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" <<endl;
	cout << "|                    The C++ Calculator!                 |" << endl;
	cout << "|      The C++ Calculator asks the user to enter two     |" << endl;
	cout << "|  integers and pick mathematical operations to be used. |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n\n";
	
	cout << " Please enter your first integer: ";
	cin >> num1;
	cout << " Please enter your second integer: ";
	cin >> num2;
	cout << "\n\n";
	cout << " ======================================================== " << endl;
	cout << "|                Select the desired operation:           |" <<endl;
	cout << "|                [1] Addition                            |" << endl;;
	cout << "|                [2] Subtraction                         |" << endl;;
	cout << "|                [3] Multiplication                      |" << endl;;
	cout << "|                [4] Division                            |" << endl;;
	cout << "|                [5] Modular Division                    |" << endl;;
	cout << " ======================================================== " << endl;
	cout << "\nSelection: ";
	cin >> selection;
	cout << "\n";

	switch (selection)
		{
		case '1':
			cout << " ======================================================== " << endl;
			cout << "                The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
			cout << " ======================================================== " << endl;
			break;
		case '2':
			cout << " ======================================================== " << endl;
			cout << "              The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
			cout << " ======================================================== " << endl;
			break;
		case '3':
			cout << " ======================================================== " << endl;
			cout << "               The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
			cout << " ======================================================== " << endl;
			break;
		case '4':
			cout << " ======================================================== " << endl;
			cout << "               The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
			cout << " ======================================================== " << endl;
			break;
		case '5':
			cout << " ======================================================== " << endl;
			cout << "             The remainder of " << num1 << " and " << num2 << " is " << num1 % num2 << endl;
			cout << " ======================================================== " << endl;
			break;
		default:
			cout << " ======================================================== " << endl;
			cout << "|                  ERROR! Invalid Input!                 |" << endl;
			cout << " ======================================================== " << endl;
		}
}
void messaging()
{
	system("CLS");
	system("color F4");
	string name,message;
	char choice;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |MSG|  [2] Messaging    ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                    The C++ Messaging!                  |" << endl;
	cout << "|   The C++ Messaging lets the user enter messages and   |" << endl;
	cout << "|             send it to the desired recipients.         |" << endl;
	cout << "|          Good news is...it has UNLIMITED LOAD!!        |" << endl;
	cout << "|                   Thanks to C++ Sim!                   |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n                     <  New Message >\n                 " << endl;
	cout << " Recipient: ";
	cin.ignore();
	getline(cin,name);
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << "        Enter message (Press ENTER to Stop Typing)\n      "<<endl;
	cout << "\t";
	cin.ignore();
	getline(cin, message);
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "\n Press [S] to send message: ";
	cin >> choice;
	cout << endl << endl;
	if (choice == 'S' || choice == 's')
	{

		cout << "                    Sending message...\n" << endl;
		Sleep(1000);
		cout << "                    Sending message...\n" << endl;
		Sleep(1000);
		cout << "                    Sending message...\n" << endl << endl;
		Sleep(1000);
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|               Your message has been sent.              |" <<endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << endl;
	}
	else
	{
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|        Error! Your message was saved to drafts!        |" <<endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
	}
	cout << endl;
}
void games()
{
	system("CLS");
	system("color F4");
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |<G>|  [3] Games        ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                      The C++ Games!                    |" << endl;
	cout << "| The C++ Games give the users enjoyment and test their  |" << endl;
	cout << "|  knowledge in programming through quiz games like the  |" << endl;
	cout << "|   Pop Quiz about Programming hence Pop-gramming quiz   |" << endl;
	cout << "| and Boolean Quiz. There is also a game called Mad Libs |" << endl;
	cout << "|      that is worth trying. Goodluck and Have FUN!      |" << endl;
	cout << "|                 Let's test your MIGHT!                 |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                   [1] Pop-gramming Quiz                |" << endl;
	cout << "|                   [2] Boolean Quiz                     |" << endl;
	cout << "|                   [3] Mad Libs                         |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                   [4] Back to Home                     |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
}

void pop_quiz()
{
	system("CLS");
	system("color F4");
	char answer[10];
	int score = 0;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |<G>|  [1] Pop-gramming ||            |" << endl;
	cout << "|             ||   |___|         Quiz      ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                [1] The Pop-gramming Quiz               |" << endl;
	cout << "|    Directions: Please answer the following questions.  |" << endl;
	cout << "|           Do your best to get a PERFECT SCORE!         |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                 Press ANY KEY to START!!               |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	_getch();
	cout << "\n\n";
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 1:                                           |" << endl;
	cout << "|  What symbol punctuation ends almost all lines         |" << endl;
	cout << "|  of C++ code?                                          |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[0];
	if (answer[0] == ';')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 2:                                           |" << endl;
	cout << "|  Which of the following shows the correct syntax       |" << endl;
	cout << "|  for an if statement ?                                 |" << endl;
	cout << "|  [a] if{expression}    [c] if expression               |" << endl;
	cout << "|  [b] if(expression)    [d] None of the above           |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[1];
	if (answer[1] == 'B' || answer[1] == 'b')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 3:                                           |" << endl;
	cout << "|  What is the boolean operator for or?                  |" << endl;
	cout << "|  [a] ||                [c] !=                          |" << endl;
	cout << "|  [b] &&                [d] |&                          |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[2];
	if (answer[2] == 'A' || answer[2] == 'a')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 4:                                           |" << endl;
	cout << "|  Which of the following is the boolean operator        |" << endl;
	cout << "|  for logical-and?                                      |" << endl;
	cout << "|  [a] ||                [c] !=                          |" << endl;
	cout << "|  [b] &&                [d] |&                          |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[3];
	if (answer[3] == 'B' || answer[3] == 'b')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 5:                                           |" << endl;
	cout << "|  How do you say not equal to?                          |" << endl;
	cout << "|  [a] =                 [c] *=                          |" << endl;
	cout << "|  [b] ==                [d] !=                          |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[4];
	if (answer[4] == 'D' || answer[4] == 'd')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 6:                                           |" << endl;
	cout << "|  Which of the following answers is the correct         |" << endl;
	cout << "|  operator to compare two variables                     |" << endl;
	cout << "|  [a] =                 [c] *=                          |" << endl;
	cout << "|  [b] ==                [d] !=                          |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[5];
	if (answer[5] == 'B' || answer[5] == 'b')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 7:                                           |" << endl;
	cout << "|  What is the correct value to return to the operating  |" << endl;
	cout << "|  system upon the successful completion of a program?   |" << endl;
	cout << "|  [a] 0              [c] 2                              |" << endl;
	cout << "|  [b] 1              [d] programs do not return value   |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[6];
	if (answer[6] == 'A' || answer[6] == 'a')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 8:                                           |" << endl;
	cout << "|  Which of the following parameter passing mechanism    |" << endl;
	cout << "|  is/are  supported by C++ but not in C?                |" << endl;
	cout << "|  [a]  Pass by value     [c]  Pass by address           |" << endl;
	cout << "|  [b]  Pass by reference [d]  All                       |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[7];
	if (answer[7] == 'B' || answer[7] == 'b')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 9:                                           |" << endl;
	cout << "|  Evaluate !(1 && !(0 || 1))                            |" << endl;
	cout << "|  [a]  True                                             |" << endl;
	cout << "|  [b]  False                                            |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[8];
	if (answer[8] == 'A' || answer[8] == 'a')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 10:                                          |" << endl;
	cout << "|  1:   #include <iostream>                              |" << endl;
	cout << "|  2:   int main()                                       |" << endl;
	cout << "|  3:   {                                                |" << endl;
	cout << "|  4:   int x = 5;                                       |" << endl;
	cout << "|  5:   int y = 7;                                       |" << endl;
	cout << "|  6:   cout<<\n;                                        |" << endl;
	cout << "|  7:   cout << x + y << " " << x * y;                   |" << endl;
	cout << "|  8:   cout<<endl;                                      |" << endl;
	cout << "|  9:   return 0;                                        |" << endl;
	cout << "|  10:  }                                                |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Will Print What?                                      |" << endl;
	cout << "|  [a] 12 35             [c] 35 12                       |" << endl;
	cout << "|  [b] x+y=x*y           [d] x+y-y+x                     |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "  Answer: ";
	cin >> answer[9];
	if (answer[9] == 'A' || answer[9] == 'a')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|       Generating Score....                             |" << endl;
	Sleep(700);
	cout << "|                                                        |" << endl;
	cout << "|                    Generating Score....                |" << endl;
	cout << "|                                                        |" << endl;
	Sleep(700);
	cout << "|                                 Generating Score....   |" << endl;
	Sleep(700);
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "                     Your score is " << score <<"/10"       << endl;
	cout << " ======================================================== " << endl;
} 
void boolean_quiz()
{
	system("CLS");
	system("color F4");
	char answer[5];
	int score = 0;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |<G>|  [2] Boolean Quiz ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                  [2] The Boolean Quiz                  |" << endl;
	cout << "|    Directions: Please answer the following questions.  |" << endl;
	cout << "|           Do your best to get a PERFECT SCORE!         |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                 Press ANY KEY to START!!               |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	_getch();
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 1: (( false || true ) && !( false ))         |" <<endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << " Answer [T] [F]: ";
	cin >> answer[0];
	if (answer[0] == 'T' || answer[0] == 't')
	{
		score = score + 1;
	}
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 2: ( true || (false && !( true )))           |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << " Answer [T] [F]: ";
	cin >> answer[1];
	if (answer[1] == 'T' || answer[1] == 't')
	{
		score = score + 1;
	}
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 3: (( false && false ) || (true))            |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << " Answer [T] [F]: ";
	cin >> answer[2];
	if (answer[2] == 'T' || answer[2] == 't')
	{
		score = score + 1;
	}
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 4: ( true && !(false))                       |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << " Answer [T] [F]: ";
	cin >> answer[3];
	if (answer[3] == 'T' || answer[3] == 't')
	{
		score = score + 1;
	}
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Question 5: true && (false) || false && !(true)       |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << " Answer [T] [F]: ";
	cin >> answer[4];
	if (answer[4] == 'F' || answer[4] == 'f')
	{
		score = score + 1;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|       Generating Score....                             |" << endl;
	Sleep(700);
	cout << "|                                                        |" << endl;
	cout << "|                    Generating Score....                |" << endl;
	cout << "|                                                        |" << endl;
	Sleep(700);
	cout << "|                                 Generating Score....   |" << endl;
	Sleep(700);
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "                     Your score is " << score << "/5" << endl;
	cout << " ======================================================== " << endl;
} //
void mad_libs()
{
	system("CLS");
	system("color F4");
	string name, color1, color2, body1, body2, noun, animal, verb,num1, num2;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |<G>|  [3] Mad Libs     ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                     [3] The Mad Libs                   |" << endl;
	cout << "|     Try this game called Mad Libs! Just answer what    |" << endl;
	cout << "|                          is asked!                     |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                 Press ANY KEY to START!!               |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	_getch();
	cout << endl;
	cout << " Enter your name : ";
	cin.ignore();
	getline(cin, name);
	cout << endl;
	cout << " Enter your favorite color : ";
	getline(cin, color1);
	cout << endl;
	cout << " Enter another color : ";
	getline(cin, color2);
	cout << endl;
	cout << " Name a body part : ";
	getline(cin, body1);
	cout << endl;
	cout << " Name another body part : ";
	getline(cin, body2);
	cout << endl;
	cout << " Enter a noun : ";
	getline(cin, noun);
	cout << endl;
	cout << " Name an animal : ";
	getline(cin, animal);
	cout << endl;
	cout << " Enter a verb (w/-ing) : ";
	getline(cin, verb);
	cout << endl;
	cout << " Enter a large number : ";
	getline(cin, num1);
	cout << endl;
	cout << " Enter another large number : ";
	getline(cin, num2);
	cout << endl << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|               Press ANY KEY to CONTINUE!!              |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	_getch();
	system("CLS");
	cout << endl<<endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                        MAD LIBS                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << "                      My name is " << name << endl;
	Sleep(2000);
	cout << endl;
	cout << "                        I am a " << animal<<endl;
	Sleep(2000);
	cout << endl;
	cout << "                     that has " << color1 << " fur" << endl;
	Sleep(2000);
	cout << endl;
	cout << "                with " << color2 << " spots in its " << body1 << endl;
	Sleep(2000);
	cout << endl;
	cout << "             I have a " << body2 << " shaped like a " << noun << endl;
	Sleep(2000);
	cout << endl;
	cout << "                  which I use for " << verb << endl;
	Sleep(2000);
	cout << endl;
	cout << "               I weigh more than " << num1 << " pounds" << endl;
	Sleep(2000);
	cout << endl;
	cout << "                  and I am " << num2 << " feet tall!" << endl;
	Sleep(2000);
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << endl << endl;
}

void calendar()
{
	system("CLS");
	system("color F4");
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|             ||     o ====== o o     0    ||            |" << endl;
	cout << "|             ||         C++ PHONE         ||            |" << endl;
	cout << "|             ||===========================||            |" << endl;
	cout << "|             || C++Sim                65% ||            |" << endl;
	cout << "|             ||    ___                    ||            |" << endl;
	cout << "|             ||   |Apr|  [4] Calendar     ||            |" << endl;
	cout << "|             ||   |___|                   ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||                           ||            |" << endl;
	cout << "|             ||___________________________||            |" << endl;
	cout << "|             ||   __       _____          ||            |" << endl;
	cout << "|             ||  |__|     (_____)     <== ||            |" << endl;
	cout << "|             ===============================            |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                     The C++ Calendar!                  |" << endl;
	cout << "|  The C++ Calendar displays the days, weeks and months  |" << endl;
	cout << "|                       of year 2019!                    |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                 Press ANY KEY to Continue....          |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	_getch();
	system("CLS");
	cout << " ======================================================== " << endl;
	cout << "|                     Calendar 2019                      |" << endl;
	Sleep(200);
	system("color F1");
	cout << "|  ======January======             ======February======  |" <<endl;
	cout << "|  S  M  T  W  T  F  S             S  M  T  W  T  F  S   |" << endl;
	cout << "|        1  2  3  4  5                            1  2   |" << endl;
	cout << "|  6  7  8  9  10 11 12            3  4  5  6  7  8  9   |" << endl;
	cout << "|  13 14 15 16 17 18 19            10 11 12 13 14 15 16  |" << endl;
	cout << "|  20 21 22 23 24 25 26            17 18 19 20 21 22 23  |" << endl;
	cout << "|  27 28 29 30 31                  24 25 26 27 28        |" << endl;
	Sleep(200);
	system("color F2");
	cout << "|  =======March=======             ========April=======  |" << endl;
	cout << "|  S  M  T  W  T  F  S             S  M  T  W  T  F  S   |" << endl;
	cout << "|                 1  2                1  2  3  4  5  6   |" << endl;
	cout << "|  3  4  5  6  7  8  9             7  8  9  10 11 12 13  |" << endl;
	cout << "|  10 11 12 13 14 15 16            14 15 16 17 18 19 20  |" << endl;
	cout << "|  17 18 19 20 21 22 23            21 22 23 24 25 26 27  |" << endl;
	cout << "|  24 25 26 27 28 29 30            28 29 30              |" << endl;
	cout << "|  31                                                    |" << endl;
	Sleep(200);
	system("color F3");
	cout << "|  ========May========             ========June========  |" << endl;
	cout << "|  S  M  T  W  T  F  S             S  M  T  W  T  F  S   |" << endl;
	cout << "|           1  2  3  4                               1   |" << endl;
	cout << "|  5  6  7  8  9  10 11            2  3  4  5  6  7  8   |" << endl;
	cout << "|  12 13 14 15 16 17 18            9  10 11 12 13 14 15  |" << endl;
	cout << "|  19 20 21 22 23 24 25            16 17 18 19 20 21 22  |" << endl;
	cout << "|  26 27 28 29 30 31               23 24 25 26 27 28 29  |" << endl;
	cout << "|                                  30                    |" << endl;
	Sleep(200);
	system("color F4");
	cout << "|  ========July========            =======August=======  |" << endl;
	cout << "|  S  M  T  W  T  F  S             S  M  T  W  T  F  S   |" << endl;
	cout << "|     1  2  3  4  5  6                         1  2  3   |" << endl;
	cout << "|  7  8  9  10 11 12 13            4  5  6  7  8  9  10  |" << endl;
	cout << "|  14 15 16 17 18 19 20            11 12 13 14 15 16 17  |" << endl;
	cout << "|  21 22 23 24 25 26 27            18 19 20 21 22 23 24  |" << endl;
	cout << "|  28 29 30 31                     25 26 27 28 29 30 31  |" << endl;
	Sleep(200);
	system("color F5");
	cout << "|  =====September======            =======October======  |" << endl;
	cout << "|  S  M  T  W  T  F  S             S  M  T  W  T  F  S   |" << endl;
	cout << "|  1  2  3  4  5  6  7                   1  2  3  4  5   |" << endl;
	cout << "|  8  9  10 11 12 13 14            6  7  8  9  10 11 12  |" << endl;
	cout << "|  15 16 17 18 19 20 21            13 14 15 16 17 18 19  |" << endl;
	cout << "|  22 23 24 25 26 27 28            20 21 22 23 24 25 26  |" << endl;
	cout << "|  29 30                           27 28 29 30 31        |" << endl;
	Sleep(200);
	system("color F6");
	cout << "|  ======November======            ======December======  |" << endl;
	cout << "|  S  M  T  W  T  F  S             S  M  T  W  T  F  S   |" << endl;
	cout << "|                 1  2             1  2  3  4  5  6  7   |" << endl;
	cout << "|  3  4  5  6  7  8  9             8  9  10 11 12 13 14  |" << endl;
	cout << "|  10 11 12 13 14 15 16            15 16 17 18 19 20 21  |" << endl;
	cout << "|  17 18 19 20 21 22 23            22 23 24 25 26 27 28  |" << endl;
	cout << "|  24 25 26 27 28 29 30            29 30 31              |" << endl ;
	Sleep(200);
	system("color F4");
}
void gallery()
{
	system("CLS");
	system("color F4");
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   |Apr|  [5] Gallery      ||             |" << endl;
	cout << "|            ||   |___|                   ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                     The C++ Gallery                    |" << endl;
	cout << "|         The C++ Gallery displays some artworks         |" << endl;
	cout << "|      made by Owen using C++! Feel FREE to view IT!     |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|   =======================    =======================   |" << endl;
	cout << "|  ||       +++++++       ||   ||                     || |" << endl;
	cout << "|  ||     +++++++++++     ||   ||     ============    || |" << endl;
	cout << "|  ||    +++++++++++++    ||   ||    ||  ______  ||   || |" << endl;
	cout << "|  ||   +++++++++++++++   ||   ||    || |      | ||   || |" << endl;
	cout << "|  ||    +++++++++++++    ||   ||    || |      | ||   || |" << endl;
	cout << "|  ||     +++++++++++     ||   ||    || |______| ||   || |" << endl;
	cout << "|  ||         | |         ||   ||    ||  1  2  3 ||   || |" << endl;
	cout << "|  ||         | |         ||   ||    ||  4  5  6 ||   || |" << endl;
	cout << "|  ||         | |         ||   ||    ||  7  8  9 ||   || |" << endl;
	cout << "|  ||         |_|         ||   ||     ============    || |" << endl;
	cout << "|  ||                     ||   ||                     || |" << endl;
	cout << "|   =======================     =======================  |" << endl;
	cout << "|   =======================     =======================  |" << endl;
	cout << "|  ||                     ||   ||       # # # #       || |" << endl;
	cout << "|  ||         ====        ||   ||       #             || |" << endl;
	cout << "|  ||       ++    ++      ||   ||       #             || |" << endl;
	cout << "|  ||      ++      ++     ||   ||       #             || |" << endl;
	cout << "|  ||     ++        ++    ||   ||       # # # #       || |" << endl;
	cout << "|  ||     ============    ||   ||          +          || |" << endl;
	cout << "|  ||     ||   __   ||    ||   ||        +++++        || |" << endl;
	cout << "|  ||     ||  |  |  ||    ||   ||          +          || |" << endl;
	cout << "|  ||     ||  | +|  ||    ||   ||          +          || |" << endl;
	cout << "|  ||     ||========||    ||   ||        +++++        || |" << endl;
	cout << "|  ||                     ||   ||          +          || |" << endl;
	cout << "|   =======================     =======================  |" << endl;
	cout << "|                                                        |" << endl;
}
void alarm_clock()
{
	system("CLS");
	system("color F4");
	int hour, minute,hour_alarm,minute_alarm,time_hour,time_minute;
	int time_in_minutes,alarm_time_minutes;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   | |_|  [6] Alarm Clock  ||             |" << endl;
	cout << "|            ||   |___|                   ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                  The C++ Alarm Clock!                  |" << endl;
	cout << "|   The C++ Alarm Clock is one of the best alarm clock!  |" << endl;
	cout << "| This app lets the user to set a wake time and displays |"<< endl;
	cout << "|              remaining time until it chime!            |" << endl;
	cout << "|           Just give it a try and you'll see!           |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << "              The current time is: ";
	system("time/t");
	cout << "\n";
	cout << " ======================================================== " << endl;
	do
	{
		cout << "\n Please convert the current time into 24 hour format:\n";
		cout << "\n Hour Time(01-24): ";
		cin >> hour;
		if (hour < 0 || hour>24)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                    Invalid Hour Time!                  |" << endl;
			cout << "|            Please input the correct conversion!        |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
		}
	} while (hour < 0 || hour>24);
	do
	{
		cout << "\n Minute Time(01-60): ";
		cin >> minute;
		if (minute < 0 || minute>60)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                   Invalid Minute Time!                 |" << endl;
			cout << "|            Please input the correct conversion!        |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
		}
	} while (minute < 0 || minute>60);
	cout << endl;
	cout << " ======================================================== " << endl;
	do
	{
		cout << "\n Set Alarm (24-hour format): "<<endl;
		cout << "\n Alarm Time (Hour): ";
		cin >> hour_alarm;
		if (hour_alarm < 0 || hour_alarm>24)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                Invalid Alarm Time (Hour)!              |" << endl;
			cout << "|            Please input the correct conversion!        |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
		}
	} while (hour_alarm < 0 || hour_alarm>24);
	do
	{
		cout << "\n Alarm Time (Minute): ";
		cin >> minute_alarm;
		if (minute_alarm < 0 || minute_alarm>60)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|               Invalid Alarm Time (Minute)!             |" << endl;
			cout << "|            Please input the correct conversion!        |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
		}
	} while (minute_alarm < 0 || minute_alarm>60);
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << "               The current time is " << hour << ":" << minute << "." << endl;
	cout << endl;
	cout << "               Your alarm time is " << hour_alarm << ":" << minute_alarm << "."<<endl;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	cout << "                                                          " << endl;
	cout << "        Setting Alarm....                                 " << endl;
	Sleep(1500);
	cout << "                                                          " << endl;
	cout << "                     Setting Alarm....                    " << endl;
	cout << "                                                          " << endl;
	Sleep(1500);
	cout << "                                   Setting Alarm....      " << endl;
	Sleep(1500);
	cout << endl;
	cout << endl;

	time_in_minutes = (hour * 60) + minute;
	alarm_time_minutes = (hour_alarm * 60) + minute_alarm;

	time_minute = ((24 * 60) - time_in_minutes) + alarm_time_minutes;
	time_hour = (time_minute /60 );
	if (time_hour >= 24)
	{
		time_hour = time_hour - 24;
	}
	cout << " ======================================================== " << endl;
	cout << "      Alarm set for " << time_hour;
	cout << " hour";
	if (time_hour != 1)
	{
		cout << "s";
	}
	cout<< " and " << time_minute % 60;
	cout << " minute";
	if ((time_minute % 60) != 1)
	{
		cout << "s";
	}
	cout<<" from now.";
	cout << endl;
	cout << " ======================================================== " << endl;
}
void word_day()
{
	system("CLS");
	system("color F4");
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   |Apr|  [7] Word of the  ||             |" << endl;
	cout << "|            ||   |___|         Day       ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|               The C++ Word of the Day!                 |" << endl;
	cout << "|              Everyday is a NEW WORD DAY!               |" << endl;
	cout << "|            Check this new word for today!              |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                The word of the day is:                 |" << endl;
	cout << "|                 Computer Programming                   |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| Definition                                             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| : process of designing and building an executable      |" << endl;
	cout << "|   computer program for accomplishing a specific        |" << endl;
	cout << "|   computing task.                                      |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| Did You Know ?                                         |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| * Programmers spend approximately 30% of the time      |" << endl;
	cout << "|    surfing the source code                             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| * Most programmers are white, young & male             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| * You can code without knowing how                     |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| Use Computer Programming in a sentence:                |" << endl;
	cout << "|                                                        |" << endl;
	cout << "| Computer Programming is FUN.                           |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
}
void browser()
{
	system("CLS");
	cout << " ======================================================== " << endl;
	cout << "|                      C++ Browser                       |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|  New Tab      x | +                           _  O  X  |" << endl;
	cout << " ======================================================== " << endl;
	cout << "| <- -> C++ | https://                               ->> |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|      _________        _________        _________       |" << endl;
	cout << "|     |         |      |    >>   |      |         |      |" << endl;
	cout << "|     | <Pay-E> |      |>=======>|      | <Hotel> |      |" << endl;
	cout << "|     |         |      |    >>   |      |         |      |" << endl;
	cout << "|     |_________|      |_________|      |_________|      |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|  <PayElectricity>  <FlightBooking> <HotelReservation>  |" << endl;
	cout << "|      _________        _________        _________       |" << endl;
	cout << "|     |         |      |         |      |         |      |" << endl;
	cout << "|     | <Fbook> |      | <Tweet> |      |  < + >  |      |" << endl;
	cout << "|     |         |      |         |      |         |      |" << endl;
	cout << "|     |_________|      |_________|      |_________|      |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|     <Facebook>        <Twitter>      <Add Shorcut>     |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << endl << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|    Recommended websites by the C++ Browser             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|    [1] PayElectricity    -> www.cppelectricity.com     |" << endl;
	cout << "|    [2] FlightBooking     -> www.cppflight.com          |" << endl;
	cout << "|    [3] HotelReservation  -> www.cpphotel.com           |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|    [4] Back to Home                                    |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
}

void pay_electricity()
{
	string accnum;
	double units, bill;
	char paynow,choice;
	electricity:
	system("CLS");
	system("color F4");
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                      C++ Browser                       |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|  New Tab      x | +                           _  O  X  |" << endl;
	cout << " ======================================================== " << endl;
	cout << "| <- -> C++ | https:// www.cppelectricity.com        ->> |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   |-E-|  PayElectricity   ||             |" << endl;
	cout << "|            ||   |___|                   ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                  C++ PayElectricity!                   |" << endl;
	cout << "|    The C++ PayElectricity computes the total payment   |" << endl;
	cout << "|      of your electricy consumption and lets you pay    |" << endl;
	cout << "|                   through C++ CASH!!                   |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|  Please Select Electric Power Distibutor:              |" << endl;
	cout << "|              [1] MERALCO       [2] BATELEC             |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n Choice: ";
	cin >> choice;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	Sleep(500);
	cout << "                       Please Wait.....                 " << endl;
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << "                       Please Wait.....                 " << endl;
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << "                       Please Wait.....                 " << endl;
	Sleep(500);
	cout << endl;
	cout << " ======================================================== " << endl;
	Sleep(500);
	cout << endl;
	if (choice == '1')
	{
		string choice = "Meralco";
		meralco:
		system("CLS");
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                       MERALCO                          |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|  Meralco electricity rate is P10.50 per kilowatt hour. |" << endl;
		cout << " ======================================================== " << endl;
		cout << endl;
		cout << " Please enter units consumed(kWh): ";
		cin >> units;
		if (units < 0)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                Invalid number of units!                |" << endl;
			cout << "|                                                        |" << endl;
			cout << "|               Press ANY key to continue....            |" << endl;
			cout << " ======================================================== " << endl;
			_getch();
			cout << endl;
			goto meralco;
		}
		bill = units * 10.50;
		cout << endl;
		cout << " Total amount: Php " <<bill<<endl;
		cout << endl;
		paynow:
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|       Pay now using C++Cash?   [Y]=Yes  [N]=No         |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "\n Choice: ";
		cin >> paynow;
		cout << endl;
		if (paynow == 'Y' || paynow == 'y')
		{
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                     <Php> C++ Cash                     |" << endl;
			cout << "|                    Pay your bill now!                  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
			cout << " Please enter your account number: ";
			cin >> accnum;
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
			Sleep(500);
			cout << "                       Please Wait.....                 " << endl;
			Sleep(500);
			cout << endl;
			cout << endl;
			cout << "                       Please Wait.....                 " << endl;
			Sleep(500);
			cout << endl;
			cout << endl;
			cout << "                       Please Wait.....                 " << endl;
			Sleep(500);
			cout << endl;
			cout << " ======================================================== " << endl;
			Sleep(500);
				if (bill<5000)
				{
					system("CLS");
					cout << "\n\n\n";
					cout << "**********************************************************" << endl;
					cout << " ======================================================== " << endl;
					cout << "|                                                        |" << endl;
					cout << "|                   Payment Successful!                  |" << endl;
					cout << "|                     Payment Receipt                    |" << endl;
					cout << "|                                                        |" << endl;
					cout << " ======================================================== " << endl;
					cout << "**********************************************************" << endl;
					cout << endl;
					cout << " Biller: " << choice << endl << endl;
					cout << " Account Number: " << accnum << endl << endl;
					cout << " Bill: Php " << bill << endl << endl;
					cout << " C++Cash Balance: Php " << 5000 - bill << endl << endl;
					cout << endl;
					cout << "**********************************************************" << endl;
					cout << " ======================================================== " << endl;
					cout << "|                                                        |" << endl;
					cout << "|                       Thank You!                       |" << endl;
					cout << "|                                                        |" << endl;
					cout << " ======================================================== " << endl;
					cout << "**********************************************************" << endl;
				}
				else
				{
					cout << " ======================================================== " << endl;
					cout << "|                                                        |" << endl;
					cout << "|      You do not have enough balance in your C++Cash    |" << endl;
					cout << "|                                                        |" << endl;
					cout << " ======================================================== " << endl;
				}	
		}
		else if(paynow=='N'||paynow=='n')
		{
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|  You can pay your bill at the Meralco Office! Thanks!  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		}
		else
		{
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                     Invalid Input!                     |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|                 Press ANY key to continue....          |" << endl;
		cout << " ======================================================== " << endl;
		_getch();
		cout << endl;
		goto paynow;
		}
	}
	else if (choice == '2')
	{
		string choice = "Batelec";
		batelec:
		system("CLS");
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                       BATELEC                          |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|  Batelec electricity rate is P9.76 per kilowatt hour.  |" << endl;
		cout << " ======================================================== " << endl;
		cout << endl;
		cout << " Please enter units consumed(kWh): ";
		cin >> units;
		if (units < 0)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                Invalid number of units!                |" << endl;
			cout << "|                                                        |" << endl;
			cout << "|               Press ANY key to continue....            |" << endl;
			cout << " ======================================================== " << endl;
			_getch();
			cout << endl;
			goto batelec;
		}
		bill = units * 9.76;
		cout << " Total amount: Php " << bill << endl;
		paynow2:
		cout << " Pay now using C++Cash?   [Y]=Yes  [N]=No";
		cin >> paynow;
		if (paynow == 'Y' || paynow == 'y')
		{
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                     <Php> C++ Cash                     |" << endl;
			cout << "|                    Pay your bill now!                  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
			cout << " Please enter your account number: ";
			cin >> accnum;
			cout << endl;
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
			Sleep(500);
			cout << "                       Please Wait.....                 " << endl;
			Sleep(500);
			cout << endl;
			cout << endl;
			cout << "                       Please Wait.....                 " << endl;
			Sleep(500);
			cout << endl;
			cout << endl;
			cout << "                       Please Wait.....                 " << endl;
			Sleep(500);
			cout << endl;
			cout << " ======================================================== " << endl;
			Sleep(500);
			if (bill < 5000)
			{
				system("CLS");
				cout << "\n\n\n";
				cout << "**********************************************************" << endl;
				cout << " ======================================================== " << endl;
				cout << "|                                                        |" << endl;
				cout << "|                   Payment Successful!                  |" << endl;
				cout << "|                     Payment Receipt                    |" << endl;
				cout << "|                                                        |" << endl;
				cout << " ======================================================== " << endl;
				cout << "**********************************************************" << endl;
				cout << endl;
				cout << " Biller: " << choice << endl << endl;
				cout << " Account Number: " << accnum << endl << endl;
				cout << " Bill: Php " << bill << endl << endl;
				cout << " C++Cash Balance: Php " << 5000 - bill << endl << endl;
				cout << endl;
				cout << "**********************************************************" << endl;
				cout << " ======================================================== " << endl;
				cout << "|                                                        |" << endl;
				cout << "|                       Thank You!                       |" << endl;
				cout << "|                                                        |" << endl;
				cout << " ======================================================== " << endl;
				cout << "**********************************************************" << endl;
			}
			else
			{
				cout << " ======================================================== " << endl;
				cout << "|                                                        |" << endl;
				cout << "|      You do not have enough balance in your C++Cash    |" << endl;
				cout << "|                                                        |" << endl;
				cout << " ======================================================== " << endl;
			}
		}
		else if (paynow == 'N' || paynow == 'n')
		{
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|  You can pay your bill at the Batelec Office! Thanks!  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		}
		else
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                     Invalid Input!                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "|                 Press ANY key to continue....          |" << endl;
			cout << " ======================================================== " << endl;
			_getch();
			cout << endl;
			goto paynow2;
		}
	}
	else
	{
	cout << " ======================================================== " << endl;
	cout << "|                     Invalid Input!                     |" << endl;
	cout << "|                      PLease Wait....                   |" << endl;
	cout << " ======================================================== " << endl;
	Sleep(2000);
	goto electricity;
	}
}
void flight_booking()
{
	char choice, option, gender, confirm, destination;
	string date, airline, departure, arrival, price, destination_name;
	string first_name, last_name, email, contact;
	flight_option:
	system("CLS");
	system("color F4");
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                      C++ Browser                       |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|  New Tab      x | +                           _  O  X  |" << endl;
	cout << " ======================================================== " << endl;
	cout << "| <- -> C++ | https:// www.cppflight.com             ->> |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   |-F-|  FlightBooking    ||             |" << endl;
	cout << "|            ||   |___|                   ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                   C++ FlightBooking!                   |" << endl;
	cout << "|    The C++ FlightBooking lets the user book either a   |" << endl;
	cout << "|         domestic flight or international flight!       |" << endl;
	cout << "|                      Enjoy booking!                    |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|          Welcome to C++ Flight Booking System!         |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                  [1] Domestic Flight                   |" << endl;
	cout << "|                  [2] International Flight              |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n Enter your option: ";
	cin >> option;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << endl;
	Sleep(500);
	cout << "                       Please Wait.....                 " << endl;
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << "                       Please Wait.....                 " << endl;
	Sleep(500);
	cout << endl;
	cout << endl;
	cout << "                       Please Wait.....                 " << endl;
	Sleep(500);
	cout << endl;
	cout << " ======================================================== " << endl;
	Sleep(500);
	cout << endl;
	if (option == '1')
	{
		system("CLS");
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                Please enter a valid date.              |" << endl;
		cout << "|         Enter Date of Journey ( Ex. May 12,2019 )      |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "\n Date: ";
		cin.ignore();
		getline(cin, date);
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                    Domestic Flights                    |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|                     [1] Bacolod                        |" << endl; 
		cout << "|                     [2] Boracay                        |" << endl; 
		cout << "|                     [3] Davao                          |" << endl; 
		cout << "|                     [4] Manila                         |" << endl; 
		cout << "|                     [5] Puerto Princesa                |" << endl; 
		cout << "|                     [6] Surigao                        |" << endl; 
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		destination1:
		cout << "\n Enter Destination: ";
		cin >> destination;
		cout << endl;
		switch (destination)
		{
		case '1':
			destination_name = "Bacolod";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Bacolod                 |" << endl;
			cout << "|                       Flights Found                    |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 11:20   Price: Php 6,746   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 13:20   Price: Php 6,543   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 15:20   Price: Php 6,986   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice11:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "11:20";
				price = "Php 6,746";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline <<endl <<endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "13:20";
				price = "Php 6,543";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "15:20";
				price = "Php 6,986";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice11;
			}
			break;
		case '2':
			destination_name = "Boracay";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                  Destination: Boracay                  |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 11:00   Price: Php 6,435   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 13:00   Price: Php 6,367   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 15:00   Price: Php 6,513   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		    enterchoice12:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "11:00";
				price = "Php 6,435";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "13:00";
				price = "Php 6,367";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "15:00";
				price = "Php 6,513";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice12;
			}
			break;
		case '3':
			destination_name = "Davao";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Davao                   |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 11:55   Price: Php 6,227   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 13:55   Price: Php 6,459   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 15:55   Price: Php 6,667   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice13:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "11:55";
				price = "Php 6,227";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "13:55";
				price = "Php 6,459";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "15:55";
				price = "Php 6,667";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice13;
			}
			break;
		case '4':
			destination_name = "Manila";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Manila                  |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 11:55   Price: Php 6,227   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 13:55   Price: Php 6,459   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 15:55   Price: Php 6,667   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice14:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "11:55";
				price = "Php 6,227";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "13:55";
				price = "Php 6,459";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "15:55";
				price = "Php 6,667";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice14;
			}
			break;
		case '5':
			destination_name = "Puerto Princesa";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|               Destination: Puerto Princesa             |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 11:25   Price: Php 5,345   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 13:25   Price: Php 5,256   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 15:25   Price: Php 5,541   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice15:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "11:25";
				price = "Php 5,345";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "13:25";
				price = "Php 5,256";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "15:25";
				price = "Php 5,541";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice15;
			}
			break;
		case '6':
			destination_name = "Surigao";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                  Destination: Surigao                  |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 11:40   Price: Php 12,454  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 13:40   Price: Php 12,376  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 15:40   Price: Php 12,867  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice16:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "11:40";
				price = "Php 12,454";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "13:40";
				price = "Php 12,376";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "15:40";
				price = "Php 12,867";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice16;
			}
			break;
		default:
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                     Invalid Input!                     |" << endl;
			cout << " ======================================================== " << endl;
			goto destination1;
			break;
		}
	}
	else if (option == '2')
	{
	system("CLS");
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|                Please enter a valid date.              |" << endl;
	cout << "|         Enter Date of Journey ( Ex. May 12,2019 )      |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n Date: ";
		cin.ignore();
		getline(cin, date);
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                  International Flights                 |" << endl;
		cout << "|                                                        |" << endl;
		cout << "|                   [1] Dubai                            |" << endl;
		cout << "|                   [2] Korea                            |" << endl;
		cout << "|                   [3] Taiwan                           |" << endl;
		cout << "|                   [4] Singapore                        |" << endl;
		cout << "|                   [5] USA                              |" << endl;
		cout << "|                   [6] Japan                            |" << endl;
		cout << "|                   [7] Hong Kong                        |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		destination2:
		cout << "\n Enter Destination: ";
		cin >> destination;
		cout << endl;
		switch (destination)
		{
		case '1':
			destination_name = "Dubai";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Dubai                   |" << endl;
			cout << "|                     Flights Found                      |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 19:10   Price: Php 22,989  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 21:10   Price: Php 23,768  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 23:10   Price: Php 21,896  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice21:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "19:10";
				price = "Php 22,989";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "21:10";
				price = "Php 23,768";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "23:10";
				price = "Php 21,896";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice21;
			}
			break;
		case '2':
			destination_name = "Korea";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Korea                   |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 13:45   Price: Php 14,323  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 15:45   Price: Php 14,465  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 17:45   Price: Php 14,489  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice22:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "13:45";
				price = "Php 14,323";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "15:45";
				price = "Php 14,465";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "17:45";
				price = "Php 14,489";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice22;
			}
			break;
		case '3':
			destination_name = "Taiwan";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Taiwan                  |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 12:00   Price: Php 9,237   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 14:00   Price: Php 9,598   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 16:00   Price: Php 9,487   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice23:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "12:00";
				price = "Php 9,237";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "14:00";
				price = "Php 9,598";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "16:00";
				price = "Php 9,487";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice23;
			}
			break;
		case '4':
			destination_name = "Singapore";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                 Destination: Singapore                 |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 13:45   Price: Php 8,822   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 15:45   Price: Php 8,613   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 17:45   Price: Php 8,784   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice24:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "13:45";
				price = "Php 8,822";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "15:45";
				price = "Php 8,613";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "17:45";
				price = "Php 8,784";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice24;
			}
			break;
		case '5':
			destination_name = "USA";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                     Destination: USA                   |" << endl;
			cout << "|                       Flights Found                    |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 23:25   Price: Php 36,378  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 01:25   Price: Php 37,198  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 03:25   Price: Php 35,671  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice25:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "23:25";
				price = "Php 36,378";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "01:25";
				price = "Php 37,198";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "03:25";
				price = "Php 35,671";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice25;
			}
			break;
		case '6':
			destination_name = "Japan";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                   Destination: Japan                   |" << endl;
			cout << "|                      Flights Found                     |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 14:15   Price: Php 17,852  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 16:15   Price: Php 17,652  |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 18:15   Price: Php 17,347  |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice26:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "14:15";
				price = "Php 17,852";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "16:15";
				price = "Php 17,652";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "18:15";
				price = "Php 17,347";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice26;
			}
			break;
		case '7':
			destination_name = "Hong Kong";
			cout << " ======================================================== " << endl;
			cout << "|                                                        |" << endl;
			cout << "|                  Destination: Hong Kong                |" << endl;
			cout << "|                       Flights Found                    |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| Airlines:                                              |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [A] Philippine Airlines                                |" << endl;
			cout << "| Departure: 10:00   Arrival: 12:25   Price: Php 8,718   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [B] Air Philippines                                    |" << endl;
			cout << "| Departure: 12:00   Arrival: 14:25   Price: Php 8,689   |" << endl;
			cout << "|                                                        |" << endl;
			cout << "| [C] C++ Spirit Airlines                                |" << endl;
			cout << "| Departure: 14:00   Arrival: 16:25   Price: Php 8,435   |" << endl;
			cout << "|                                                        |" << endl;
			cout << " ======================================================== " << endl;
		enterchoice27:
			cout << "\n Enter your choice: ";
			cin >> choice;
			if (choice == 'A' || choice == 'a')
			{
				system("CLS");
				airline = "Philippine Airlines";
				departure = "10:00";
				arrival = "12:25";
				price = "Php 8,718";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'B' || choice == 'b')
			{
				system("CLS");
				airline = "Air Philippines";
				departure = "12:00";
				arrival = "14:25";
				price = "Php 8,689";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else if (choice == 'C' || choice == 'c')
			{
				system("CLS");
				airline = "C++ Spirit Airlines";
				departure = "14:00";
				arrival = "16:25";
				price = "Php 8,435";
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "\n Flight Selected: " << airline << endl << endl;
				cout << " Departure Time: " << departure << endl;
				cout << " Arrival Time:" << arrival << endl;
				cout << " Price: " << price << endl << endl;
				cout << " ======================================================== " << endl;
			}
			else
			{
				cout << endl;
				cout << " ======================================================== " << endl;
				cout << "|                     Invalid Input!                     |" << endl;
				cout << " ======================================================== " << endl;
				goto enterchoice27;
			}
			break;
		default:
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                     Invalid Input!                     |" << endl;
			cout << " ======================================================== " << endl;
			goto destination2;
			break;
		}
	}
	else
	{
		cout << " ======================================================== " << endl;
		cout << "|                     Invalid Input!                     |" << endl;
		cout << "|                      PLease Wait....                   |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(2000);
		goto flight_option;
	}
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "                 Enter Passenger Details:" << endl;
	cout << "\n Enter First Name: ";
	cin.ignore();
	getline(cin, first_name);
	cout << "\n Enter Last Name: ";
	getline(cin, last_name);
	for (;;)
	{
		cout << "\n Gender: [M] = Male  [F] = Female" << endl;
		cout << " Choice: ";
		cin >> gender;
		if (gender == 'M' || gender == 'm')
		{
			break;
		}
		if (gender == 'F' || gender == 'f')
		{
			break;
		}
	}
	cout << "\n Email Address: ";
	cin.ignore();
	getline(cin, email);
	cout << "\n Contact Number: ";
	cin >> contact;
    confirm_booking:
	cout << "\n Confirm Booking?  [1] = Confirm  [2] = Cancel" << endl;
	cout << " Choice: ";
	cin >> confirm;
	if (confirm == '1')
	{
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << endl;
		Sleep(500);
		cout << "                       Please Wait.....                 " << endl;
		Sleep(500);
		cout << endl;
		cout << endl;
		cout << "                       Please Wait.....                 " << endl;
		Sleep(500);
		cout << endl;
		cout << endl;
		cout << "                       Please Wait.....                 " << endl;
		Sleep(500);
		cout << endl;
		cout << " ======================================================== " << endl;
		Sleep(500);
		system("CLS");
		cout <<"\n\n\n";
		cout << "**********************************************************" << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                   Transaction Complete!                |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "**********************************************************" << endl;
		cout << endl;
		cout << "\n Name : " << first_name << " " << last_name << endl;
		cout << "\n Email: " << email << endl;
		cout << "\n Date of Journey: " << date << endl;
		cout << "\n Destination: " << destination_name << endl;
		cout << "\n Airline: " << airline << endl;
		cout << "\n Departure Time: " << departure << endl;
		cout << "\n Arrival Time: " << arrival << endl;
		cout << "\n Price: " << price << endl;
		cout << endl;
		cout << "**********************************************************" << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                       Thank You!                       |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "**********************************************************" << endl;
	}
	else if (confirm == '2')
	{
		system("CLS");
		cout << "\n\n\n";
		cout << "**********************************************************" << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                 Flight Booking Cancelled!              |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "**********************************************************" << endl;
		cout << endl;
	}
	else
	{
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                     Invalid Input!                     |" << endl;
		cout << " ======================================================== " << endl;
		goto confirm_booking;
	}
}
void hotel_reservation()
{
	system("CLS");
	system("color F4");
	char room_type,choice;
	int nights,payment;
	string check_in, check_out,room;
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                      C++ Browser                       |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|  New Tab      x | +                           _  O  X  |" << endl;
	cout << " ======================================================== " << endl;
	cout << "| <- -> C++ | https:// www.cpphotel.com              ->> |" << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|            ||     o ====== o o     0    ||             |" << endl;
	cout << "|            ||         C++ PHONE         ||             |" << endl;
	cout << "|            ||===========================||             |" << endl;
	cout << "|            || C++Sim                65% ||             |" << endl;
	cout << "|            ||    ___                    ||             |" << endl;
	cout << "|            ||   |-H-| HotelReservation  ||             |" << endl;
	cout << "|            ||   |___|                   ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||                           ||             |" << endl;
	cout << "|            ||___________________________||             |" << endl;
	cout << "|            ||   __       _____          ||             |" << endl;
	cout << "|            ||  |__|     (_____)     <== ||             |" << endl;
	cout << "|            ===============================             |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                   C++ HotelReservation!                |" << endl;
	cout << "|      The C++ HotelReservation lets the user reserve    |" << endl;
	cout << "|           a room with very reasonable prices!          |" << endl;
	cout << "|                           Enjoy!                       |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|              Welcome to C++ HotelReservation!          |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|    Available Rooms:              Rates:                |" << endl;
	cout << "|                                                        |" << endl;
	cout << "|    [A] Standard Room             Php 3,500  / night    |" << endl;
	cout << "|    [B] Twin                      Php 6,500  / night    |" << endl;
	cout << "|    [C] Studio                    Php 10,500 / night    |" << endl;
	cout << "|    [D] Executive Suite           Php 12,500 / night    |" << endl;
	cout << "|    [E] Presidential Suite        Php 15,500 / night    |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n Please enter check-in date: ";
	getline(cin, check_in);
	cout << "\n Please enter check-out date: ";
	getline(cin, check_out);
	do
	{
		cout << "\n Please enter the number of nights to stay in hotel: ";
		cin >> nights;
		if (nights <= 0)
		{
			cout << endl;
			cout << " ======================================================== " << endl;
			cout << "|                     Invalid Input!                     |" << endl;
			cout << " ======================================================== " << endl;
			cout << endl;
		}
	} while (nights <= 0);
	room_type:
	cout << "\n Enter room type: ";
	cin >> room_type;
	switch (room_type)
	{
	case 'A':
	case 'a':
		room = "Standard Room";
		payment = 3500*nights;
		break;

	case 'B':
	case 'b':
		room = "Twin";
		payment = 6500*nights;
		break;

	case 'C':
	case 'c':
		room = "Studio";
		payment = 10500*nights;
		break;

	case 'D':
	case 'd':
		room = "Executive Suite";
		payment = 12500*nights;
		break;

	case 'E':
	case 'e':
		room = "Presidential Suite";
		payment = 15500*nights;
		break;

	default:
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << "|                     Invalid Input!                     |" << endl;
		cout << " ======================================================== " << endl;
		goto room_type;
		break;
	}
choice_booking:
	cout << endl;
	cout << " ======================================================== " << endl;
	cout << "|                                                        |" << endl;
	cout << "|             Press [C] to confirm booking...            |" << endl;
	cout << "|                                                        |" << endl;
	cout << " ======================================================== " << endl;
	cout << "\n Choice: ";
	cin >> choice;
	if (choice == 'C' || choice == 'c')
	{
		cout << endl;
		cout << " ======================================================== " << endl;
		cout << endl;
		Sleep(500);
		cout << "                       Please Wait.....                 " << endl;
		Sleep(500);
		cout << endl;
		cout << endl;
		cout << "                       Please Wait.....                 " << endl;
		Sleep(500);
		cout << endl;
		cout << endl;
		cout << "                       Please Wait.....                 " << endl;
		Sleep(500);
		cout << endl;
		cout << " ======================================================== " << endl;
		Sleep(500);
		system("CLS");
		cout << "\n\n\n";
		cout << "**********************************************************" << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                Room Reservation Complete!              |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "**********************************************************" << endl;
		cout << "\n Room Type: " << room << endl;
		cout << "\n Check-in Date: " << check_in << endl;
		cout << "\n Check-out Date: " << check_out << endl;
		cout << "\n Total Payment: " << payment << endl;
		cout << endl;
		cout << "**********************************************************" << endl;
		cout << " ======================================================== " << endl;
		cout << "|                                                        |" << endl;
		cout << "|                       Thank You!                       |" << endl;
		cout << "|                                                        |" << endl;
		cout << " ======================================================== " << endl;
		cout << "**********************************************************" << endl;

	}
	else
	{
		cout << " ======================================================== " << endl;
		cout << "|                     Invalid Input!                     |" << endl;
		cout << "|                      PLease Wait....                   |" << endl;
		cout << " ======================================================== " << endl;
		Sleep(2000);
		goto choice_booking;
	}
}

void power_off()
{
	cout << " ===================================================== " << endl;
	cout << "                                                       " << endl;
	cout << "                                                       " << endl;
	cout << "            ===============================            " << endl;
	cout << "            ||     o ====== o o     0    ||            " << endl;
	cout << "            ||         C++ PHONE         ||            " << endl;
	cout << "            ||===========================||            " << endl;
	cout << "            || C++Sim                65% ||            " << endl;
	cout << "            ||    ___                    ||            " << endl;
	cout << "            ||   |POW|  [9] Power Off    ||            " << endl;
	cout << "            ||   |___|                   ||            " << endl;
	cout << "            ||                           ||            " << endl;
	cout << "            ||                           ||            " << endl;
	cout << "            ||___________________________||            " << endl;
	cout << "            ||   __       _____          ||            " << endl;
	cout << "            ||  |__|     (_____)     <== ||            " << endl;
	cout << "            ===============================            " << endl;
	cout << "\n\n\n";
}

// ENDCODE