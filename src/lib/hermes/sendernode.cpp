#include "sendernode.h"

using namespace hermes;

SenderNode::SenderNode(){}
SenderNode::~SenderNode(){}

void SenderNode::next(ReceiverNode& pReceiver)
{
	tbb::flow::make_edge(sendernode(), pReceiver.receivernode());
}
