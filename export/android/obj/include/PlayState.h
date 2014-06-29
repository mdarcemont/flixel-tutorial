#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(Coin)
HX_DECLARE_CLASS0(CombatHUD)
HX_DECLARE_CLASS0(Enemy)
HX_DECLARE_CLASS0(HUD)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS4(flixel,addons,editors,ogmo,FlxOgmoLoader)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::Player _player;
		::flixel::addons::editors::ogmo::FlxOgmoLoader _map;
		::flixel::tile::FlxTilemap _mWalls;
		::flixel::group::FlxTypedGroup _grpCoins;
		::flixel::group::FlxTypedGroup _grpEnemies;
		::HUD _hud;
		int _money;
		int _health;
		bool _inCombat;
		::CombatHUD _combatHud;
		bool _ending;
		bool _won;
		virtual Void create( );

		virtual Void placeEntities( ::String entityName,::Xml entityData);
		Dynamic placeEntities_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual Void doneFadeOut( );
		Dynamic doneFadeOut_dyn();

		virtual Void playerTouchEnemy( ::Player P,::Enemy E);
		Dynamic playerTouchEnemy_dyn();

		virtual Void startCombat( ::Enemy E);
		Dynamic startCombat_dyn();

		virtual Void checkEnemyVision( );
		Dynamic checkEnemyVision_dyn();

		virtual Void playerTouchCoin( ::Player P,::Coin C);
		Dynamic playerTouchCoin_dyn();

};


#endif /* INCLUDED_PlayState */ 
