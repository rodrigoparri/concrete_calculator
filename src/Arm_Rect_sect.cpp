#include "Arm_Rect_sect.h"

Arm_Rect_sect::Arm_Rect_sect()
	: Rect_sect(), m_As(0) {}

Arm_Rect_sect::Arm_Rect_sect(double b, double h, double f_ck, double As) 
	// call rect_sect constructor
	: Rect_sect(b, h, f_ck), m_As(As) {}

Arm_Rect_sect::Arm_Rect_sect(const Arm_Rect_sect& section)
	: Rect_sect(section), m_As(section.m_As)  {}

