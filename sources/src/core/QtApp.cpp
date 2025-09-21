#include "QtApp.h"

Core::QtApp::QtApp(int argc, char* argv[])
{
	m_qtApp = std::unique_ptr<QApplication>(&argc, argv);
}

Core::QtApp::~QtApp()
{

}

bool Core::QtApp::configure()
{
	return false;
}