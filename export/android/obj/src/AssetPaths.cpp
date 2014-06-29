#include <hxcpp.h>

#ifndef INCLUDED_AssetPaths
#include <AssetPaths.h>
#endif

Void AssetPaths_obj::__construct()
{
	return null();
}

//AssetPaths_obj::~AssetPaths_obj() { }

Dynamic AssetPaths_obj::__CreateEmpty() { return  new AssetPaths_obj; }
hx::ObjectPtr< AssetPaths_obj > AssetPaths_obj::__new()
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

Dynamic AssetPaths_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetPaths_obj > result = new AssetPaths_obj();
	result->__construct();
	return result;}

::String AssetPaths_obj::enemy_1__png;

::String AssetPaths_obj::tiles__png;

::String AssetPaths_obj::pointer__png;

::String AssetPaths_obj::player__png;

::String AssetPaths_obj::images_go_here__txt;

::String AssetPaths_obj::button__png;

::String AssetPaths_obj::enemy_0__png;

::String AssetPaths_obj::coin__png;

::String AssetPaths_obj::health__png;

::String AssetPaths_obj::music_goes_here__txt;

::String AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3;

::String AssetPaths_obj::room_001__oel;

::String AssetPaths_obj::data_goes_here__txt;

::String AssetPaths_obj::combat__wav;

::String AssetPaths_obj::lose__wav;

::String AssetPaths_obj::coin__wav;

::String AssetPaths_obj::select__wav;

::String AssetPaths_obj::sounds_go_here__txt;

::String AssetPaths_obj::miss__wav;

::String AssetPaths_obj::hurt__wav;

::String AssetPaths_obj::step__wav;

::String AssetPaths_obj::win__wav;

::String AssetPaths_obj::fled__wav;


AssetPaths_obj::AssetPaths_obj()
{
}

Dynamic AssetPaths_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic AssetPaths_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetPaths_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("enemy_1__png"),
	HX_CSTRING("tiles__png"),
	HX_CSTRING("pointer__png"),
	HX_CSTRING("player__png"),
	HX_CSTRING("images_go_here__txt"),
	HX_CSTRING("button__png"),
	HX_CSTRING("enemy_0__png"),
	HX_CSTRING("coin__png"),
	HX_CSTRING("health__png"),
	HX_CSTRING("music_goes_here__txt"),
	HX_CSTRING("HaxeFlixel_Tutorial_Game__mp3"),
	HX_CSTRING("room_001__oel"),
	HX_CSTRING("data_goes_here__txt"),
	HX_CSTRING("combat__wav"),
	HX_CSTRING("lose__wav"),
	HX_CSTRING("coin__wav"),
	HX_CSTRING("select__wav"),
	HX_CSTRING("sounds_go_here__txt"),
	HX_CSTRING("miss__wav"),
	HX_CSTRING("hurt__wav"),
	HX_CSTRING("step__wav"),
	HX_CSTRING("win__wav"),
	HX_CSTRING("fled__wav"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy_1__png,"enemy_1__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::pointer__png,"pointer__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::enemy_0__png,"enemy_0__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3,"HaxeFlixel_Tutorial_Game__mp3");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::room_001__oel,"room_001__oel");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::combat__wav,"combat__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::lose__wav,"lose__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::miss__wav,"miss__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::win__wav,"win__wav");
	HX_MARK_MEMBER_NAME(AssetPaths_obj::fled__wav,"fled__wav");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy_1__png,"enemy_1__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::tiles__png,"tiles__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::pointer__png,"pointer__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::player__png,"player__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::images_go_here__txt,"images_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::button__png,"button__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::enemy_0__png,"enemy_0__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__png,"coin__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::health__png,"health__png");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::music_goes_here__txt,"music_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::HaxeFlixel_Tutorial_Game__mp3,"HaxeFlixel_Tutorial_Game__mp3");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::room_001__oel,"room_001__oel");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::data_goes_here__txt,"data_goes_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::combat__wav,"combat__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::lose__wav,"lose__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::coin__wav,"coin__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::select__wav,"select__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::sounds_go_here__txt,"sounds_go_here__txt");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::miss__wav,"miss__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::hurt__wav,"hurt__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::step__wav,"step__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::win__wav,"win__wav");
	HX_VISIT_MEMBER_NAME(AssetPaths_obj::fled__wav,"fled__wav");
};

#endif

Class AssetPaths_obj::__mClass;

void AssetPaths_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AssetPaths"), hx::TCanCast< AssetPaths_obj> ,sStaticFields,sMemberFields,
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

void AssetPaths_obj::__boot()
{
	enemy_1__png= HX_CSTRING("assets/images/enemy-1.png");
	tiles__png= HX_CSTRING("assets/images/tiles.png");
	pointer__png= HX_CSTRING("assets/images/pointer.png");
	player__png= HX_CSTRING("assets/images/player.png");
	images_go_here__txt= HX_CSTRING("assets/images/images-go-here.txt");
	button__png= HX_CSTRING("assets/images/button.png");
	enemy_0__png= HX_CSTRING("assets/images/enemy-0.png");
	coin__png= HX_CSTRING("assets/images/coin.png");
	health__png= HX_CSTRING("assets/images/health.png");
	music_goes_here__txt= HX_CSTRING("assets/music/music-goes-here.txt");
	HaxeFlixel_Tutorial_Game__mp3= HX_CSTRING("assets/music/HaxeFlixel_Tutorial_Game.mp3");
	room_001__oel= HX_CSTRING("assets/data/room-001.oel");
	data_goes_here__txt= HX_CSTRING("assets/data/data-goes-here.txt");
	combat__wav= HX_CSTRING("assets/sounds/combat.wav");
	lose__wav= HX_CSTRING("assets/sounds/lose.wav");
	coin__wav= HX_CSTRING("assets/sounds/coin.wav");
	select__wav= HX_CSTRING("assets/sounds/select.wav");
	sounds_go_here__txt= HX_CSTRING("assets/sounds/sounds-go-here.txt");
	miss__wav= HX_CSTRING("assets/sounds/miss.wav");
	hurt__wav= HX_CSTRING("assets/sounds/hurt.wav");
	step__wav= HX_CSTRING("assets/sounds/step.wav");
	win__wav= HX_CSTRING("assets/sounds/win.wav");
	fled__wav= HX_CSTRING("assets/sounds/fled.wav");
}

