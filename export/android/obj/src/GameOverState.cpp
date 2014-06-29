#include <hxcpp.h>

#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
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

Void GameOverState_obj::__construct(bool Win,int Score)
{
HX_STACK_FRAME("GameOverState","new",0x0e4d841d,"GameOverState.new","GameOverState.hx",13,0xd0ff2df3)
HX_STACK_THIS(this)
HX_STACK_ARG(Win,"Win")
HX_STACK_ARG(Score,"Score")
{
	HX_STACK_LINE(15)
	this->_score = (int)0;
	HX_STACK_LINE(32)
	super::__construct(null());
	HX_STACK_LINE(33)
	this->_win = Win;
	HX_STACK_LINE(34)
	this->_score = Score;
}
;
	return null();
}

//GameOverState_obj::~GameOverState_obj() { }

Dynamic GameOverState_obj::__CreateEmpty() { return  new GameOverState_obj; }
hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new(bool Win,int Score)
{  hx::ObjectPtr< GameOverState_obj > result = new GameOverState_obj();
	result->__construct(Win,Score);
	return result;}

Dynamic GameOverState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOverState_obj > result = new GameOverState_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void GameOverState_obj::create( ){
{
		HX_STACK_FRAME("GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",38,0xd0ff2df3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(42)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)0,(int)20,(int)0,(  ((this->_win)) ? ::String(HX_CSTRING("You Win!")) : ::String(HX_CSTRING("Game Over!")) ),(int)22,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(42)
		this->_txtTitle = _g;
		HX_STACK_LINE(43)
		this->_txtTitle->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(44)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtTitle,true,false);
		HX_STACK_LINE(45)
		this->add(this->_txtTitle);
		HX_STACK_LINE(47)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) - (int)18),(int)0,HX_CSTRING("Final Score:"),(int)8,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(47)
		this->_txtMessage = _g1;
		HX_STACK_LINE(48)
		this->_txtMessage->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(49)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtMessage,true,false);
		HX_STACK_LINE(50)
		this->add(this->_txtMessage);
		HX_STACK_LINE(52)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)8),(int)0,HX_CSTRING("assets/images/coin.png"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(52)
		this->_sprScore = _g2;
		HX_STACK_LINE(53)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_sprScore,false,true);
		HX_STACK_LINE(54)
		this->add(this->_sprScore);
		HX_STACK_LINE(56)
		::String _g3 = ::Std_obj::string(this->_score);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(56)
		::flixel::text::FlxText _g4 = ::flixel::text::FlxText_obj::__new((Float(::flixel::FlxG_obj::width) / Float((int)2)),(int)0,(int)0,_g3,(int)8,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(56)
		this->_txtScore = _g4;
		HX_STACK_LINE(57)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtScore,false,true);
		HX_STACK_LINE(58)
		this->add(this->_txtScore);
		HX_STACK_LINE(61)
		int _hiScore = this->checkHiScore(this->_score);		HX_STACK_VAR(_hiScore,"_hiScore");
		HX_STACK_LINE(63)
		::String _g5 = ::Std_obj::string(_hiScore);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(63)
		::String _g6 = (HX_CSTRING("Hi-Score: ") + _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(63)
		::flixel::text::FlxText _g7 = ::flixel::text::FlxText_obj::__new((int)0,((Float(::flixel::FlxG_obj::height) / Float((int)2)) + (int)10),(int)0,_g6,(int)8,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(63)
		this->_txtHiScore = _g7;
		HX_STACK_LINE(64)
		this->_txtHiScore->set_alignment(HX_CSTRING("center"));
		HX_STACK_LINE(65)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_txtHiScore,true,false);
		HX_STACK_LINE(66)
		this->add(this->_txtHiScore);
		HX_STACK_LINE(68)
		::flixel::ui::FlxButton _g8 = ::flixel::ui::FlxButton_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)32),HX_CSTRING("Main Menu"),this->goMainMenu_dyn());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(68)
		this->_btnMainMenu = _g8;
		HX_STACK_LINE(69)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_btnMainMenu,true,false);
		HX_STACK_LINE(70)
		this->add(this->_btnMainMenu);
		HX_STACK_LINE(72)
		this->super::create();
	}
return null();
}


int GameOverState_obj::checkHiScore( int Score){
	HX_STACK_FRAME("GameOverState","checkHiScore",0xcd71294c,"GameOverState.checkHiScore","GameOverState.hx",82,0xd0ff2df3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Score,"Score")
	HX_STACK_LINE(83)
	int _hi = Score;		HX_STACK_VAR(_hi,"_hi");
	HX_STACK_LINE(84)
	::flixel::util::FlxSave _save = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(_save,"_save");
	HX_STACK_LINE(85)
	if ((_save->bind(HX_CSTRING("flixel-tutorial")))){
		HX_STACK_LINE(87)
		if (((_save->data->__Field(HX_CSTRING("hiscore"),true) != null()))){
			HX_STACK_LINE(89)
			if (((_save->data->__Field(HX_CSTRING("hiscore"),true) > _hi))){
				HX_STACK_LINE(91)
				_hi = _save->data->__Field(HX_CSTRING("hiscore"),true);
			}
			else{
				HX_STACK_LINE(95)
				_save->data->__FieldRef(HX_CSTRING("hiscore")) = _hi;
			}
		}
	}
	HX_STACK_LINE(99)
	_save->close(null(),null());
	HX_STACK_LINE(100)
	return _hi;
}


