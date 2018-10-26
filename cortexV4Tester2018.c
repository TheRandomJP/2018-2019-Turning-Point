#pragma config(Sensor, in1,    Pot1,           sensorPotentiometer)
#pragma config(Sensor, in2,    Pot2,           sensorPotentiometer)
#pragma config(Sensor, in3,    Pot3,           sensorPotentiometer)
#pragma config(Sensor, in4,    Pot4,           sensorPotentiometer)
#pragma config(Sensor, in5,    Pot5,           sensorPotentiometer)
#pragma config(Sensor, in6,    Pot6,           sensorPotentiometer)
#pragma config(Sensor, in7,    Pot7,               sensorPotentiometer)
#pragma config(Sensor, in8,    Pot8,               sensorPotentiometer)
#pragma config(Sensor, dgtl1,  lim1,               sensorTouch)
#pragma config(Sensor, dgtl2,  lim2,               sensorTouch)
#pragma config(Sensor, dgtl3,  lim3,               sensorTouch)
#pragma config(Sensor, dgtl4,  lim4,               sensorTouch)
#pragma config(Sensor, dgtl5,  lim5,               sensorTouch)
#pragma config(Sensor, dgtl6,  lim6,               sensorTouch)
#pragma config(Sensor, dgtl7,  lim7,               sensorTouch)
#pragma config(Sensor, dgtl8,  lim8,               sensorTouch)
#pragma config(Sensor, dgtl9,  lim9,               sensorTouch)
#pragma config(Sensor, dgtl10, lim10,               sensorTouch)
#pragma config(Sensor, dgtl11, lim11,               sensorTouch)
#pragma config(Sensor, dgtl12, lim12,               sensorTouch)
#pragma config(Motor,  port1,           Mot1,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           Mot2,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           Mot3,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           Mot4,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           Mot5,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           Mot6,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           Mot7,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Mot8,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           Mot9,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          Mot10,         tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

int deadZone = 20;
int sensVal1 = 0;
int sensVal2 = 0;
int sensVal3 = 0;
int sensVal4 = 0;
int sensVal5 = 0;
int sensVal6 = 0;
int sensVal7 = 0;
int sensVal8 = 0;
int dgtVal1;
int dgtVal2;
int dgtVal3;
int dgtVal4;
int dgtVal5;
int dgtVal6;
int dgtVal7;
int dgtVal8;
int dgtVal9;
int dgtVal10;
int dgtVal11;
int dgtVal12;

void halt()
{
		motor[Mot1] = 0;
		motor[Mot2] = 0;
		motor[Mot3] = 0;
		motor[Mot4] = 0;
		motor[Mot5] = 0;
		motor[Mot6] = 0;
		motor[Mot7] = 0;
		motor[Mot8] = 0;
		motor[Mot9] = 0;
		motor[Mot10] = 0;
}
void go()
{
		motor[Mot1] = 127;
		motor[Mot2] = 127;
		motor[Mot3] = 127;
		motor[Mot4] = 127;
		motor[Mot5] = 127;
		motor[Mot6] = 127;
		motor[Mot7] = 127;
		motor[Mot8] = 127;
		motor[Mot9] = 127;
		motor[Mot10] = 127;
}

task main()
{
	while(true)
	{
		go();
		sensVal1 = SensorValue[Pot1];
		sensVal2 = SensorValue[Pot2];
		sensVal3 = SensorValue[Pot3];
		sensVal4 = SensorValue[Pot4];
		sensVal5 = SensorValue[Pot5];
		sensVal6 = SensorValue[Pot5];
		sensVal7 = SensorValue[Pot6];
		sensVal8 = SensorValue[Pot7];
		dgtVal1 = SensorValue[lim1];
		dgtVal2 = SensorValue[lim2];
		dgtVal3 = SensorValue[lim3];
		dgtVal4 = SensorValue[lim4];
		dgtVal5 = SensorValue[lim5];
		dgtVal6 = SensorValue[lim6];
		dgtVal7 = SensorValue[lim7];
		dgtVal8 = SensorValue[lim8];
		dgtVal9 = SensorValue[lim9];
		dgtVal10 = SensorValue[lim10];
		dgtVal11 = SensorValue[lim11];
		dgtVal12 = SensorValue[lim12];
		if (abs(vexRT[Ch1]) > deadZone)
		{
			halt();
		}
		if (abs(vexRT[Ch2]) > deadZone)
		{
			halt();
		}
		if (abs(vexRT[Ch3]) > deadZone)
		{
			halt();
		}
		if (abs(vexRT[Ch4]) > deadZone)
		{
			halt();
		}
		if (vexRT[Btn7U] == 1)
		{
			halt();
		}
		if (vexRT[Btn7D] == 1)
		{
			halt();
		}
		if (vexRT[Btn7L] == 1)
		{
			halt();
		}
		if (vexRT[Btn7R] == 1)
		{
			halt();
		}
		if (vexRT[Btn8U] == 1)
		{
			halt();
		}
		if (vexRT[Btn8D] == 1)
		{
			halt();
		}
		if (vexRT[Btn8L] == 1)
		{
			halt();
		}
		if (vexRT[Btn8R] == 1)
		{
			halt();
		}
		if (vexRT[Btn5U] == 0)
		{
			halt();
		}
		if (vexRT[Btn5D] == 1)
		{
			halt();
		}
		if (vexRT[Btn6U] == 1)
		{
			halt();
		}
		if (vexRT[Btn6D] == 1)
		{
			halt();
		}
	}
}
