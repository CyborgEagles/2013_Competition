#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Motor,  mtr_S1_C1_1,     LeftDrive,     tmotorTetrix, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     RightDrive,    tmotorTetrix, openLoop, encoder)
#pragma config(Servo,  srvo_S1_C2_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C2_6,    servo6,               tServoNone)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma debuggerWindows("joystickGame");

// IMPORTANT: You need to change path of include files to where they physically reside on your system
#include "JoystickDriver.c"
#include "F:\FTC Block Party\GlobVars.h"
#include "F:\FTC Block Party\GlobFuncs.c"
// #include "E:\FTC Block Party\hitechnic-irseeker-v1.h"

// Function to manage the primary game controller
// NOTE:	This game controller drives the robot
// NOTE:	Make sure to call function getJoystickSettings( joystick )
//				prior to calling this function
// CRITICAL:	Make sure this function is non-blocking
//						i.e. do not put any infinite loops or delays
//						in this function.
void HandleGameController1()
{
	GlobVars.threshold_ = 10;
	//GlobVars.max_power_ = 10.0;

	// left analog joystick
	// 127 to -128
	if( abs( joystick.joy1_x1 ) > GlobVars.threshold_ )
  {
  	// Add left joystick x-axis control code here
  }
  else
  {
  }
	if( abs( joystick.joy1_y1 ) > GlobVars.threshold_ )
  {
  	// Add left joystick y-axis control code here
  	motor[ LeftDrive ] = ApplyPower( joystick.joy1_y1, GlobVars.max_power_ );
  }
  else
  {
  	motor[ LeftDrive ] = 0;
  }

  // right analog joystick
	if( abs( joystick.joy1_x2 ) > GlobVars.threshold_ )
  {
  	// Add right joystick x-axis control code here
  }
  else
  {
  }
  if( abs( joystick.joy1_y2 ) > GlobVars.threshold_ )
  {
  	// Add right joystick y-axis control code here
	  motor[ RightDrive ] = ApplyPower( joystick.joy1_y2, GlobVars.max_power_ );
  }
  else
  {
  	motor[ RightDrive ] = 0;
  }

  // buttons
  // 12-bit bitmap with a bit for each button
  // NOTE: Morer than one button can be pressed at a time
  for( int button = 0; button < 12; button++ )
  {
  	if( ( joystick.joy1_Buttons >> button ) & 0x01 )
  	{
  		switch( button )
  		{
  			case 0:	// button 1 pressed

  				break;
  			case 1:	// button 2 pressed
  				break;
  			case 2:	// button 3 pressed
  				break;
  			case 3:	// button 4 pressed
  				break;
  			case 4:	// button 5 pressed
  				GlobVars.max_power_ = 1;
  				break;
  			case 5:	// button 6 pressed
  				GlobVars.max_power_ = 100;
  				break;
  			case 6:	// button 7 pressed
  				break;
  			case 7:	// button 8 pressed
  				break;
  			case 8:	// button 9 pressed
  				break;
  			case 9:	// button 10 pressed
  				break;
  			case 10:	// button 11 pressed
  				break;
  			case 11:	// button 12 pressed
  				break;
  			default:
  				break;
  			}
  		}
  	}

  // tophat buttons
  // -1 if not pressed
  // 0 - 7 for the eight positions
  // NOTE: Only one button can be pressed at a time
	switch( joystick.joy1_TopHat )
	{
		case 0:	// top button
			break;
		case 1:	// upper right button
			break;
		case 2:	// right button
			break;
		case 3:	// lower right button
			break;
		case 4:	// bottom button
			break;
		case 5:	// lower left button
			break;
		case 6:	// left button
			break;
		case 7:	// upper left button
			break;
		default:
			break;
	}
}

// Function to manage the secondary game controller
// NOTE:	This game controller controlls picking
//				up and placing the game pieces.
// NOTE:	Make sure to call function getJoystickSettings( joystick )
//				prior to calling this function
// CRITICAL:	Make sure this function is non-blocking
//						i.e. do not put any infinite loops or delays
//						in this function.
void HandleGameController2()
{
	GlobVars.threshold_ = 10;
	GlobVars.max_power_ = 100.0;

	// left analog joystick
	// 127 to -128
	if( abs( joystick.joy2_x1 ) > GlobVars.threshold_ )
  {
  	// Add left joystick x-axis control code here
  }
  else
  {
  }
  if( abs( joystick.joy2_y1 ) > GlobVars.threshold_ )
  {
  	// Add left joystick y-axis control code here
  }
  else
  {
  }

  // right analog joystick
	if( abs( joystick.joy2_x2 ) > GlobVars.threshold_ )
  {
  	// Add right joystick x-axis control code here
  }
  else
  {
  }
  if( abs( joystick.joy2_y2 ) > GlobVars.threshold_ )
  {
  	// Add right joystick y-axis control code here
  }
  else
  {
  }

  // buttons
  // 12-bit bitmap with a bit for each button
  // NOTE: More than one button can be pressed at a time
  for( int button = 0; button < 12; button++ )
  {
  	if( ( joystick.joy2_Buttons >> button ) & 0x01 )
  	{
  		switch( button )
  		{
  			case 0:	// button 1 pressed
  				break;
  			case 1:	// button 2 pressed
  				break;
  			case 2:	// button 3 pressed
  				break;
  			case 3:	// button 4 pressed
  				break;
  			case 4:	// button 5 pressed
  				break;
  			case 5:	// button 6 pressed
  				break;
  			case 6:	// button 7 pressed
  				break;
  			case 7:	// button 8 pressed
  				break;
  			case 8:	// button 9 pressed
  				break;
  			case 9:	// button 10 pressed
  				break;
  			case 10:	// button 11 pressed
  				break;
  			case 11:	// button 12 pressed
  				break;
  			default:
  				break;
  			}
  		}
  	}

  // tophat buttons
  // -1 if not pressed
  // 0 - 7 for the eight positions
  // NOTE: Onlt one button can be pressed at a time
	switch( joystick.joy2_TopHat )
	{
		case 0:	// top button
			break;
		case 1:	// upper right button
			break;
		case 2:	// right button
			break;
		case 3:	// lower right button
			break;
		case 4:	// bottom button
			break;
		case 5:	// lower left button
			break;
		case 6:	// left button
			break;
		case 7:	// upper left button
			break;
		default:
			break;
	}
}

