#include "Rect_sect.h"

Rect_sect::Rect_sect()
	: m_b(0), m_h(0), m_f_ck(0) {}

Rect_sect::Rect_sect(double b, double h, double f_ck) 
	: m_b(b), m_h(h), m_f_ck(f_ck) {}

Rect_sect::Rect_sect(const Rect_sect& section)
	: m_b(section.m_b), m_h(section.m_h), m_f_ck(section.m_f_ck) {}


