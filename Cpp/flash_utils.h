// vim: set ts=4 sw=4 noet:
#ifndef __FLASH_UTILS_H__
#define __FLASH_UTILS_H__

#ifndef __AVM2__
// Define empty macros so your calls disappear on server builds
#define as3_drawCircle(...)

#else // __AVM2__

#include <Flash++.h>

using namespace AS3::ui;

void as3_drawCircle(float x, float y, float radius)
{
	// Grab Stage
	flash::display::Stage stage = AS3::ui::internal::get_Stage();
	// Create a Sprite
	flash::display::Sprite mySprite = flash::display::Sprite::_new();
	// Add the Sprite to Stage
	stage->addChild(mySprite);
	// Grab Sprite's graphics
	flash::display::Graphics graphics = mySprite->graphics;

	// Regular graphics drawing calls
	graphics->beginFill(0x0000ff, 1.0);
	graphics->drawCircle(x, y, radius);
	graphics->endFill();
}

#endif // __AVM2__

#endif // __FLASH_UTILS_H__
