#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include <WPILib.h>
#include <Talon.h>
#include "Commands/UltrasonicRangefinder.h"
#include "CommandBase.h"

class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Ultrasonic* mUltrasonic;
	double speed;
	Talon* motor;

public:
	DriveTrain();
	void InitDefaultCommand();
	double getUltrasonicDistance();
	void driveAtSpeed(double speed);
};

#endif  // DriveTrain_H
