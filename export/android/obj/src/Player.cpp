#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
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
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void Player_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",13,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(16)
	this->speed = (int)200;
	HX_STACK_LINE(20)
	super::__construct(X,Y,null());
	HX_STACK_LINE(22)
	this->loadGraphic(HX_CSTRING("assets/images/player.png"),true,(int)16,(int)16,null(),null());
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",23,0xa27fc9dd)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , false,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(23)
	this->_facingFlip->set((int)1,_Function_1_1::Block());
	struct _Function_1_2{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Player.hx",24,0xa27fc9dd)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("x") , true,false);
				__result->Add(HX_CSTRING("y") , false,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(24)
	this->_facingFlip->set((int)16,_Function_1_2::Block());
	HX_STACK_LINE(25)
	this->animation->add(HX_CSTRING("d"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)0).Add((int)2),(int)6,false);
	HX_STACK_LINE(26)
	this->animation->add(HX_CSTRING("lr"),Array_obj< int >::__new().Add((int)3).Add((int)4).Add((int)3).Add((int)5),(int)6,false);
	HX_STACK_LINE(27)
	this->animation->add(HX_CSTRING("u"),Array_obj< int >::__new().Add((int)6).Add((int)7).Add((int)6).Add((int)8),(int)6,false);
	HX_STACK_LINE(28)
	Float _g = this->drag->set_y((int)1600);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(28)
	this->drag->set_x(_g);
	HX_STACK_LINE(29)
	this->setSize((int)8,(int)14);
	HX_STACK_LINE(30)
	this->offset->set((int)4,(int)2);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(__o_X,__o_Y);
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Player_obj::movement( ){
{
		HX_STACK_FRAME("Player","movement",0x91ad8bbc,"Player.movement","Player.hx",35,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		bool _up = false;		HX_STACK_VAR(_up,"_up");
		HX_STACK_LINE(37)
		bool _down = false;		HX_STACK_VAR(_down,"_down");
		HX_STACK_LINE(38)
		bool _left = false;		HX_STACK_VAR(_left,"_left");
		HX_STACK_LINE(39)
		bool _right = false;		HX_STACK_VAR(_right,"_right");
		HX_STACK_LINE(41)
		bool _g = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("UP")).Add(HX_CSTRING("W")),(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		_up = _g;
		HX_STACK_LINE(42)
		bool _g1 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("DOWN")).Add(HX_CSTRING("S")),(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		_down = _g1;
		HX_STACK_LINE(43)
		bool _g2 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("LEFT")).Add(HX_CSTRING("A")),(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(43)
		_left = _g2;
		HX_STACK_LINE(44)
		bool _g3 = ::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("RIGHT")).Add(HX_CSTRING("D")),(int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(44)
		_right = _g3;
		HX_STACK_LINE(46)
		if (((bool(_up) && bool(_down)))){
			HX_STACK_LINE(47)
			bool _g4 = _down = false;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(47)
			_up = _g4;
		}
		HX_STACK_LINE(48)
		if (((bool(_left) && bool(_right)))){
			HX_STACK_LINE(49)
			bool _g5 = _right = false;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(49)
			_left = _g5;
		}
		HX_STACK_LINE(51)
		if (((bool((bool((bool(_up) || bool(_down))) || bool(_left))) || bool(_right)))){
			HX_STACK_LINE(53)
			Float mA = (int)0;		HX_STACK_VAR(mA,"mA");
			HX_STACK_LINE(54)
			if ((_up)){
				HX_STACK_LINE(56)
				mA = (int)-90;
				HX_STACK_LINE(57)
				if ((_left)){
					HX_STACK_LINE(58)
					hx::SubEq(mA,(int)45);
				}
				else{
					HX_STACK_LINE(59)
					if ((_right)){
						HX_STACK_LINE(60)
						hx::AddEq(mA,(int)45);
					}
				}
				HX_STACK_LINE(62)
				this->set_facing((int)256);
			}
			else{
				HX_STACK_LINE(64)
				if ((_down)){
					HX_STACK_LINE(66)
					mA = (int)90;
					HX_STACK_LINE(67)
					if ((_left)){
						HX_STACK_LINE(68)
						hx::AddEq(mA,(int)45);
					}
					else{
						HX_STACK_LINE(69)
						if ((_right)){
							HX_STACK_LINE(70)
							hx::SubEq(mA,(int)45);
						}
					}
					HX_STACK_LINE(72)
					this->set_facing((int)4096);
				}
				else{
					HX_STACK_LINE(74)
					if ((_left)){
						HX_STACK_LINE(76)
						mA = (int)180;
						HX_STACK_LINE(77)
						this->set_facing((int)1);
					}
					else{
						HX_STACK_LINE(79)
						if ((_right)){
							HX_STACK_LINE(81)
							mA = (int)0;
							HX_STACK_LINE(82)
							this->set_facing((int)16);
						}
					}
				}
			}
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::flixel::util::FlxPoint point = this->velocity;		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(84)
				Float sin = (int)0;		HX_STACK_VAR(sin,"sin");
				HX_STACK_LINE(84)
				Float cos = (int)0;		HX_STACK_VAR(cos,"cos");
				HX_STACK_LINE(84)
				Float radians = (mA * -(((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(radians,"radians");
				HX_STACK_LINE(84)
				while((true)){
					HX_STACK_LINE(84)
					if ((!(((radians < -(::Math_obj::PI)))))){
						HX_STACK_LINE(84)
						break;
					}
					HX_STACK_LINE(84)
					hx::AddEq(radians,(::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(84)
				while((true)){
					HX_STACK_LINE(84)
					if ((!(((radians > ::Math_obj::PI))))){
						HX_STACK_LINE(84)
						break;
					}
					HX_STACK_LINE(84)
					radians = (radians - (::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(84)
				if (((radians < (int)0))){
					HX_STACK_LINE(84)
					sin = ((1.27323954 * radians) + ((.405284735 * radians) * radians));
					HX_STACK_LINE(84)
					if (((sin < (int)0))){
						HX_STACK_LINE(84)
						sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
					}
					else{
						HX_STACK_LINE(84)
						sin = ((.225 * (((sin * sin) - sin))) + sin);
					}
				}
				else{
					HX_STACK_LINE(84)
					sin = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
					HX_STACK_LINE(84)
					if (((sin < (int)0))){
						HX_STACK_LINE(84)
						sin = ((.225 * (((sin * -(sin)) - sin))) + sin);
					}
					else{
						HX_STACK_LINE(84)
						sin = ((.225 * (((sin * sin) - sin))) + sin);
					}
				}
				HX_STACK_LINE(84)
				hx::AddEq(radians,(Float(::Math_obj::PI) / Float((int)2)));
				HX_STACK_LINE(84)
				if (((radians > ::Math_obj::PI))){
					HX_STACK_LINE(84)
					radians = (radians - (::Math_obj::PI * (int)2));
				}
				HX_STACK_LINE(84)
				if (((radians < (int)0))){
					HX_STACK_LINE(84)
					cos = ((1.27323954 * radians) + ((0.405284735 * radians) * radians));
					HX_STACK_LINE(84)
					if (((cos < (int)0))){
						HX_STACK_LINE(84)
						cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
					}
					else{
						HX_STACK_LINE(84)
						cos = ((.225 * (((cos * cos) - cos))) + cos);
					}
				}
				else{
					HX_STACK_LINE(84)
					cos = ((1.27323954 * radians) - ((0.405284735 * radians) * radians));
					HX_STACK_LINE(84)
					if (((cos < (int)0))){
						HX_STACK_LINE(84)
						cos = ((.225 * (((cos * -(cos)) - cos))) + cos);
					}
					else{
						HX_STACK_LINE(84)
						cos = ((.225 * (((cos * cos) - cos))) + cos);
					}
				}
				HX_STACK_LINE(84)
				Float dx = this->speed;		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(84)
				Float dy = (int)0;		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(84)
				if (((point == null()))){
					HX_STACK_LINE(84)
					::flixel::util::FlxPoint _g6;		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(84)
					{
						HX_STACK_LINE(84)
						Float X = (int)0;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(84)
						Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
						HX_STACK_LINE(84)
						::flixel::util::FlxPoint point1 = ::flixel::util::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(84)
						point1->_inPool = false;
						HX_STACK_LINE(84)
						_g6 = point1;
					}
					HX_STACK_LINE(84)
					point = _g6;
				}
				HX_STACK_LINE(84)
				point->set_x(((cos * dx) - (sin * dy)));
				HX_STACK_LINE(84)
				point->set_y((((int)0 - (sin * dx)) - (cos * dy)));
				HX_STACK_LINE(84)
				point;
			}
		}
		HX_STACK_LINE(86)
		if (((bool((this->velocity->x != (int)0)) || bool((this->velocity->y != (int)0))))){
			HX_STACK_LINE(88)
			int _g4 = this->facing;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(88)
			switch( (int)(_g4)){
				case (int)1: case (int)16: {
					HX_STACK_LINE(91)
					this->animation->play(HX_CSTRING("lr"),null(),null());
				}
				;break;
				case (int)256: {
					HX_STACK_LINE(94)
					this->animation->play(HX_CSTRING("u"),null(),null());
				}
				;break;
				case (int)4096: {
					HX_STACK_LINE(97)
					this->animation->play(HX_CSTRING("d"),null(),null());
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))

Void Player_obj::update( ){
{
		HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",103,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(104)
		this->movement();
		HX_STACK_LINE(105)
		this->super::update();
	}
return null();
}



Player_obj::Player_obj()
{
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return movement_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("speed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_CSTRING("speed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("speed"),
	HX_CSTRING("movement"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

