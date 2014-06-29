#include <hxcpp.h>

#ifndef INCLUDED_Coin
#include <Coin.h>
#endif
#ifndef INCLUDED_CombatHUD
#include <CombatHUD.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_HUD
#include <HUD.h>
#endif
#ifndef INCLUDED_Outcome
#include <Outcome.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
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
#ifndef INCLUDED_flixel_addons_editors_ogmo_FlxOgmoLoader
#include <flixel/addons/editors/ogmo/FlxOgmoLoader.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
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
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
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

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",24,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(35)
	this->_inCombat = false;
	HX_STACK_LINE(34)
	this->_health = (int)3;
	HX_STACK_LINE(33)
	this->_money = (int)0;
	HX_STACK_LINE(24)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",44,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::flixel::addons::editors::ogmo::FlxOgmoLoader _g = ::flixel::addons::editors::ogmo::FlxOgmoLoader_obj::__new(HX_CSTRING("assets/data/room-001.oel"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->_map = _g;
		HX_STACK_LINE(46)
		::flixel::tile::FlxTilemap _g1 = this->_map->loadTilemap(HX_CSTRING("assets/images/tiles.png"),(int)16,(int)16,HX_CSTRING("walls"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(46)
		this->_mWalls = _g1;
		HX_STACK_LINE(47)
		this->_mWalls->setTileProperties((int)1,(int)0,null(),null(),null());
		HX_STACK_LINE(48)
		this->_mWalls->setTileProperties((int)2,(int)4369,null(),null(),null());
		HX_STACK_LINE(49)
		this->add(this->_mWalls);
		HX_STACK_LINE(51)
		::flixel::group::FlxTypedGroup _g2 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(51)
		this->_grpCoins = _g2;
		HX_STACK_LINE(52)
		this->add(this->_grpCoins);
		HX_STACK_LINE(54)
		::flixel::group::FlxTypedGroup _g3 = ::flixel::group::FlxTypedGroup_obj::__new(null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(54)
		this->_grpEnemies = _g3;
		HX_STACK_LINE(55)
		this->add(this->_grpEnemies);
		HX_STACK_LINE(57)
		::Player _g4 = ::Player_obj::__new(null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(57)
		this->_player = _g4;
		HX_STACK_LINE(59)
		this->_map->loadEntities(this->placeEntities_dyn(),HX_CSTRING("entities"));
		HX_STACK_LINE(61)
		this->add(this->_player);
		HX_STACK_LINE(63)
		::flixel::FlxG_obj::camera->follow(this->_player,(int)2,null(),(int)1);
		HX_STACK_LINE(65)
		::HUD _g5 = ::HUD_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(65)
		this->_hud = _g5;
		HX_STACK_LINE(66)
		this->add(this->_hud);
		HX_STACK_LINE(68)
		::CombatHUD _g6 = ::CombatHUD_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(68)
		this->_combatHud = _g6;
		HX_STACK_LINE(69)
		this->add(this->_combatHud);
		HX_STACK_LINE(72)
		this->super::create();
	}
return null();
}


Void PlayState_obj::placeEntities( ::String entityName,::Xml entityData){
{
		HX_STACK_FRAME("PlayState","placeEntities",0xcb21ad57,"PlayState.placeEntities","PlayState.hx",77,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(entityName,"entityName")
		HX_STACK_ARG(entityData,"entityData")
		HX_STACK_LINE(78)
		::String _g = entityData->get(HX_CSTRING("x"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		int x = ::Std_obj::parseInt(_g);		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(79)
		::String _g1 = entityData->get(HX_CSTRING("y"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		int y = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(80)
		if (((entityName == HX_CSTRING("player")))){
			HX_STACK_LINE(82)
			this->_player->set_x(x);
			HX_STACK_LINE(83)
			this->_player->set_y(y);
		}
		else{
			HX_STACK_LINE(85)
			if (((entityName == HX_CSTRING("coin")))){
				HX_STACK_LINE(87)
				::Coin _g2 = ::Coin_obj::__new((x + (int)4),(y + (int)4));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(87)
				this->_grpCoins->add(_g2);
			}
			else{
				HX_STACK_LINE(90)
				if (((entityName == HX_CSTRING("enemy")))){
					HX_STACK_LINE(92)
					::String _g3 = entityData->get(HX_CSTRING("etype"));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(92)
					Dynamic _g4 = ::Std_obj::parseInt(_g3);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(92)
					::Enemy _g5 = ::Enemy_obj::__new((x + (int)4),y,_g4);		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(92)
					this->_grpEnemies->add(_g5);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,placeEntities,(void))

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",102,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(103)
		this->super::destroy();
		HX_STACK_LINE(104)
		::Player _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_player);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(104)
		this->_player = _g;
		HX_STACK_LINE(105)
		::flixel::tile::FlxTilemap _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_mWalls);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		this->_mWalls = _g1;
		HX_STACK_LINE(106)
		::flixel::group::FlxTypedGroup _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_grpCoins);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(106)
		this->_grpCoins = _g2;
		HX_STACK_LINE(107)
		::flixel::group::FlxTypedGroup _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_grpEnemies);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(107)
		this->_grpEnemies = _g3;
		HX_STACK_LINE(108)
		::HUD _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_hud);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(108)
		this->_hud = _g4;
		HX_STACK_LINE(109)
		::CombatHUD _g5 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_combatHud);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(109)
		this->_combatHud = _g5;
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",116,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		this->super::update();
		HX_STACK_LINE(119)
		if ((this->_ending)){
			HX_STACK_LINE(121)
			return null();
		}
		HX_STACK_LINE(124)
		if ((!(this->_inCombat))){
			HX_STACK_LINE(126)
			::flixel::FlxG_obj::overlap(this->_player,this->_mWalls,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(127)
			::flixel::FlxG_obj::overlap(this->_player,this->_grpCoins,this->playerTouchCoin_dyn(),null());
			HX_STACK_LINE(128)
			::flixel::FlxG_obj::overlap(this->_grpEnemies,this->_mWalls,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(129)
			this->checkEnemyVision();
			HX_STACK_LINE(130)
			::flixel::FlxG_obj::overlap(this->_player,this->_grpEnemies,this->playerTouchEnemy_dyn(),null());
		}
		else{
			HX_STACK_LINE(134)
			if ((!(this->_combatHud->visible))){
				HX_STACK_LINE(136)
				this->_health = this->_combatHud->playerHealth;
				HX_STACK_LINE(137)
				this->_hud->updateHUD(this->_health,this->_money);
				HX_STACK_LINE(138)
				if (((this->_combatHud->outcome == ::Outcome_obj::DEFEAT))){
					HX_STACK_LINE(140)
					this->_ending = true;
					HX_STACK_LINE(141)
					::flixel::FlxG_obj::camera->fade((int)-16777216,.66,false,this->doneFadeOut_dyn(),null());
				}
				else{
					HX_STACK_LINE(145)
					if (((this->_combatHud->outcome == ::Outcome_obj::VICTORY))){
						HX_STACK_LINE(147)
						this->_combatHud->e->kill();
						HX_STACK_LINE(148)
						if (((this->_combatHud->e->etype == (int)1))){
							HX_STACK_LINE(150)
							this->_won = true;
							HX_STACK_LINE(151)
							this->_ending = true;
							HX_STACK_LINE(152)
							::flixel::FlxG_obj::camera->fade((int)-16777216,.66,false,this->doneFadeOut_dyn(),null());
						}
					}
					else{
						HX_STACK_LINE(157)
						::flixel::FlxObject Object = this->_combatHud->e;		HX_STACK_VAR(Object,"Object");
						HX_STACK_LINE(157)
						Float Duration = (int)1;		HX_STACK_VAR(Duration,"Duration");
						HX_STACK_LINE(157)
						Float Interval = 0.04;		HX_STACK_VAR(Interval,"Interval");
						HX_STACK_LINE(157)
						bool EndVisibility = true;		HX_STACK_VAR(EndVisibility,"EndVisibility");
						HX_STACK_LINE(157)
						bool ForceRestart = true;		HX_STACK_VAR(ForceRestart,"ForceRestart");
						HX_STACK_LINE(157)
						::flixel::effects::FlxFlicker_obj::flicker(Object,Duration,Interval,EndVisibility,ForceRestart,null(),null());
						HX_STACK_LINE(157)
						Object;
					}
					HX_STACK_LINE(159)
					this->_inCombat = false;
					HX_STACK_LINE(160)
					this->_player->set_active(true);
					HX_STACK_LINE(161)
					this->_grpEnemies->set_active(true);
				}
			}
		}
	}
return null();
}


Void PlayState_obj::doneFadeOut( ){
{
		HX_STACK_FRAME("PlayState","doneFadeOut",0xf3a9b17f,"PlayState.doneFadeOut","PlayState.hx",169,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(169)
		::flixel::FlxState State = ::GameOverState_obj::__new(this->_won,this->_money);		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(169)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,doneFadeOut,(void))

Void PlayState_obj::playerTouchEnemy( ::Player P,::Enemy E){
{
		HX_STACK_FRAME("PlayState","playerTouchEnemy",0xc787e8fb,"PlayState.playerTouchEnemy","PlayState.hx",174,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(174)
		if (((  (((bool((bool((bool(P->alive) && bool(P->exists))) && bool(E->alive))) && bool(E->exists)))) ? bool(!(::flixel::effects::FlxFlicker_obj::isFlickering(E))) : bool(false) ))){
			HX_STACK_LINE(176)
			this->startCombat(E);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchEnemy,(void))

Void PlayState_obj::startCombat( ::Enemy E){
{
		HX_STACK_FRAME("PlayState","startCombat",0x485abba5,"PlayState.startCombat","PlayState.hx",181,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(182)
		this->_inCombat = true;
		HX_STACK_LINE(183)
		this->_player->set_active(false);
		HX_STACK_LINE(184)
		this->_grpEnemies->set_active(false);
		HX_STACK_LINE(185)
		this->_combatHud->initCombat(this->_health,E);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,startCombat,(void))

Void PlayState_obj::checkEnemyVision( ){
{
		HX_STACK_FRAME("PlayState","checkEnemyVision",0xe46dc499,"PlayState.checkEnemyVision","PlayState.hx",190,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(190)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(190)
		Array< ::Dynamic > _g1 = this->_grpEnemies->members;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(190)
		while((true)){
			HX_STACK_LINE(190)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(190)
				break;
			}
			HX_STACK_LINE(190)
			::Enemy e = _g1->__get(_g).StaticCast< ::Enemy >();		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(190)
			++(_g);
			HX_STACK_LINE(192)
			::flixel::util::FlxPoint _g2 = e->getMidpoint(null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(192)
			::flixel::util::FlxPoint _g11 = this->_player->getMidpoint(null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(192)
			if ((this->_mWalls->ray(_g2,_g11,null(),null()))){
				HX_STACK_LINE(194)
				e->seesPlayer = true;
				HX_STACK_LINE(195)
				{
					HX_STACK_LINE(195)
					::flixel::util::FlxPoint _this = e->playerPos;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(195)
					::flixel::util::FlxPoint point = this->_player->getMidpoint(null());		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(195)
					_this->set_x(point->x);
					HX_STACK_LINE(195)
					_this->set_y(point->y);
					HX_STACK_LINE(195)
					_this;
				}
			}
			else{
				HX_STACK_LINE(198)
				e->seesPlayer = false;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,checkEnemyVision,(void))

Void PlayState_obj::playerTouchCoin( ::Player P,::Coin C){
{
		HX_STACK_FRAME("PlayState","playerTouchCoin",0x7f00763e,"PlayState.playerTouchCoin","PlayState.hx",204,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(P,"P")
		HX_STACK_ARG(C,"C")
		HX_STACK_LINE(204)
		if (((bool((bool((bool(P->alive) && bool(P->exists))) && bool(C->alive))) && bool(C->exists)))){
			HX_STACK_LINE(206)
			(this->_money)++;
			HX_STACK_LINE(207)
			this->_hud->updateHUD(this->_health,this->_money);
			HX_STACK_LINE(208)
			C->kill();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,playerTouchCoin,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_player,"_player");
	HX_MARK_MEMBER_NAME(_map,"_map");
	HX_MARK_MEMBER_NAME(_mWalls,"_mWalls");
	HX_MARK_MEMBER_NAME(_grpCoins,"_grpCoins");
	HX_MARK_MEMBER_NAME(_grpEnemies,"_grpEnemies");
	HX_MARK_MEMBER_NAME(_hud,"_hud");
	HX_MARK_MEMBER_NAME(_money,"_money");
	HX_MARK_MEMBER_NAME(_health,"_health");
	HX_MARK_MEMBER_NAME(_inCombat,"_inCombat");
	HX_MARK_MEMBER_NAME(_combatHud,"_combatHud");
	HX_MARK_MEMBER_NAME(_ending,"_ending");
	HX_MARK_MEMBER_NAME(_won,"_won");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_player,"_player");
	HX_VISIT_MEMBER_NAME(_map,"_map");
	HX_VISIT_MEMBER_NAME(_mWalls,"_mWalls");
	HX_VISIT_MEMBER_NAME(_grpCoins,"_grpCoins");
	HX_VISIT_MEMBER_NAME(_grpEnemies,"_grpEnemies");
	HX_VISIT_MEMBER_NAME(_hud,"_hud");
	HX_VISIT_MEMBER_NAME(_money,"_money");
	HX_VISIT_MEMBER_NAME(_health,"_health");
	HX_VISIT_MEMBER_NAME(_inCombat,"_inCombat");
	HX_VISIT_MEMBER_NAME(_combatHud,"_combatHud");
	HX_VISIT_MEMBER_NAME(_ending,"_ending");
	HX_VISIT_MEMBER_NAME(_won,"_won");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { return _map; }
		if (HX_FIELD_EQ(inName,"_hud") ) { return _hud; }
		if (HX_FIELD_EQ(inName,"_won") ) { return _won; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_money") ) { return _money; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { return _player; }
		if (HX_FIELD_EQ(inName,"_mWalls") ) { return _mWalls; }
		if (HX_FIELD_EQ(inName,"_health") ) { return _health; }
		if (HX_FIELD_EQ(inName,"_ending") ) { return _ending; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_grpCoins") ) { return _grpCoins; }
		if (HX_FIELD_EQ(inName,"_inCombat") ) { return _inCombat; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_combatHud") ) { return _combatHud; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_grpEnemies") ) { return _grpEnemies; }
		if (HX_FIELD_EQ(inName,"doneFadeOut") ) { return doneFadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"startCombat") ) { return startCombat_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"placeEntities") ) { return placeEntities_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerTouchCoin") ) { return playerTouchCoin_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"playerTouchEnemy") ) { return playerTouchEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"checkEnemyVision") ) { return checkEnemyVision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_map") ) { _map=inValue.Cast< ::flixel::addons::editors::ogmo::FlxOgmoLoader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_hud") ) { _hud=inValue.Cast< ::HUD >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_won") ) { _won=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_money") ) { _money=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_player") ) { _player=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mWalls") ) { _mWalls=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_health") ) { _health=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ending") ) { _ending=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_grpCoins") ) { _grpCoins=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inCombat") ) { _inCombat=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_combatHud") ) { _combatHud=inValue.Cast< ::CombatHUD >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_grpEnemies") ) { _grpEnemies=inValue.Cast< ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_player"));
	outFields->push(HX_CSTRING("_map"));
	outFields->push(HX_CSTRING("_mWalls"));
	outFields->push(HX_CSTRING("_grpCoins"));
	outFields->push(HX_CSTRING("_grpEnemies"));
	outFields->push(HX_CSTRING("_hud"));
	outFields->push(HX_CSTRING("_money"));
	outFields->push(HX_CSTRING("_health"));
	outFields->push(HX_CSTRING("_inCombat"));
	outFields->push(HX_CSTRING("_combatHud"));
	outFields->push(HX_CSTRING("_ending"));
	outFields->push(HX_CSTRING("_won"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Player*/ ,(int)offsetof(PlayState_obj,_player),HX_CSTRING("_player")},
	{hx::fsObject /*::flixel::addons::editors::ogmo::FlxOgmoLoader*/ ,(int)offsetof(PlayState_obj,_map),HX_CSTRING("_map")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(PlayState_obj,_mWalls),HX_CSTRING("_mWalls")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpCoins),HX_CSTRING("_grpCoins")},
	{hx::fsObject /*::flixel::group::FlxTypedGroup*/ ,(int)offsetof(PlayState_obj,_grpEnemies),HX_CSTRING("_grpEnemies")},
	{hx::fsObject /*::HUD*/ ,(int)offsetof(PlayState_obj,_hud),HX_CSTRING("_hud")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_money),HX_CSTRING("_money")},
	{hx::fsInt,(int)offsetof(PlayState_obj,_health),HX_CSTRING("_health")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_inCombat),HX_CSTRING("_inCombat")},
	{hx::fsObject /*::CombatHUD*/ ,(int)offsetof(PlayState_obj,_combatHud),HX_CSTRING("_combatHud")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_ending),HX_CSTRING("_ending")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_won),HX_CSTRING("_won")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_player"),
	HX_CSTRING("_map"),
	HX_CSTRING("_mWalls"),
	HX_CSTRING("_grpCoins"),
	HX_CSTRING("_grpEnemies"),
	HX_CSTRING("_hud"),
	HX_CSTRING("_money"),
	HX_CSTRING("_health"),
	HX_CSTRING("_inCombat"),
	HX_CSTRING("_combatHud"),
	HX_CSTRING("_ending"),
	HX_CSTRING("_won"),
	HX_CSTRING("create"),
	HX_CSTRING("placeEntities"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("doneFadeOut"),
	HX_CSTRING("playerTouchEnemy"),
	HX_CSTRING("startCombat"),
	HX_CSTRING("checkEnemyVision"),
	HX_CSTRING("playerTouchCoin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
}

