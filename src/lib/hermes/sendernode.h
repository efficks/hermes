#ifndef __HERMES_LIB_HERMES_SENDERNODE_H
#define __HERMES_LIB_HERMES_SENDERNODE_H

#include "node.h"
#include "receivernode.h"
#include "message.h"
#include <tbb/flow_graph.h>

namespace hermes
{

class SenderNode: public Node
{
public:
	SenderNode();
	virtual ~SenderNode() = 0;

	void next(ReceiverNode&);

protected:
	virtual tbb::flow::sender<MessagePtr>& sendernode() = 0;
};

}

#endif //__HERMES_LIB_HERMES_SENDERNODE_H
