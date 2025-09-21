#ifndef APP_BUILDER_H
#define APP_BUILDER_H

#include "AppBuilderEnums.h"

namespace Core
{
	class AppBuilder
	{
	public:
		AppBuilder(int argc, char* argv[], const Common::APP_TYPE& app_type);

		~AppBuilder();

	private:
		Common::APP_TYPE m_application_type = Common::APP_TYPE::GUI;	// Application type : GUI by default
	};
}

#endif //! APP_BUILDER_H