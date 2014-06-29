#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxTypedButton_FlxButtonEvent
#include <flixel/ui/_FlxTypedButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void OptionsState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("OptionsState","new",0x73d32065,"OptionsState.new","OptionsState.hx",13,0x342db2ab)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(13)
	super::__construct(MaxSize);
}
;
	return null();
}

//OptionsState_obj::~OptionsState_obj() { }

Dynamic OptionsState_obj::__CreateEmpty() { return  new OptionsState_obj; }
hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< OptionsState_obj > result = new OptionsState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic OptionsState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< OptionsState_obj > result = new OptionsState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void OptionsState_obj::create( ){
{
		HX_STACK_FRAME("OptionsState","create",0xe6502817,"OptionsState.create","OptionsState.hx",29,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)20,(int)0,HX_CSTRING("Options"),(int)22,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		this->_txtTitle = _g;
		HX_STACK_LINE(32)
		this->_txtTitle->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(33)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtTitle,true,false);
		HX_STACK_LINE(34)
		this->add(this->_txtTitle);
		HX_STACK_LINE(36)
		Float _g1 = this->_txtTitle->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		Float _g2 = (this->_txtTitle->y + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		Float _g3 = (_g2 + (int)10);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(36)
		::flixel::text::FlxText _g4 = ::flixel::text::FlxText_obj::__new((int)0,_g3,(int)0,HX_CSTRING("Volume"),(int)8,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(36)
		this->_txtVolume = _g4;
		HX_STACK_LINE(37)
		this->_txtVolume->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(38)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtVolume,true,false);
		HX_STACK_LINE(39)
		this->add(this->_txtVolume);
		HX_STACK_LINE(42)
		Float _g5 = this->_txtVolume->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(42)
		Float _g6 = (this->_txtVolume->y + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(42)
		Float _g7 = (_g6 + (int)2);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton _g8 = ::flixel::ui::FlxButton_obj::__new((int)8,_g7,HX_CSTRING("-"),this->clickVolumeDown_dyn());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(42)
		this->_btnVolumeDown = _g8;
		HX_STACK_LINE(43)
		this->_btnVolumeDown->loadGraphic(HX_CSTRING("assets/images/button.png"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(44)
		::flixel::system::FlxSound _g9 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/select.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(44)
		this->_btnVolumeDown->onUp->sound = _g9;
		HX_STACK_LINE(45)
		this->add(this->_btnVolumeDown);
		HX_STACK_LINE(47)
		::flixel::ui::FlxButton _g10 = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::width - (int)28),this->_btnVolumeDown->y,HX_CSTRING("+"),this->clickVolumeUp_dyn());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(47)
		this->_btnVolumeUp = _g10;
		HX_STACK_LINE(48)
		this->_btnVolumeUp->loadGraphic(HX_CSTRING("assets/images/button.png"),true,(int)20,(int)20,null(),null());
		HX_STACK_LINE(49)
		::flixel::system::FlxSound _g11 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/select.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(49)
		this->_btnVolumeUp->onUp->sound = _g11;
		HX_STACK_LINE(50)
		this->add(this->_btnVolumeUp);
		HX_STACK_LINE(52)
		Float _g12 = this->_btnVolumeDown->get_width();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(52)
		Float _g13 = (this->_btnVolumeDown->x + _g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(52)
		Float _g14 = (_g13 + (int)4);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(52)
		int _g15 = ::Std_obj::_int((::flixel::FlxG_obj::width - (int)64));		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(52)
		Float _g16 = this->_btnVolumeUp->get_height();		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(52)
		int _g17 = ::Std_obj::_int(_g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(52)
		::flixel::ui::FlxBar _g18 = ::flixel::ui::FlxBar_obj::__new(_g14,this->_btnVolumeDown->y,(int)1,_g15,_g17,null(),null(),null(),null(),null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(52)
		this->_barVolume = _g18;
		HX_STACK_LINE(53)
		this->_barVolume->createFilledBar((int)-12171706,(int)-1,true,(int)-1);
		HX_STACK_LINE(54)
		this->add(this->_barVolume);
		HX_STACK_LINE(56)
		::String _g19 = ::Std_obj::string((::flixel::FlxG_obj::sound->volume * (int)100));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(56)
		::String _g20 = (_g19 + HX_CSTRING("%"));		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(56)
		::flixel::text::FlxText _g21 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)200,_g20,(int)8,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(56)
		this->_txtVolumeAmt = _g21;
		HX_STACK_LINE(57)
		this->_txtVolumeAmt->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(58)
		this->_txtVolumeAmt->set_borderStyle((int)2);
		HX_STACK_LINE(59)
		this->_txtVolumeAmt->set_borderColor((int)-12171706);
		HX_STACK_LINE(60)
		Float _g22 = this->_barVolume->get_height();		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(60)
		Float _g23 = (Float(_g22) / Float((int)2));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(60)
		Float _g24 = (this->_barVolume->y + _g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(60)
		Float _g25 = this->_txtVolumeAmt->get_height();		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(60)
		Float _g26 = (Float(_g25) / Float((int)2));		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(60)
		Float _g27 = (_g24 - _g26);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(60)
		this->_txtVolumeAmt->set_y(_g27);
		HX_STACK_LINE(61)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtVolumeAmt,true,false);
		HX_STACK_LINE(62)
		this->add(this->_txtVolumeAmt);
		HX_STACK_LINE(64)
		::flixel::ui::FlxButton _g28 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)90),(::flixel::FlxG_obj::height - (int)28),HX_CSTRING("Clear Data"),this->clickClearData_dyn());		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(64)
		this->_btnClearData = _g28;
		HX_STACK_LINE(65)
		::flixel::system::FlxSound _g29 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/select.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(65)
		this->_btnClearData->onUp->sound = _g29;
		HX_STACK_LINE(66)
		this->add(this->_btnClearData);
		HX_STACK_LINE(68)
		::flixel::ui::FlxButton _g30 = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) + (int)10),(::flixel::FlxG_obj::height - (int)28),HX_CSTRING("Back"),this->clickBack_dyn());		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(68)
		this->_btnBack = _g30;
		HX_STACK_LINE(69)
		::flixel::system::FlxSound _g31 = ::flixel::FlxG_obj::sound->load(HX_CSTRING("assets/sounds/select.wav"),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(69)
		this->_btnBack->onUp->sound = _g31;
		HX_STACK_LINE(70)
		this->add(this->_btnBack);
		HX_STACK_LINE(73)
		::flixel::util::FlxSave _g32 = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(73)
		this->_save = _g32;
		HX_STACK_LINE(74)
		this->_save->bind(HX_CSTRING("flixel-tutorial"));
		HX_STACK_LINE(77)
		this->updateVolume();
		HX_STACK_LINE(79)
		this->super::create();
	}
