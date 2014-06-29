#include <hxcpp.h>

#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_FSM
#include <FSM.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxVelocity
#include <flixel/util/FlxVelocity.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Enemy_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType)
{
HX_STACK_FRAME("Enemy","new",0x35d4571a,"Enemy.new","Enemy.hx",12,0xbda88996)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(EType,"EType")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(19)
	this->seesPlayer = false;
	HX_STACK_LINE(14)
	this->speed = (int)80;
	HX_STACK_LINE(24)
	super::__construct(X,Y,null());
	HX_STACK_LINE(25)
	this->etype = EType;
	HX_STACK_LINE(26)
	::String _g = ::Std_obj::string(this->etype);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	::String _g1 = (HX_CSTRING("assets/images/enemy-") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	::String _g2 = (_g1 + HX_CSTRING(".png"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	this->loadGraphic(_g2,true,(int)16,(int)16,null(),null());
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Enemy.hx",27,0xbda88996)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , false,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	this->_facingFlip->set((int)1,_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Enemy.hx",28,0xbda88996)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , true,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(28)
	this->_facingFlip->set((int)16,_Function_1_2::Block());
	HX_STACK_LINE(29)
	this->animation->add(HX_CSTRING("d"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)6,false);
	HX_STACK_LINE(30)
	this->animation->add(HX_CSTRING("lr"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)3).Add((int)5),(int)6,false);
	HX_STACK_LINE(31)
	this->animation->add(HX_CSTRING("u"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)6).Add((int)8),(int)6,false);
	HX_STACK_LINE(32)
	Float _g3 = this->drag->set_y((int)10);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(32)
	this->drag->set_x(_g3);
	HX_STACK_LINE(33)
	this->set_width((int)8);
	HX_STACK_LINE(34)
	this->set_height((int)14);
	HX_STACK_LINE(35)
	this->offset->set_x((int)4);
	HX_STACK_LINE(36)
	this->offset->set_y((int)2);
	HX_STACK_LINE(37)
	::FSM _g4 = ::FSM_obj::__new(this->idle_dyn());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(37)
	this->_brain = _g4;
	HX_STACK_LINE(38)
	this->_idleTmr = (int)0;
	HX_STACK_LINE(39)
	::flixel::util::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(39)
	{
		HX_STACK_LINE(39)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(39)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(39)
		::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(39)
		point->_inPool = false;
		HX_STACK_LINE(39)
		_g5 = point;
	}
	HX_STACK_LINE(39)
	this->playerPos = _g5;
}
;
	return null();
}

//Enemy_obj::~Enemy_obj() { }

Dynamic Enemy_obj::__CreateEmpty() { return  new Enemy_obj; }
hx::ObjectPtr< Enemy_obj > Enemy_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,int EType)
{  hx::ObjectPtr< Enemy_obj > result = new Enemy_obj();
	result->__construct(__o_X,__o_Y,EType);
	return result;}

