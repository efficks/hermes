#include "input.h"

using namespace hermes;

Input::Input(Engine& pEngine)
	: mNode(pEngine.mGraph, [this]( MessagePtr &x /* output */ )->bool {
			if(!x)
			{
				return false;
			}
			x = this->pull();
			return true;}, false)
{
	
}

Input::~Input()
{}

tbb::flow::sender<MessagePtr>& Input::sendernode()
{
	return mNode;
}
