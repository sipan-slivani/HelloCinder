#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class HelloCinderApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void HelloCinderApp::setup()
{
}

void HelloCinderApp::mouseDown( MouseEvent event )
{
}

void HelloCinderApp::update()
{
}

void HelloCinderApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( HelloCinderApp, RendererGl )
