#include "DriveTrain.h"
#include "../RobotMap.h"
#include <Talon.h>
#include <WPILib.h>

DriveTrain::DriveTrain() : Subsystem("DriveTrain"), mUltrasonic(new Ultrasonic(0,1)), motor(new Talon(PORT)){
	Ultrasonic *mUltrasonic = new Ultrasonic(0, 1);
	mUltrasonic->SetAutomaticMode(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new UltrasonicRangefinder());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
double DriveTrain::getUltrasonicDistance()
{
	return mUltrasonic->GetRangeInches();
}

void DriveTrain::driveAtSpeed(double speed)
{
	motor->SetSpeed(speed);
}