HX_DEFINE_DYNAMIC_FUNC1(GameOverState_obj,checkHiScore,return )

Void GameOverState_obj::goMainMenu( ){
{
		HX_STACK_FRAME("GameOverState","goMainMenu",0x626126a3,"GameOverState.goMainMenu","GameOverState.hx",108,0xd0ff2df3)
		HX_STACK_THIS(this)

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
		Void run(){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","GameOverState.hx",109,0xd0ff2df3)
			{
				HX_STACK_LINE(109)
				::flixel::FlxState State = ::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
				HX_STACK_LINE(109)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
			return null();
		}
		HX_END_LOCAL_FUNC0((void))

		HX_STACK_LINE(108)
		::flixel::FlxG_obj::camera->fade((int)-16777216,.66,false, Dynamic(new _Function_1_1()),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameOverState_obj,goMainMenu,(void))

Void GameOverState_obj::destroy( ){
{
		HX_STACK_FRAME("GameOverState","destroy",0xaf910337,"GameOverState.destroy","GameOverState.hx",114,0xd0ff2df3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(115)
		this->super::destroy();
		HX_STACK_LINE(118)
		::flixel::text::FlxText _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtTitle);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(118)
		this->_txtTitle = _g;
		HX_STACK_LINE(119)
		::flixel::text::FlxText _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtMessage);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		this->_txtMessage = _g1;
		HX_STACK_LINE(120)
		::flixel::FlxSprite _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sprScore);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(120)
		this->_sprScore = _g2;
		HX_STACK_LINE(121)
		::flixel::text::FlxText _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtScore);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(121)
		this->_txtScore = _g3;
		HX_STACK_LINE(122)
		::flixel::ui::FlxButton _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnMainMenu);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(122)
		this->_btnMainMenu = _g4;
	}
return null();
}



GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(_score,"_score");
	HX_MARK_MEMBER_NAME(_win,"_win");
	HX_MARK_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_MARK_MEMBER_NAME(_txtMessage,"_txtMessage");
	HX_MARK_MEMBER_NAME(_sprScore,"_sprScore");
	HX_MARK_MEMBER_NAME(_txtScore,"_txtScore");
	HX_MARK_MEMBER_NAME(_txtHiScore,"_txtHiScore");
	HX_MARK_MEMBER_NAME(_btnMainMenu,"_btnMainMenu");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_score,"_score");
	HX_VISIT_MEMBER_NAME(_win,"_win");
	HX_VISIT_MEMBER_NAME(_txtTitle,"_txtTitle");
	HX_VISIT_MEMBER_NAME(_txtMessage,"_txtMessage");
	HX_VISIT_MEMBER_NAME(_sprScore,"_sprScore");
	HX_VISIT_MEMBER_NAME(_txtScore,"_txtScore");
	HX_VISIT_MEMBER_NAME(_txtHiScore,"_txtHiScore");
	HX_VISIT_MEMBER_NAME(_btnMainMenu,"_btnMainMenu");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOverState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_win") ) { return _win; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { return _score; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { return _txtTitle; }
		if (HX_FIELD_EQ(inName,"_sprScore") ) { return _sprScore; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { return _txtScore; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"goMainMenu") ) { return goMainMenu_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_txtMessage") ) { return _txtMessage; }
		if (HX_FIELD_EQ(inName,"_txtHiScore") ) { return _txtHiScore; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnMainMenu") ) { return _btnMainMenu; }
		if (HX_FIELD_EQ(inName,"checkHiScore") ) { return checkHiScore_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOverState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_win") ) { _win=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_score") ) { _score=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_txtTitle") ) { _txtTitle=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprScore") ) { _sprScore=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtScore") ) { _txtScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_txtMessage") ) { _txtMessage=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_txtHiScore") ) { _txtHiScore=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_btnMainMenu") ) { _btnMainMenu=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_score"));
	outFields->push(HX_CSTRING("_win"));
	outFields->push(HX_CSTRING("_txtTitle"));
	outFields->push(HX_CSTRING("_txtMessage"));
	outFields->push(HX_CSTRING("_sprScore"));
	outFields->push(HX_CSTRING("_txtScore"));
	outFields->push(HX_CSTRING("_txtHiScore"));
	outFields->push(HX_CSTRING("_btnMainMenu"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GameOverState_obj,_score),HX_CSTRING("_score")},
	{hx::fsBool,(int)offsetof(GameOverState_obj,_win),HX_CSTRING("_win")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,_txtTitle),HX_CSTRING("_txtTitle")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,_txtMessage),HX_CSTRING("_txtMessage")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(GameOverState_obj,_sprScore),HX_CSTRING("_sprScore")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,_txtScore),HX_CSTRING("_txtScore")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(GameOverState_obj,_txtHiScore),HX_CSTRING("_txtHiScore")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(GameOverState_obj,_btnMainMenu),HX_CSTRING("_btnMainMenu")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_score"),
	HX_CSTRING("_win"),
	HX_CSTRING("_txtTitle"),
	HX_CSTRING("_txtMessage"),
	HX_CSTRING("_sprScore"),
	HX_CSTRING("_txtScore"),
	HX_CSTRING("_txtHiScore"),
	HX_CSTRING("_btnMainMenu"),
	HX_CSTRING("create"),
	HX_CSTRING("checkHiScore"),
	HX_CSTRING("goMainMenu"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#endif

Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameOverState"), hx::TCanCast< GameOverState_obj> ,sStaticFields,sMemberFields,
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

void GameOverState_obj::__boot()
{
}

