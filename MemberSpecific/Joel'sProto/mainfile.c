#pragma config(Sensor, in3,    Gyro,           sensorGyro)
#pragma config(Sensor, dgtl1,  REnc,           sensorQuadEncoder)
#pragma config(Sensor, dgtl11, LEnc,           sensorQuadEncoder)
#pragma config(Motor,  port1,           left1,         tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           left2,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftEncoder,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           rightEncoder,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right2,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right1,        tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "autocode.h"
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

//set up port one as motorB
//set up port 10 as motorC

//Drive forward for 1 second
//drive backwards for 2 seconds
//spin in place for 10 seconds
//turns towards c for 3 seconds

//for the last two movements use waitM10sec()
//left and right method


task main()
{
	//encoders
	int distance;
	distance = 2520; //full rotation of an encoder is 3600 in a circle for our robot
	SensorValue[LEnc] = 0;
	SensorValue[REnc] = 0;

	//buttons
	while (true)
	{
		//=============use button r to use autonomous
		if (vexRT[Btn8R])
		{
			//=========Drive Forwarword
			leftMots(127);
			rightMots(127);
			wait1Msec(1000);
			halt();
			//==================drive backwowrds
			leftMots(-127);
			rightMots(-127);
			wait1Msec(2000);
			halt();
			//===========Spin in circle for 10 sec
			leftMots(127);
			rightMots(-127);
			wait10Msec(500);
			halt();

			//===========use channels 2 & 3 to move foward and backwords
			halt();
		}

		if(vexRT[Ch2] > 10 || vexRT[Ch2] < -10)
		{
			rightMots(vexRT[Ch2]);
			}
		else
			{
			rightMots(0);
			}
		if(vexRT[Ch3] > 10 || vexRT[Ch3] < -10)
		{
			leftMots(vexRT[Ch3]);
		}
		else
		{
			leftMots(0);
		}
	}
	while(true)
	{
		if(vexRT[Btn8D])
		{
			goStraightPID(30);
			halt();
			//halt();
			//while(SensorValue[rEnc] < distance && SensorValue[lEnc] < distance)
			//{
			//motor[rightWheel]=63;
			//motor[leftWheel] = 63;
			//}
			//halt();00);
		}

	}
			//wait10Msec(5

	 while(true)
	 {
	   if(vexRT[Btn7L])
	   {
	     runAuto();

	   }
	 }
}
