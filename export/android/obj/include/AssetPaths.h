#ifndef INCLUDED_AssetPaths
#define INCLUDED_AssetPaths

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(AssetPaths)


class HXCPP_CLASS_ATTRIBUTES  AssetPaths_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AssetPaths_obj OBJ_;
		AssetPaths_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AssetPaths_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AssetPaths_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AssetPaths"); }

		static ::String enemy_1__png;
		static ::String tiles__png;
		static ::String pointer__png;
		static ::String player__png;
		static ::String images_go_here__txt;
		static ::String button__png;
		static ::String enemy_0__png;
		static ::String coin__png;
		static ::String health__png;
		static ::String music_goes_here__txt;
		static ::String HaxeFlixel_Tutorial_Game__mp3;
		static ::String room_001__oel;
		static ::String data_goes_here__txt;
		static ::String combat__wav;
		static ::String lose__wav;
		static ::String coin__wav;
		static ::String select__wav;
		static ::String sounds_go_here__txt;
		static ::String miss__wav;
		static ::String hurt__wav;
		static ::String step__wav;
		static ::String win__wav;
		static ::String fled__wav;
};


#endif /* INCLUDED_AssetPaths */ 
