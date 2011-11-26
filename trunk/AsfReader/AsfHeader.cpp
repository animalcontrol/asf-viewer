#include "stdafx.h"
#include "AsfHeader.h"

namespace Asf {

AsfHeader::AsfHeader(LineIterator firstP, LineIterator lastP):first(firstP),last(lastP)
{
	std::tr1::regex pattern("([A-Z_]+) (\.+)"); // "FIELD_NAME field value" pattern

	// for each header line save header FIELD_NAME and Field Value
	for (LineIterator p = first; p!= last; ++p)
	{
		std::tr1::smatch mathes; // matched strings go here
		if (std::tr1::regex_search(*p,mathes,pattern))
		{
			values.insert(make_pair(mathes[1], mathes[2]));
		}
		else
		{
			// TODO : make an error here "bad header line format"
		}
	}
}

void AsfHeader::addProperty(const std::string& propertyLine)
{
	std::tr1::smatch mathes; // matched strings go here
	if (std::tr1::regex_search(propertyLine, mathes, pattern))
	{
		values.insert(make_pair(mathes[1], mathes[2]));
	}
	else
	{
		// TODO : make an error here "bad header line format"
	}
}
} // end of namespace