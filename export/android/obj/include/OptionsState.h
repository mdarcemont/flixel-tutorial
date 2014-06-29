#ifndef INCLUDED_OptionsState
#define INCLUDED_OptionsState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(OptionsState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,FlxSave)


class HXCPP_CLASS_ATTRIBUTES  OptionsState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef OptionsState_obj OBJ_;
		OptionsState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< OptionsState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~OptionsState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("OptionsState"); }

		::flixel::text::FlxText _txtTitle;
		::flixel::ui::FlxBar _barVolume;
		::flixel::text::FlxText _txtVolume;
		::flixel::text::FlxText _txtVolumeAmt;
		::flixel::ui::FlxButton _btnVolumeDown;
		::flixel::ui::FlxButton _btnVolumeUp;
		::flixel::ui::FlxButton _btnClearData;
		::flixel::ui::FlxButton _btnBack;
		::flixel::util::FlxSave _save;
		virtual Void create( );

		virtual Void clickClearData( );
		Dynamic clickClearData_dyn();

		virtual Void clickBack( );
		Dynamic clickBack_dyn();

		virtual Void clickVolumeDown( );
		Dynamic clickVolumeDown_dyn();

		virtual Void clickVolumeUp( );
		Dynamic clickVolumeUp_dyn();

		virtual Void updateVolume( );
		Dynamic updateVolume_dyn();

		virtual Void destroy( );

};


#endif /* INCLUDED_OptionsState */ 