return null();
}


Void OptionsState_obj::clickClearData( ){
{
		HX_STACK_FRAME("OptionsState","clickClearData",0x24baad0a,"OptionsState.clickClearData","OptionsState.hx",86,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->_save->erase();
		HX_STACK_LINE(88)
		::flixel::FlxG_obj::sound->set_volume(.5);
		HX_STACK_LINE(89)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickClearData,(void))

Void OptionsState_obj::clickBack( ){
{
		HX_STACK_FRAME("OptionsState","clickBack",0x41d6e854,"OptionsState.clickBack","OptionsState.hx",96,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(97)
		this->_save->close(null(),null());
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(98)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickBack,(void))

Void OptionsState_obj::clickVolumeDown( ){
{
		HX_STACK_FRAME("OptionsState","clickVolumeDown",0x7a47b149,"OptionsState.clickVolumeDown","OptionsState.hx",105,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		{
			HX_STACK_LINE(106)
			::flixel::system::frontEnds::SoundFrontEnd _g = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			_g->set_volume((_g->volume - 0.1));
		}
		HX_STACK_LINE(107)
		this->_save->data->__FieldRef(HX_CSTRING("volume")) = ::flixel::FlxG_obj::sound->volume;
		HX_STACK_LINE(108)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeDown,(void))

Void OptionsState_obj::clickVolumeUp( ){
{
		HX_STACK_FRAME("OptionsState","clickVolumeUp",0x9ac24782,"OptionsState.clickVolumeUp","OptionsState.hx",115,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			::flixel::system::frontEnds::SoundFrontEnd _g = ::flixel::FlxG_obj::sound;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			_g->set_volume((_g->volume + 0.1));
		}
		HX_STACK_LINE(117)
		this->_save->data->__FieldRef(HX_CSTRING("volume")) = ::flixel::FlxG_obj::sound->volume;
		HX_STACK_LINE(118)
		this->updateVolume();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,clickVolumeUp,(void))

Void OptionsState_obj::updateVolume( ){
{
		HX_STACK_FRAME("OptionsState","updateVolume",0x0aa1d81e,"OptionsState.updateVolume","OptionsState.hx",125,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(126)
		int vol = ::Math_obj::round((::flixel::FlxG_obj::sound->volume * (int)100));		HX_STACK_VAR(vol,"vol");
		HX_STACK_LINE(127)
		this->_barVolume->set_currentValue(vol);
		HX_STACK_LINE(128)
		::String _g = ::Std_obj::string(vol);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(128)
		::String _g1 = (_g + HX_CSTRING("%"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(128)
		this->_txtVolumeAmt->set_text(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(OptionsState_obj,updateVolume,(void))

Void OptionsState_obj::destroy( ){
{
		HX_STACK_FRAME("OptionsState","destroy",0xb2ee637f,"OptionsState.destroy","OptionsState.hx",132,0x342db2ab)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		this->super::destroy();
		HX_STACK_LINE(136)
		::flixel::text::FlxText _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtTitle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(136)
		this->_txtTitle = _g;
		HX_STACK_LINE(137)
		::flixel::ui::FlxBar _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_barVolume);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(137)
		this->_barVolume = _g1;
		HX_STACK_LINE(138)
		::flixel::text::FlxText _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtVolume);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(138)
		this->_txtVolume = _g2;
		HX_STACK_LINE(139)
		::flixel::text::FlxText _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtVolumeAmt);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(139)
		this->_txtVolumeAmt = _g3;
		HX_STACK_LINE(140)
		::flixel::ui::FlxButton _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnVolumeDown);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(140)
		this->_btnVolumeDown = _g4;
		HX_STACK_LINE(141)
		::flixel::ui::FlxButton _g5 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnVolumeUp);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(141)
		this->_btnVolumeUp = _g5;
		HX_STACK_LINE(142)
		::flixel::ui::FlxButton _g6 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnClearData);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(142)
		this->_btnClearData = _g6;
		HX_STACK_LINE(143)
		::flixel::ui::FlxButton _g7 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnBack);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(143)
		this->_btnBack = _g7;
		HX_STACK_LINE(144)
		this->_save->destroy();
		HX_STACK_LINE(145)
		this->_save = null();
	}
return null();
}



OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_barVolume,"_barVolume");
	HX_MARK_MEMBER_NAME(_txtVolume,"_txtVolume");
	HX_MARK_MEMBER_NAME(_txtVolumeAmt,"_txtVolumeAmt");
	HX_MARK_MEMBER_NAME(_btnVolumeDown,"_btnVolumeDown");
	HX_MARK_MEMBER_NAME(_btnVolumeUp,"_btnVolumeUp");
	HX_MARK_MEMBER_NAME(_btnClearData,"_btnClearData");
	HX_MARK_MEMBER_NAME(_btnBack,"_btnBack");
	HX_MARK_MEMBER_NAME(_save,"_save");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_barVolume,"_barVolume");
	HX_VISIT_MEMBER_NAME(_txtVolume,"_txtVolume");
	HX_VISIT_MEMBER_NAME(_txtVolumeAmt,"_txtVolumeAmt");
	HX_VISIT_MEMBER_NAME(_btnVolumeDown,"_btnVolumeDown");
	HX_VISIT_MEMBER_NAME(_btnVolumeUp,"_btnVolumeUp");
	HX_VISIT_MEMBER_NAME(_btnClearData,"_btnClearData");
	HX_VISIT_MEMBER_NAME(_btnBack,"_btnBack");
	HX_VISIT_MEMBER_NAME(_save,"_save");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic OptionsState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { return _save; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnBack") ) { return _btnBack; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickBack") ) { return clickBack_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barVolume") ) { return _barVolume; }
		if (HX_FIELD_EQ(inName,"_txtVolume") ) { return _txtVolume; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnVolumeUp") ) { return _btnVolumeUp; }
		if (HX_FIELD_EQ(inName,"updateVolume") ) { return updateVolume_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_txtVolumeAmt") ) { return _txtVolumeAmt; }
		if (HX_FIELD_EQ(inName,"_btnClearData") ) { return _btnClearData; }
		if (HX_FIELD_EQ(inName,"clickVolumeUp") ) { return clickVolumeUp_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnVolumeDown") ) { return _btnVolumeDown; }
		if (HX_FIELD_EQ(inName,"clickClearData") ) { return clickClearData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clickVolumeDown") ) { return clickVolumeDown_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic OptionsState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_save") ) { _save=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnBack") ) { _btnBack=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_barVolume") ) { _barVolume=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtVolume") ) { _txtVolume=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnVolumeUp") ) { _btnVolumeUp=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_txtVolumeAmt") ) { _txtVolumeAmt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_btnClearData") ) { _btnClearData=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_btnVolumeDown") ) { _btnVolumeDown=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_txtTitle"));
	outFields->push(HX_CSTRING("_barVolume"));
	outFields->push(HX_CSTRING("_txtVolume"));
	outFields->push(HX_CSTRING("_txtVolumeAmt"));
	outFields->push(HX_CSTRING("_btnVolumeDown"));
	outFields->push(HX_CSTRING("_btnVolumeUp"));
	outFields->push(HX_CSTRING("_btnClearData"));
	outFields->push(HX_CSTRING("_btnBack"));
	outFields->push(HX_CSTRING("_save"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OptionsState_obj,_txtTitle),HX_CSTRING("_txtTitle")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(OptionsState_obj,_barVolume),HX_CSTRING("_barVolume")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OptionsState_obj,_txtVolume),HX_CSTRING("_txtVolume")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(OptionsState_obj,_txtVolumeAmt),HX_CSTRING("_txtVolumeAmt")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnVolumeDown),HX_CSTRING("_btnVolumeDown")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnVolumeUp),HX_CSTRING("_btnVolumeUp")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnClearData),HX_CSTRING("_btnClearData")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(OptionsState_obj,_btnBack),HX_CSTRING("_btnBack")},
	{hx::fsObject /*::flixel::util::FlxSave*/ ,(int)offsetof(OptionsState_obj,_save),HX_CSTRING("_save")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_txtTitle"),
	HX_CSTRING("_barVolume"),
	HX_CSTRING("_txtVolume"),
	HX_CSTRING("_txtVolumeAmt"),
	HX_CSTRING("_btnVolumeDown"),
	HX_CSTRING("_btnVolumeUp"),
	HX_CSTRING("_btnClearData"),
	HX_CSTRING("_btnBack"),
	HX_CSTRING("_save"),
	HX_CSTRING("create"),
	HX_CSTRING("clickClearData"),
	HX_CSTRING("clickBack"),
	HX_CSTRING("clickVolumeDown"),
	HX_CSTRING("clickVolumeUp"),
	HX_CSTRING("updateVolume"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::__mClass,"__mClass");
};

#endif

Class OptionsState_obj::__mClass;

void OptionsState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("OptionsState"), hx::TCanCast< OptionsState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void OptionsState_obj::__boot()
{
}

