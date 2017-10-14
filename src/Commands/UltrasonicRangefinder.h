#ifndef UltrasonicRangefinder_H
#define UltrasonicRangefinder_H

#include "../CommandBase.h"
#include "Subsystems/DriveTrain.h"
#include <WPILib.h>

class UltrasonicRangefinder : public CommandBase {
private:
	double mSumInches;
	unsigned short mSampleCount;

public:
	UltrasonicRangefinder();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // UltrasonicRangefinder_H
