#ifndef INCLUDED_GameOverState
#define INCLUDED_GameOverState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(GameOverState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)


class HXCPP_CLASS_ATTRIBUTES  GameOverState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef GameOverState_obj OBJ_;
		GameOverState_obj();
		Void __construct(bool Win,int Score);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameOverState_obj > __new(bool Win,int Score);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameOverState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameOverState"); }

		int _score;
		bool _win;
		::flixel::text::FlxText _txtTitle;
		::flixel::text::FlxText _txtMessage;
		::flixel::FlxSprite _sprScore;
		::flixel::text::FlxText _txtScore;
		::flixel::text::FlxText _txtHiScore;
		::flixel::ui::FlxButton _btnMainMenu;
		virtual Void create( );

		virtual int checkHiScore( int Score);
		Dynamic checkHiScore_dyn();

		virtual Void goMainMenu( );
		Dynamic goMainMenu_dyn();

		virtual Void destroy( );

};


#endif /* INCLUDED_GameOverState */ 
