#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main(){
	int halfAmplitude = 32;
	int sleepTime = 1;
	float power = 0.05;
	
	float i = 0;
	do{
		int line = (round(halfAmplitude*sin(i) + halfAmplitude + 1));
        
        for(int x = 0; x < line; x++){
				cout<<"X";
			}
		
		int theRest = (halfAmplitude * 2) + 1;
		
		for(int x = 0; x < theRest - line; x++){
				cout<<"-";
			}
        
        cout<<endl;
        Sleep(sleepTime);
        
        i += power;
	} while(true);
	
	system("PAUSE");
	return 0;
}


// Fajny kod:) <3
// Dobra robota! 
