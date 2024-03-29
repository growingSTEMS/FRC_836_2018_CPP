/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once


#include <Buttons/JoystickButton.h>
#include <Joystick.h>

class OI {
public:
	OI();
	frc::Joystick& GetJoystick();

	static std::shared_ptr<OI> Get();

private:

	frc::Joystick m_joy{0};
	std::shared_ptr<JoystickButton> m_intakeButton;
	std::shared_ptr<JoystickButton> m_intakeReverseButton;
};
