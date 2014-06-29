#ifndef INCLUDED_CombatHUD
#define INCLUDED_CombatHUD

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/group/FlxTypedGroup.h>
HX_DECLARE_CLASS0(CombatHUD)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(Outcome)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,ui,FlxBar)


class HXCPP_CLASS_ATTRIBUTES  CombatHUD_obj : public ::flixel::group::FlxTypedGroup_obj{
	public:
		typedef ::flixel::group::FlxTypedGroup_obj super;
		typedef CombatHUD_obj OBJ_;
		CombatHUD_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CombatHUD_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CombatHUD_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CombatHUD"); }

		::Enemy e;
		int playerHealth;
		::Outcome outcome;
		::flixel::FlxSprite _sprBack;
		::Player _sprPlayer;
		::Enemy _sprEnemy;
		int _enemyHealth;
		int _enemyMaxHealth;
		::flixel::ui::FlxBar _enemyHealthBar;
		::flixel::text::FlxText _txtPlayerHealth;
		Array< ::Dynamic > _damages;
		::flixel::FlxSprite _pointer;
		int _selected;
		Array< ::Dynamic > _choices;
		::flixel::text::FlxText _results;
		Float _alpha;
		bool _wait;
		virtual Void initCombat( int PlayerHealth,::Enemy E);
		Dynamic initCombat_dyn();

		virtual Void updateAlpha( Float Value);
		Dynamic updateAlpha_dyn();

		virtual Void finishFadeIn( ::flixel::tweens::FlxTween _);
		Dynamic finishFadeIn_dyn();

		virtual Void finishFadeOut( ::flixel::tweens::FlxTween _);
		Dynamic finishFadeOut_dyn();

		virtual Void updatePlayerHealth( );
		Dynamic updatePlayerHealth_dyn();

		virtual Void update( );

		virtual Void movePointer( );
		Dynamic movePointer_dyn();

		virtual Void makeChoice( );
		Dynamic makeChoice_dyn();

		virtual Void enemyAttack( );
		Dynamic enemyAttack_dyn();

		virtual Void updateDamageY( Float Value);
		Dynamic updateDamageY_dyn();

		virtual Void updateDamageAlpha( Float Value);
		Dynamic updateDamageAlpha_dyn();

		virtual Void doneDamageIn( ::flixel::tweens::FlxTween _);
		Dynamic doneDamageIn_dyn();

		virtual Void doneResultsIn( ::flixel::tweens::FlxTween _);
		Dynamic doneResultsIn_dyn();

		virtual Void doneDamageOut( ::flixel::tweens::FlxTween _);
		Dynamic doneDamageOut_dyn();

		virtual Void destroy( );

};


#endif /* INCLUDED_CombatHUD */ 
