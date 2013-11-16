// Add global variables here

typedef struct
{
	int threshold_;	// joystick threshold
	float max_power_;	// maximum power applied to robot drive motors

	int arm_up_ = 100;
	int arm_down_ = 200;

	// IRSeeker Information
	int direction_;	// value of 1 - 9, with 5 being dead ahead
	int ss1_;	// Channel 1 signal strength
	int ss2_;	// Channel 2 signal strength
	int ss3_;	// Channel 3 signal strength
	int ss4_;	// Channel 4 signal strength
	int ss5_;	// Channel 5 signal strength

} TGlobVars;

TGlobVars GlobVars;
