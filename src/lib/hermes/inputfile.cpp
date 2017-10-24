#include "inputfile.h"

using namespace hermes::input;

InputFile::InputFile(Engine& pEngine, const std::string& path)
	: Input(pEngine)
	, mPath(path)
{
}

InputFile::~InputFile()
{
	mStream.close();
}

hermes::MessagePtr InputFile::pull()
{
	if(!mStream.is_open())
	{
		mStream.open(mPath);
	}

	std::string line;
	if(std::getline(mStream, line))
	{
		return MessagePtr(new Message(line));
	}
}
