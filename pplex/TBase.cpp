#include "TBase.h"

TBase::TBase()
{

}

TBase::TBase(FType fType, std::string name, int clickableRadius)
{
	this->fType = fType;
	this->name = name;
	this->clickableRadius = clickableRadius;

	this->isVisible = 1;
	this->color = 0;
	this->thickness = clickableRadius-7; //подумать
	this->multiplicity = 1;
}
TBase::~TBase()
{

}

std::string TBase::DefineColor()
{
	char** ColorArray = new char*[8];
	*ColorArray = new char[10];
	ColorArray[0] = "Black";
	ColorArray[1] = "Red";
	ColorArray[2] = "Orange";
	ColorArray[3] = "Yellow";
	ColorArray[4] = "Green";
	ColorArray[5] = "LightBlue";
	ColorArray[6] = "Blue";
	ColorArray[7] = "Violet";
	std::string res = ColorArray[color];
	return res;
}

int TBase::getMultiplicity()
{
	return multiplicity;
}

int TBase::getColor()
{
	return color;
}
void TBase::setColor(int color)
{
	this->color = color;
}

int TBase::getThickness()
{
	return thickness;
}
void TBase::setThickness(int thickness)
{
	this->thickness = thickness;
}

int TBase::getClickableRadius()
{
	return clickableRadius;
}

void TBase::changeVisibility()
{
	this->isVisible = this->isVisible == 1 ? 0 : 1;
}

std::string TBase::getName()
{
	return name;
}

FType TBase::getType()
{
	return fType;
}