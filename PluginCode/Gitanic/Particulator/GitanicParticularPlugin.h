#ifndef GitanicParticularPlugin_h
#define GitanicParticularPlugin_h

#include "C4Plugins.h"
extern "C"
{
	C4MODULEEXPORT C4::Plugin *ConstructPlugin(void);
}

namespace C4{
class GitanicParticularPlugin : public Plugin 
{
	private:
	public:
		GitanicParticularPlugin();
		~GitanicParticularPlugin();
};

}
#endif