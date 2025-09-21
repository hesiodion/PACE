#ifndef APP_BASE_H
#define APP_BASE_H

#include <memory>

#include "AppBuilderEnums.h"
#include "MainWindow.h"

namespace Core
{
	class AppBase
	{
	public:

		AppBase();
		virtual ~AppBase();

		virtual bool configure() = 0;

	protected:
		AppBase(const AppBase&) = delete;
		AppBase(AppBase&&) = delete;
		AppBase& operator = (const AppBase&) = delete;
		AppBase& operator = (AppBase&&) = delete;
	};
}


#endif //! APP_BASE_H