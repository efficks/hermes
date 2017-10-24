#ifndef __HERMES_LIB_HERMES_ENGINE_H
#define __HERMES_LIB_HERMES_ENGINE_H

#include <tbb/flow_graph.h>

namespace hermes
{

class Input;

class Engine
{
friend class hermes::Input;

public:
	Engine();
	~Engine();

private:
	tbb::flow::graph mGraph;
};

}

#endif //__HERMES_LIB_HERMES_ENGINE_H
