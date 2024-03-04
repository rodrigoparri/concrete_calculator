#pragma once
#include "Rect_sect.h"

class Arm_Rect_sect : public Rect_sect
{
private:
	double m_As; 
public:
	Arm_Rect_sect();
	Arm_Rect_sect(double b, double h, double f_ckk, double As);
	Arm_Rect_sect(const Arm_Rect_sect& section);


};
