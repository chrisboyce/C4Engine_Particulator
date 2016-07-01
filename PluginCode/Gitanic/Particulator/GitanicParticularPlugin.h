#ifndef GitanicParticularPlugin_h
#define GitanicParticularPlugin_h

#include "C4Plugins.h"
#include "C4Methods.h"
extern "C"
{
	C4MODULEEXPORT C4::Plugin *ConstructPlugin(void);
}

namespace C4{
enum
{
	kMethodGitanicParticulator = 'mgpt'
};
class ParticulatorMethod : public Method{
private:
	Method *Replicate(void) const{
		return new ParticulatorMethod();
	}
public:
	ParticulatorMethod() : Method(kMethodGitanicParticulator){
	}
	~ParticulatorMethod(){}
};

class GitanicParticularPlugin : public Plugin 
{
	private:
		MethodReg<ParticulatorMethod> particulatorMethod;
	public:
		GitanicParticularPlugin();
		~GitanicParticularPlugin();
};

}
#endif