#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",15,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(15)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",25,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)20,(int)0,(int)0,HX_CSTRING("HaxeFlixel\nTutorial\nGame"),(int)22,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->_txtTitle = _g;
		HX_STACK_LINE(27)
		this->_txtTitle->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(28)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtTitle,true,false);
		HX_STACK_LINE(29)
		this->add(this->_txtTitle);
		HX_STACK_LINE(31)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Play"),this->clickPlay_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		this->_btnPlay = _g1;
		HX_STACK_LINE(32)
		Float _g2 = this->_btnPlay->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		Float _g3 = ((Float(::flixel::FlxG_obj::width) / Float((int)2)) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(32)
		Float _g4 = (_g3 - (int)10);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(32)
		this->_btnPlay->set_x(_g4);
		HX_STACK_LINE(33)
		Float _g5 = this->_btnPlay->get_height();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(33)
		Float _g6 = (::flixel::FlxG_obj::height - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(33)
		Float _g7 = (_g6 - (int)10);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(33)
		this->_btnPlay->set_y(_g7);
		HX_STACK_LINE(34)
		this->add(this->_btnPlay);
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton _g8 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Options"),this->clickOptions_dyn());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(36)
		this->_btnOptions = _g8;
		HX_STACK_LINE(37)
		this->_btnOptions->set_x(((Float(::flixel::FlxG_obj::width) / Float((int)2)) + (int)10));
		HX_STACK_LINE(38)
		Float _g9 = this->_btnOptions->get_height();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(38)
		Float _g10 = (::flixel::FlxG_obj::height - _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(38)
		Float _g11 = (_g10 - (int)10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(38)
		this->_btnOptions->set_y(_g11);
		HX_STACK_LINE(39)
		this->add(this->_btnOptions);
		HX_STACK_LINE(41)
		this->super::create();
	}
return null();
}


Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",46,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(46)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::clickOptions( ){
{
		HX_STACK_FRAME("MenuState","clickOptions",0xe3ab4a12,"MenuState.clickOptions","MenuState.hx",51,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		::flixel::FlxState State = ::OptionsState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(51)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickOptions,(void))

Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",59,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->super::destroy();
		HX_STACK_LINE(61)
		::flixel::text::FlxText _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtTitle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(61)
		this->_txtTitle = _g;
		HX_STACK_LINE(62)
		::flixel::ui::FlxButton _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnPlay);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		this->_btnPlay = _g1;
		HX_STACK_LINE(63)
		::flixel::ui::FlxButton _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnOptions);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(63)
		this->_btnOptions = _g2;
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",71,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(71)
		this->super::update();
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_btnOptions,"_btnOptions");
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_btnOptions,"_btnOptions");
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return _btnPlay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { return _btnOptions; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickOptions") ) { return clickOptions_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_btnOptions") ) { _btnOptions=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_txtTitle"));
	outFields->push(HX_CSTRING("_btnOptions"));
	outFields->push(HX_CSTRING("_btnPlay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,_txtTitle),HX_CSTRING("_txtTitle")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnOptions),HX_CSTRING("_btnOptions")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_CSTRING("_btnPlay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_txtTitle"),
	HX_CSTRING("_btnOptions"),
	HX_CSTRING("_btnPlay"),
	HX_CSTRING("create"),
	HX_CSTRING("clickPlay"),
	HX_CSTRING("clickOptions"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

