#ifndef __HERMES_LIB_HERMES_INPUT_H
#define __HERMES_LIB_HERMES_INPUT_H

#include <memory>

#include "engine.h"
#include "message.h"
#include "sendernode.h"

namespace hermes
{

class Input: public SenderNode
{
public:
	Input(Engine&);
	virtual ~Input() = 0;


protected:
	virtual MessagePtr pull() = 0;
	virtual tbb::flow::sender<MessagePtr>& sendernode();

private:
	tbb::flow::source_node<MessagePtr> mNode;
};

}

#endif //__HERMES_LIB_HERMES_READER_H
