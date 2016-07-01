#include "GitanicParticularPlugin.h"


using namespace C4;

C4::Plugin *ConstructPlugin(void)
{
	return new(GitanicParticularPlugin);
}

GitanicParticularPlugin::GitanicParticularPlugin() : particulatorMethod(kMethodGitanicParticulator,"Particulator")
{
}

GitanicParticularPlugin::~GitanicParticularPlugin(){}