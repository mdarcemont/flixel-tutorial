#ifndef INCLUDED_Enemy
#define INCLUDED_Enemy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(FSM)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  Enemy_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Enemy_obj OBJ_;
		Enemy_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Enemy_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Enemy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Enemy"); }

		Float speed;
		int etype;
		::FSM _brain;
		Float _idleTmr;
		Float _moveDir;
		bool seesPlayer;
		::flixel::util::FlxPoint playerPos;
		virtual Void update( );

		virtual Void idle( );
		Dynamic idle_dyn();

		virtual Void chase( );
		Dynamic chase_dyn();

		virtual Void draw( );

		virtual Void changeEnemy( int EType);
		Dynamic changeEnemy_dyn();

};


#endif /* INCLUDED_Enemy */ 
