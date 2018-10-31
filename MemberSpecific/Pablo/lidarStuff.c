#pragma config(Sensor, in1,    DistSens,       sensorAnalog)
#pragma config(Sensor, in2,    PotSens,        sensorPotentiometer)
#pragma config(Motor,  port5,           lidarMot,      tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int startSens;
int turnSpeed = 23;
bool goRight = true;
int degreeReading[400];

void debugger()
{
		writeDebugStreamLine("%d",SensorValue[DistSens]);
}


void printVal()
{
		writeDebugStreamLine("Degree %d has %d.", SensorValue[PotSens]/10, degreeReading[SensorValue[PotSens]/10]);
}

void updateArray()
{
		degreeReading[SensorValue[PotSens]/10] = SensorValue[DistSens];
		//printVal();
}

bool checkBall()
{
	//if(...)
	//{
	//	return false;
	//}
	//else
	//{
	//return true;
	//}
}

void runLidar()
{
	if(goRight)
	{
		while(SensorValue[PotSens] > 200)
		{
			updateArray();
			motor[lidarMot] = turnSpeed;
		}
		goRight = false;
	}
	else //goLeft
	{
		while(SensorValue[PotSens] < 3500)
		{
			updateArray();
			motor[lidarMot] = -turnSpeed;
		}
		goRight = true;
	}
	clearDebugStream();
}

void debugLidar()
{
	runLidar();
	for(int x = 0; x < 400; x = x + 10)
	{
		if ((x + 1) < 400)
		{
			writeDebugStream("[%d]",degreeReading[x]);
		}
		else
		{
			writeDebugStreamLine("[%d]",degreeReading[x]);
		}
	}
}


task main()
{
	startSens = SensorValue[PotSens];
	while(true)
	{
		//runLidar();
		//debugger();
		debugLidar();
	}

}