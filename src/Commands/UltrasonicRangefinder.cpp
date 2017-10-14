#include "UltrasonicRangefinder.h"

UltrasonicRangefinder::UltrasonicRangefinder() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(DriveTrain);
}

// Called just before this Command runs the first time
void UltrasonicRangefinder::Initialize() {
	mSumInches = 0;
	mSampleCount = 0;
}

// Called repeatedly when this Command is scheduled to run
void UltrasonicRangefinder::Execute() {
	for(int mSampleCount; mSampleCount<5; mSampleCount ++)
	{
		mSumInches += mUltrasonic->getUltrasonicDistance;
		//not sure what to do here but I tried
	}
}

// Make this return true when this Command no longer needs to run execute()
bool UltrasonicRangefinder::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void UltrasonicRangefinder::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UltrasonicRangefinder::Interrupted() {

}
