#ifndef QT_APP_H
#define QT_APP_H

#include <QApplication>
#include <memory>

#include "AppBase.h"

namespace Core
{
	class QtApp : public AppBase
	{
	public:

		QtApp(int argc, char* argv[]);
		virtual ~QtApp();

		bool configure() final;

	private:
		std::unique_ptr<QApplication> m_qtApp;

	};
}

#endif //! QT_APP_H