Dynamic Enemy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Enemy_obj > result = new Enemy_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Enemy_obj::update( ){
{
		HX_STACK_FRAME("Enemy","update",0xcf0e6f8f,"Enemy.update","Enemy.hx",43,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		if ((::flixel::effects::FlxFlicker_obj::isFlickering(hx::ObjectPtr<OBJ_>(this)))){
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(46)
		this->_brain->update();
		HX_STACK_LINE(47)
		this->super::update();
	}
return null();
}


Void Enemy_obj::idle( ){
{
		HX_STACK_FRAME("Enemy","idle",0xe0a9031a,"Enemy.idle","Enemy.hx",52,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		if ((this->seesPlayer)){
			HX_STACK_LINE(54)
			this->_brain->activeState = this->chase_dyn();
		}
		else{
			HX_STACK_LINE(56)
			if (((this->_idleTmr <= (int)0))){
				HX_STACK_LINE(58)
				Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(58)
				if (((_g < (int)1))){
					HX_STACK_LINE(60)
					this->_moveDir = (int)-1;
					HX_STACK_LINE(61)
					Float _g1 = this->velocity->set_y((int)0);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(61)
					this->velocity->set_x(_g1);
				}
				else{
					HX_STACK_LINE(65)
					int _g2 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)8,null());		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(65)
					int _g3 = (_g2 * (int)45);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(65)
					this->_moveDir = _g3;
					HX_STACK_LINE(66)
					{
						HX_STACK_LINE(66)
						::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
						HX_STACK_LINE(66)
						Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
						HX_STACK_LINE(66)
						Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
						HX_STACK_LINE(66)
						Float radians = (this->_moveDir * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
						HX_STACK_LINE(66)
						while((true)){
							HX_STACK_LINE(66)
							if ((!(((radians < -(::Math_obj::PI)))))){
								HX_STACK_LINE(66)
								break;
							}
							HX_STACK_LINE(66)
							hx::AddEq(radians,(::Math_obj::PI * (int)2));
						}
						HX_STACK_LINE(66)
						while((true)){
							HX_STACK_LINE(66)
							if ((!(((radians > ::Math_obj::PI))))){
								HX_STACK_LINE(66)
								break;
							}
							HX_STACK_LINE(66)
							radians = (radians - (::Math_obj::PI * (int)2));
						}
						HX_STACK_LINE(66)
						if (((radians < (int)0))){
							HX_STACK_LINE(66)
							sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
							HX_STACK_LINE(66)
							if (((sin < (int)0))){
								HX_STACK_LINE(66)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(66)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						else{
							HX_STACK_LINE(66)
							sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(66)
							if (((sin < (int)0))){
								HX_STACK_LINE(66)
								sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
							}
							else{
								HX_STACK_LINE(66)
								sin = ((.225 * (((sin * sin) - sin))) + sin);
							}
						}
						HX_STACK_LINE(66)
						hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
						HX_STACK_LINE(66)
						if (((radians > ::Math_obj::PI))){
							HX_STACK_LINE(66)
							radians = (radians - (::Math_obj::PI * (int)2));
						}
						HX_STACK_LINE(66)
						if (((radians < (int)0))){
							HX_STACK_LINE(66)
							cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
							HX_STACK_LINE(66)
							if (((cos < (int)0))){
								HX_STACK_LINE(66)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(66)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						else{
							HX_STACK_LINE(66)
							cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
							HX_STACK_LINE(66)
							if (((cos < (int)0))){
								HX_STACK_LINE(66)
								cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
							}
							else{
								HX_STACK_LINE(66)
								cos = ((.225 * (((cos * cos) - cos))) + cos);
							}
						}
						HX_STACK_LINE(66)
						Float dx = (this->speed * .5);		HX_STACK_VAR(dx,"dx");
						HX_STACK_LINE(66)
						Float dy = (int)0;		HX_STACK_VAR(dy,"dy");
						HX_STACK_LINE(66)
						if (((point == null()))){
							HX_STACK_LINE(66)
							::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(66)
							{
								HX_STACK_LINE(66)
								Float X = (int)0;		HX_STACK_VAR(X,"X");
								HX_STACK_LINE(66)
								Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
								HX_STACK_LINE(66)
								::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
								HX_STACK_LINE(66)
								point1->_inPool = false;
								HX_STACK_LINE(66)
								_g4 = point1;
							}
							HX_STACK_LINE(66)
							point = _g4;
						}
						HX_STACK_LINE(66)
						point->set_x(((cos * dx) - (sin * dy)));
						HX_STACK_LINE(66)
						point->set_y((((int)0 - (sin * dx)) - (cos * dy)));
						HX_STACK_LINE(66)
						point;
					}
				}
				HX_STACK_LINE(69)
				int _g5 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)4,null());		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(69)
				this->_idleTmr = _g5;
			}
			else{
				HX_STACK_LINE(72)
				hx::SubEq(this->_idleTmr,::flixel::FlxG_obj::elapsed);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,idle,(void))

Void Enemy_obj::chase( ){
{
		HX_STACK_FRAME("Enemy","chase",0x416ec6e8,"Enemy.chase","Enemy.hx",78,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		if ((!(this->seesPlayer))){
			HX_STACK_LINE(80)
			this->_brain->activeState = this->idle_dyn();
		}
		else{
			HX_STACK_LINE(84)
			int _g = ::Std_obj::_int(this->speed);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(84)
			::flixel::util::FlxVelocity_obj::moveTowardsPoint(hx::ObjectPtr<OBJ_>(this),this->playerPos,_g,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Enemy_obj,chase,(void))

Void Enemy_obj::draw( ){
{
		HX_STACK_FRAME("Enemy","draw",0xdd65880a,"Enemy.draw","Enemy.hx",90,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		if (((bool((this->velocity->x != (int)0)) || bool((this->velocity->y != (int)0))))){
			HX_STACK_LINE(94)
			Float _g = ::Math_obj::abs(this->velocity->x);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(94)
			Float _g1 = ::Math_obj::abs(this->velocity->y);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(94)
			if (((_g > _g1))){
				HX_STACK_LINE(96)
				if (((this->velocity->x < (int)0))){
					HX_STACK_LINE(97)
					this->set_facing((int)1);
				}
				else{
					HX_STACK_LINE(99)
					this->set_facing((int)16);
				}
			}
			else{
				HX_STACK_LINE(103)
				if (((this->velocity->y < (int)0))){
					HX_STACK_LINE(104)
					this->set_facing((int)256);
				}
				else{
					HX_STACK_LINE(106)
					this->set_facing((int)4096);
				}
			}
			HX_STACK_LINE(109)
			{
				HX_STACK_LINE(109)
				int _g2 = this->facing;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(109)
				switch( (int)(_g2)){
					case (int)1: case (int)16: {
						HX_STACK_LINE(112)
						this->animation->play(HX_CSTRING("lr"),null(),null());
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(115)
						this->animation->play(HX_CSTRING("u"),null(),null());
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(118)
						this->animation->play(HX_CSTRING("d"),null(),null());
					}
					;break;
				}
			}
		}
		HX_STACK_LINE(122)
		this->super::draw();
	}
return null();
}


Void Enemy_obj::changeEnemy( int EType){
{
		HX_STACK_FRAME("Enemy","changeEnemy",0xec1d8b72,"Enemy.changeEnemy","Enemy.hx",127,0xbda88996)
		HX_STACK_THIS(this)
		HX_STACK_ARG(EType,"EType")
		HX_STACK_LINE(127)
		if (((this->etype != EType))){
			HX_STACK_LINE(129)
			this->etype = EType;
			HX_STACK_LINE(130)
			::String _g = ::Std_obj::string(this->etype);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			::String _g1 = (HX_CSTRING("assets/images/enemy-") + _g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			::String _g2 = (_g1 + HX_CSTRING(".png"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(130)
			this->loadGraphic(_g2,true,(int)16,(int)16,null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Enemy_obj,changeEnemy,(void))


Enemy_obj::Enemy_obj()
{
}

void Enemy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Enemy);
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(etype,"etype");
	HX_MARK_MEMBER_NAME(_brain,"_brain");
	HX_MARK_MEMBER_NAME(_idleTmr,"_idleTmr");
	HX_MARK_MEMBER_NAME(_moveDir,"_moveDir");
	HX_MARK_MEMBER_NAME(seesPlayer,"seesPlayer");
	HX_MARK_MEMBER_NAME(playerPos,"playerPos");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Enemy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(etype,"etype");
	HX_VISIT_MEMBER_NAME(_brain,"_brain");
	HX_VISIT_MEMBER_NAME(_idleTmr,"_idleTmr");
	HX_VISIT_MEMBER_NAME(_moveDir,"_moveDir");
	HX_VISIT_MEMBER_NAME(seesPlayer,"seesPlayer");
	HX_VISIT_MEMBER_NAME(playerPos,"playerPos");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Enemy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"idle") ) { return idle_dyn(); }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"etype") ) { return etype; }
		if (HX_FIELD_EQ(inName,"chase") ) { return chase_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_brain") ) { return _brain; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_idleTmr") ) { return _idleTmr; }
		if (HX_FIELD_EQ(inName,"_moveDir") ) { return _moveDir; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerPos") ) { return playerPos; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seesPlayer") ) { return seesPlayer; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"changeEnemy") ) { return changeEnemy_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Enemy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"etype") ) { etype=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_brain") ) { _brain=inValue.Cast< ::FSM >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_idleTmr") ) { _idleTmr=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveDir") ) { _moveDir=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playerPos") ) { playerPos=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"seesPlayer") ) { seesPlayer=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Enemy_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("etype"));
	outFields->push(HX_CSTRING("_brain"));
	outFields->push(HX_CSTRING("_idleTmr"));
	outFields->push(HX_CSTRING("_moveDir"));
	outFields->push(HX_CSTRING("seesPlayer"));
	outFields->push(HX_CSTRING("playerPos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Enemy_obj,speed),HX_CSTRING("speed")},
	{hx::fsInt,(int)offsetof(Enemy_obj,etype),HX_CSTRING("etype")},
	{hx::fsObject /*::FSM*/ ,(int)offsetof(Enemy_obj,_brain),HX_CSTRING("_brain")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,_idleTmr),HX_CSTRING("_idleTmr")},
	{hx::fsFloat,(int)offsetof(Enemy_obj,_moveDir),HX_CSTRING("_moveDir")},
	{hx::fsBool,(int)offsetof(Enemy_obj,seesPlayer),HX_CSTRING("seesPlayer")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(Enemy_obj,playerPos),HX_CSTRING("playerPos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("etype"),
	HX_CSTRING("_brain"),
	HX_CSTRING("_idleTmr"),
	HX_CSTRING("_moveDir"),
	HX_CSTRING("seesPlayer"),
	HX_CSTRING("playerPos"),
	HX_CSTRING("update"),
	HX_CSTRING("idle"),
	HX_CSTRING("chase"),
	HX_CSTRING("draw"),
	HX_CSTRING("changeEnemy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Enemy_obj::__mClass,"__mClass");
};

#endif

Class Enemy_obj::__mClass;

void Enemy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Enemy"), hx::TCanCast< Enemy_obj> ,sStaticFields,sMemberFields,
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

void Enemy_obj::__boot()
{
}