// Function to handle autonomous robot mode
// NOTE:	Make sure to call function GetIRSeekerData()
//				prior to calling this function.  This function
//				will steer the robot toward the IR beacon.
// CRITICAL:	Make sure this function is non-blocking
//						i.e. do not put any infinite loops or delays
//						in this function.
/*bool HandleAutonomousRobot()
{
	switch( GlobVars.direction_ )
	{
		// IR beacon is to the left of the robot
		// Drive the robot right
		// NOTE: You may have to adjust the motor power levels
		case 1:
		case 2:
		case 3:
		case 4:
			motor[ LeftDrive ] = 30;
			motor[ RightDrive ] = 50;
			break;
		// IR beacon is dead ahead of the robot
		// Drive the robot forward
		// NOTE: You may have to adjust the motor power levels
		case 5:
			motor[ LeftDrive ] = 50;
			motor[ RightDrive ] = 50;
			break;
		// IR beacon is to the right of the robot
		// Drive the robot left
		// NOTE: You may have to adjust the motor power levels
		case 6:
		case 7:
		case 8:
		case 9:
			motor[ LeftDrive ] = 50;
			motor[ RightDrive ] = 30;
			break;
		default:
			motor[ LeftDrive ] = 0;
			motor[ RightDrive ] = 0;
			return false;
	}

	return true;
}
*/
// Function to initialize robot to a default state
bool InitializeRobot()
{
	// Add robot initialization code here
	motor[ LeftDrive ] = 0;
	bMotorFlippedMode[ LeftDrive ] = false;
	motor[ RightDrive ] = 0;
	bMotorFlippedMode[ RightDrive ] = true;

	// Initialize global variables
	GlobVars.direction_ = 0;
	GlobVars.max_power_ = 100;

	return true;
}

// Function to kill the robot if necessary
bool KillRobot()
{
	// Add kill robot code here
	return false;
}

// Function to grab current IRSeeker data
// NOTE:	This unction populates the global varibles
//				for the IR sensor's signal strenght values
//				and directional data
/*int GetIRSeekerData()
{
  // read all of the signal strenght sensors values at once
	// return -1 if an error occurs
  if(! HTIRSreadAllStrength( IRSeeker, GlobVars.ss1_, GlobVars.ss2_, GlobVars.ss3_, GlobVars.ss4_, GlobVars.ss5_ ) )
  {
		return -1;
	}

	// read the direction from which the signal is coming
	// valid data is from 1 to 9, 5 being dead ahead
  // return -2 if an error occurs
  GlobVars.direction_ = HTIRSreadDir( IRSeeker );
	if( GlobVars.direction_ < 0)
	{
		return -2;
	}

	return 1;
}
*/
// Main program that runs when executed
task main()
{
	// Initialize the robot
	if( !InitializeRobot() )
  {
  	// if init fails, fix robot here
	}

	// Wait for start of the autonomous phase of the game
	// NOTE:	waitForStart() function is controlled by the FTC for
	//				competition.  Comment this out for testing directly
	//				from the RobotC interface.
/*  waitForStart();	// Wait for the beginning of autonomous phase

  ///////////////////////////////////////////////////////////////////////////
	// AUTONOMOUS PHASE
  //
  // Place your robot specific autonomous phase code within this while loop
  //
	///////////////////////////////////////////////////////////////////////////
	while( true )
  {
    getJoystickSettings( joystick );

    // Check if Autonomous phase has ended
    if( joystick.StopPgm )
    {
      break;	// break infinite while loop to wait for beginning of tel-op phase
    }

    // Run Autonomous Robot mode
		if( GetIRSeekerData() )
		{
			if( HandleAutonomousRobot() )
			{
				wait1Msec( 50 );
			}
			else
			{
				// Handle Autonomous robot faults here
			}
		}
  }

	// NOTE:	waitForStart() function is controlled by the FTC for
	//				competition.  Comment this out for testing directly
	//				from the RobotC interface.
  waitForStart();	// Wait for the beginning of tel-op phase
*/
  ///////////////////////////////////////////////////////////////////////////
	// TEL-OP PHASE
  //
  // Place your robot specific tel-op phase code within this while loop
  //
  ///////////////////////////////////////////////////////////////////////////
  while( true )
  {
		getJoystickSettings( joystick );

		HandleGameController1();	// Drive the robot function
  	HandleGameController2();	// Pick up and drop game piece function

  	// Check if we need to kill the robot and exit the program
  	if( KillRobot() )
  	{
  		break;
  	}
  }
}
