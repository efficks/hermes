#ifndef __HERMES_LIB_HERMES_OUTPUT_H
#define __HERMES_LIB_HERMES_OUTPUT_H

#include <memory>

#include "engine.h"
#include "message.h"
#include "receivernode.h"

namespace hermes
{

class Output: public ReceiverNode
{
public:
	Output(Engine&);
	virtual ~Output() = 0;


protected:
	virtual void push(MessagePtr) = 0;
	virtual tbb::flow::receiver<MessagePtr>& receivernode();

private:
	tbb::flow::source_node<MessagePtr> mNode;
};

}

#endif //__HERMES_LIB_HERMES_READER_H
