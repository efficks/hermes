#ifndef __HERMES_LIB_HERMES_INPUTFILE_H
#define __HERMES_LIB_HERMES_INPUTFILE_H

#include "input.h"
#include <string>
#include <fstream>

namespace hermes
{
namespace input
{

class InputFile: public Input
{
public:
	InputFile(Engine&, const std::string& path);
	~InputFile();

protected:
	MessagePtr pull();

private:
	std::string mPath;
	std::ifstream mStream;
};

}
}

#endif //__HERMES_LIB_HERMES_INPUT_INPUTFILE_H
