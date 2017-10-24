#ifndef __HERMES_LIB_HERMES_MESSAGE_H
#define __HERMES_LIB_HERMES_MESSAGE_H

#include <string>
#include <memory>

namespace hermes
{

class Message
{
public:
	Message(const std::string& pData);
	virtual ~Message();

private:
	const std::string mData;
};

typedef std::shared_ptr<hermes::Message> MessagePtr;

}

#endif //__HERMES_LIB_HERMES_MESSAGE_H
