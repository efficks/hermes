#ifndef __HERMES_LIB_HERMES_RECEIVERNODE_H
#define __HERMES_LIB_HERMES_RECEIVERNODE_H

#include "node.h"
#include "message.h"
#include <tbb/flow_graph.h>

namespace hermes
{
class SenderNode;

class ReceiverNode: public Node
{
friend class SenderNode;

public:
	ReceiverNode();
	virtual ~ReceiverNode() = 0;

protected:
	virtual tbb::flow::receiver<MessagePtr>& receivernode() = 0;
};

}

#endif //__HERMES_LIB_HERMES_RECEIVERNODE_H
