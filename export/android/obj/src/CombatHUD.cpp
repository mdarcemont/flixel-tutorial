#include <hxcpp.h>

#ifndef INCLUDED_CombatHUD
#include <CombatHUD.h>
#endif
#ifndef INCLUDED_Enemy
#include <Enemy.h>
#endif
#ifndef INCLUDED_Outcome
#include <Outcome.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxBar
#include <flixel/ui/FlxBar.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif

Void CombatHUD_obj::__construct()
{
HX_STACK_FRAME("CombatHUD","new",0x0b459335,"CombatHUD.new","CombatHUD.hx",16,0x215789db)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(45)
	this->_wait = true;
	HX_STACK_LINE(44)
	this->_alpha = (int)0;
	HX_STACK_LINE(39)
	this->_selected = (int)0;
	HX_STACK_LINE(49)
	super::__construct(null());
	HX_STACK_LINE(52)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new(null(),null(),null())->makeGraphic((int)120,(int)120,(int)-1,null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(52)
	this->_sprBack = _g;
	HX_STACK_LINE(53)
	::flixel::util::FlxSpriteUtil_obj::drawRect(this->_sprBack,(int)1,(int)1,(int)118,(int)44,(int)-16777216,null(),null(),null());
	HX_STACK_LINE(54)
	::flixel::util::FlxSpriteUtil_obj::drawRect(this->_sprBack,(int)1,(int)46,(int)118,(int)73,(int)-16777216,null(),null(),null());
	HX_STACK_LINE(55)
	::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_sprBack,true,true);
	HX_STACK_LINE(56)
	this->add(this->_sprBack);
	HX_STACK_LINE(59)
	::Player _g1 = ::Player_obj::__new((this->_sprBack->x + (int)36),(this->_sprBack->y + (int)16));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(59)
	this->_sprPlayer = _g1;
	HX_STACK_LINE(60)
	this->_sprPlayer->animation->set_frameIndex((int)3);
	HX_STACK_LINE(61)
	this->_sprPlayer->set_active(false);
	HX_STACK_LINE(62)
	this->_sprPlayer->set_facing((int)16);
	HX_STACK_LINE(63)
	this->add(this->_sprPlayer);
	HX_STACK_LINE(66)
	::Enemy _g2 = ::Enemy_obj::__new((this->_sprBack->x + (int)76),(this->_sprBack->y + (int)16),(int)0);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(66)
	this->_sprEnemy = _g2;
	HX_STACK_LINE(67)
	this->_sprEnemy->animation->set_frameIndex((int)3);
	HX_STACK_LINE(68)
	this->_sprEnemy->set_active(false);
	HX_STACK_LINE(69)
	this->_sprEnemy->set_facing((int)1);
	HX_STACK_LINE(70)
	this->add(this->_sprEnemy);
	HX_STACK_LINE(73)
	Float _g3 = this->_sprPlayer->get_height();		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(73)
	Float _g4 = (this->_sprPlayer->y + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(73)
	Float _g5 = (_g4 + (int)2);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(73)
	::flixel::text::FlxText _g6 = ::flixel::text::FlxText_obj::__new((int)0,_g5,(int)0,HX_CSTRING("3 / 3"),(int)8,null());		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(73)
	this->_txtPlayerHealth = _g6;
	HX_STACK_LINE(74)
	this->_txtPlayerHealth->set_alignment(HX_CSTRING("center"));
	HX_STACK_LINE(75)
	Float _g7 = this->_txtPlayerHealth->get_width();		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(75)
	Float _g8 = (Float(_g7) / Float((int)2));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(75)
	Float _g9 = ((this->_sprPlayer->x + (int)4) - _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(75)
	this->_txtPlayerHealth->set_x(_g9);
	HX_STACK_LINE(76)
	this->add(this->_txtPlayerHealth);
	HX_STACK_LINE(79)
	::flixel::ui::FlxBar _g10 = ::flixel::ui::FlxBar_obj::__new((this->_sprEnemy->x - (int)6),this->_txtPlayerHealth->y,(int)1,(int)20,(int)10,null(),null(),null(),null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(79)
	this->_enemyHealthBar = _g10;
	HX_STACK_LINE(80)
	this->_enemyHealthBar->createFilledBar((int)-2354116,(int)-256,true,(int)-256);
	HX_STACK_LINE(81)
	this->add(this->_enemyHealthBar);
	HX_STACK_LINE(84)
	Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(84)
	this->_choices = _g11;
	HX_STACK_LINE(85)
	::flixel::text::FlxText _g12 = ::flixel::text::FlxText_obj::__new((this->_sprBack->x + (int)30),(this->_sprBack->y + (int)48),(int)85,HX_CSTRING("FIGHT"),(int)22,null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(85)
	this->_choices->push(_g12);
	HX_STACK_LINE(86)
	Float _g13 = this->_choices->__get((int)0).StaticCast< ::flixel::text::FlxText >()->get_height();		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(86)
	Float _g14 = (this->_choices->__get((int)0).StaticCast< ::flixel::text::FlxText >()->y + _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(86)
	Float _g15 = (_g14 + (int)8);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(86)
	::flixel::text::FlxText _g16 = ::flixel::text::FlxText_obj::__new((this->_sprBack->x + (int)30),_g15,(int)85,HX_CSTRING("FLEE"),(int)22,null());		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(86)
	this->_choices->push(_g16);
	HX_STACK_LINE(87)
	this->add(this->_choices->__get((int)0).StaticCast< ::flixel::text::FlxText >());
	HX_STACK_LINE(88)
	this->add(this->_choices->__get((int)1).StaticCast< ::flixel::text::FlxText >());
	HX_STACK_LINE(90)
	Float _g17 = this->_choices->__get((int)0).StaticCast< ::flixel::text::FlxText >()->get_height();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(90)
	Float _g18 = (Float(_g17) / Float((int)2));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(90)
	Float _g19 = (this->_choices->__get((int)0).StaticCast< ::flixel::text::FlxText >()->y + _g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(90)
	Float _g20 = (_g19 - (int)8);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(90)
	::flixel::FlxSprite _g21 = ::flixel::FlxSprite_obj::__new((this->_sprBack->x + (int)10),_g20,HX_CSTRING("assets/images/pointer.png"));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(90)
	this->_pointer = _g21;
	HX_STACK_LINE(91)
	this->_pointer->set_visible(false);
	HX_STACK_LINE(92)
	this->add(this->_pointer);
	HX_STACK_LINE(95)
	Array< ::Dynamic > _g22 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(95)
	this->_damages = _g22;
	HX_STACK_LINE(96)
	::flixel::text::FlxText _g23 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)40,null(),null(),null());		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(96)
	this->_damages->push(_g23);
	HX_STACK_LINE(97)
	::flixel::text::FlxText _g24 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)40,null(),null(),null());		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(97)
	this->_damages->push(_g24);
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g25 = (int)0;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(98)
		Array< ::Dynamic > _g110 = this->_damages;		HX_STACK_VAR(_g110,"_g110");
		HX_STACK_LINE(98)
		while((true)){
			HX_STACK_LINE(98)
			if ((!(((_g25 < _g110->length))))){
				HX_STACK_LINE(98)
				break;
			}
			HX_STACK_LINE(98)
			::flixel::text::FlxText d = _g110->__get(_g25).StaticCast< ::flixel::text::FlxText >();		HX_STACK_VAR(d,"d");
			HX_STACK_LINE(98)
			++(_g25);
			HX_STACK_LINE(100)
			d->set_color((int)-1);
			HX_STACK_LINE(101)
			{
				HX_STACK_LINE(101)
				Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
				HX_STACK_LINE(101)
				Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
				HX_STACK_LINE(101)
				d->set_borderStyle((int)1);
				HX_STACK_LINE(101)
				d->set_borderColor((int)-65536);
				HX_STACK_LINE(101)
				d->set_borderSize(Size);
				HX_STACK_LINE(101)
				d->set_borderQuality(Quality);
			}
			HX_STACK_LINE(102)
			d->set_alignment(HX_CSTRING("center"));
			HX_STACK_LINE(103)
			d->set_visible(false);
			HX_STACK_LINE(104)
			this->add(d);
		}
	}
	HX_STACK_LINE(108)
	::flixel::text::FlxText _g25 = ::flixel::text::FlxText_obj::__new((this->_sprBack->x + (int)2),(this->_sprBack->y + (int)9),(int)116,HX_CSTRING(""),(int)18,null());		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(108)
	this->_results = _g25;
	HX_STACK_LINE(109)
	this->_results->set_alignment(HX_CSTRING("center"));
	HX_STACK_LINE(110)
	this->_results->set_color((int)-256);
	HX_STACK_LINE(111)
	{
		HX_STACK_LINE(111)
		::flixel::text::FlxText _this = this->_results;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(111)
		Float Size = (int)1;		HX_STACK_VAR(Size,"Size");
		HX_STACK_LINE(111)
		Float Quality = (int)1;		HX_STACK_VAR(Quality,"Quality");
		HX_STACK_LINE(111)
		_this->set_borderStyle((int)1);
		HX_STACK_LINE(111)
		_this->set_borderColor((int)-8355712);
		HX_STACK_LINE(111)
		_this->set_borderSize(Size);
		HX_STACK_LINE(111)
		_this->set_borderQuality(Quality);
	}
	HX_STACK_LINE(112)
	this->_results->set_visible(false);
	HX_STACK_LINE(113)
	this->add(this->_results);

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	Void run(::flixel::FlxSprite spr){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","CombatHUD.hx",116,0x215789db)
		HX_STACK_ARG(spr,"spr")
		{
			HX_STACK_LINE(117)
			spr->scrollFactor->set(null(),null());
			HX_STACK_LINE(118)
			spr->set_alpha((int)0);
		}
		return null();
	}
	HX_END_LOCAL_FUNC1((void))

	HX_STACK_LINE(116)
	this->forEach( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(122)
	this->set_active(false);
	HX_STACK_LINE(123)
	this->set_visible(false);
}
;
	return null();
}

//CombatHUD_obj::~CombatHUD_obj() { }

Dynamic CombatHUD_obj::__CreateEmpty() { return  new CombatHUD_obj; }
hx::ObjectPtr< CombatHUD_obj > CombatHUD_obj::__new()
{  hx::ObjectPtr< CombatHUD_obj > result = new CombatHUD_obj();
	result->__construct();
	return result;}

Dynamic CombatHUD_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CombatHUD_obj > result = new CombatHUD_obj();
	result->__construct();
	return result;}

Void CombatHUD_obj::initCombat( int PlayerHealth,::Enemy E){
{
		HX_STACK_FRAME("CombatHUD","initCombat",0x420edd2f,"CombatHUD.initCombat","CombatHUD.hx",132,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(PlayerHealth,"PlayerHealth")
		HX_STACK_ARG(E,"E")
		HX_STACK_LINE(133)
		this->playerHealth = PlayerHealth;
		HX_STACK_LINE(134)
		this->e = E;
		HX_STACK_LINE(136)
		this->updatePlayerHealth();
		HX_STACK_LINE(139)
		int _g = this->_enemyHealth = (((this->e->etype + (int)1)) * (int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(139)
		this->_enemyMaxHealth = _g;
		HX_STACK_LINE(140)
		this->_enemyHealthBar->set_currentValue((int)100);
		HX_STACK_LINE(141)
		this->_sprEnemy->changeEnemy(this->e->etype);
		HX_STACK_LINE(144)
		this->_wait = true;
		HX_STACK_LINE(145)
		this->_results->set_text(HX_CSTRING(""));
		HX_STACK_LINE(146)
		this->_pointer->set_visible(false);
		HX_STACK_LINE(147)
		this->_results->set_visible(false);
		HX_STACK_LINE(148)
		this->outcome = ::Outcome_obj::NONE;
		HX_STACK_LINE(149)
		this->_selected = (int)0;
		HX_STACK_LINE(151)
		this->set_visible(true);
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",153,0x215789db)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circOut_dyn(),false);
					__result->Add(HX_CSTRING("complete") , __this->finishFadeIn_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(153)
		::flixel::tweens::FlxTween_obj::num((int)0,(int)1,.66,_Function_1_1::Block(this),this->updateAlpha_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CombatHUD_obj,initCombat,(void))

Void CombatHUD_obj::updateAlpha( Float Value){
{
		HX_STACK_FRAME("CombatHUD","updateAlpha",0x5f8f306a,"CombatHUD.updateAlpha","CombatHUD.hx",161,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(160)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(162)
		this->_alpha = Value;

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::Dynamic >,_g)
		Void run(::flixel::FlxSprite spr){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","CombatHUD.hx",164,0x215789db)
			HX_STACK_ARG(spr,"spr")
			{
				HX_STACK_LINE(164)
				spr->set_alpha(_g->__get((int)0).StaticCast< ::CombatHUD >()->_alpha);
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(163)
		this->forEach( Dynamic(new _Function_1_1(_g)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,updateAlpha,(void))

Void CombatHUD_obj::finishFadeIn( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("CombatHUD","finishFadeIn",0xdde03bbf,"CombatHUD.finishFadeIn","CombatHUD.hx",172,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(173)
		this->set_active(true);
		HX_STACK_LINE(174)
		this->_wait = false;
		HX_STACK_LINE(175)
		this->_pointer->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,finishFadeIn,(void))

Void CombatHUD_obj::finishFadeOut( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("CombatHUD","finishFadeOut",0x46589f74,"CombatHUD.finishFadeOut","CombatHUD.hx",182,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(183)
		this->set_active(false);
		HX_STACK_LINE(184)
		this->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,finishFadeOut,(void))

Void CombatHUD_obj::updatePlayerHealth( ){
{
		HX_STACK_FRAME("CombatHUD","updatePlayerHealth",0x976fb751,"CombatHUD.updatePlayerHealth","CombatHUD.hx",191,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(192)
		::String _g = ::Std_obj::string(this->playerHealth);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(192)
		::String _g1 = (_g + HX_CSTRING(" / 3"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(192)
		this->_txtPlayerHealth->set_text(_g1);
		HX_STACK_LINE(193)
		Float _g2 = this->_txtPlayerHealth->get_width();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(193)
		Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(193)
		Float _g4 = ((this->_sprPlayer->x + (int)4) - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(193)
		this->_txtPlayerHealth->set_x(_g4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,updatePlayerHealth,(void))

Void CombatHUD_obj::update( ){
{
		HX_STACK_FRAME("CombatHUD","update",0xf0e37654,"CombatHUD.update","CombatHUD.hx",197,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(198)
		if ((!(this->_wait))){
			HX_STACK_LINE(203)
			bool _up = false;		HX_STACK_VAR(_up,"_up");
			HX_STACK_LINE(204)
			bool _down = false;		HX_STACK_VAR(_down,"_down");
			HX_STACK_LINE(205)
			bool _fire = false;		HX_STACK_VAR(_fire,"_fire");
			HX_STACK_LINE(208)
			if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("SPACE")).Add(HX_CSTRING("X")),(int)-1))){
				HX_STACK_LINE(210)
				_fire = true;
			}
			else{
				HX_STACK_LINE(212)
				if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("W")).Add(HX_CSTRING("UP")),(int)-1))){
					HX_STACK_LINE(214)
					_up = true;
				}
				else{
					HX_STACK_LINE(216)
					if ((::flixel::FlxG_obj::keys->checkKeyStatus(Array_obj< ::String >::__new().Add(HX_CSTRING("S")).Add(HX_CSTRING("DOWN")),(int)-1))){
						HX_STACK_LINE(218)
						_down = true;
					}
				}
			}
			HX_STACK_LINE(222)
			if ((_fire)){
				HX_STACK_LINE(224)
				this->makeChoice();
			}
			else{
				HX_STACK_LINE(226)
				if ((_up)){
					HX_STACK_LINE(229)
					if (((this->_selected == (int)0))){
						HX_STACK_LINE(230)
						this->_selected = (int)1;
					}
					else{
						HX_STACK_LINE(232)
						(this->_selected)--;
					}
					HX_STACK_LINE(233)
					this->movePointer();
				}
				else{
					HX_STACK_LINE(235)
					if ((_down)){
						HX_STACK_LINE(238)
						if (((this->_selected == (int)1))){
							HX_STACK_LINE(239)
							this->_selected = (int)0;
						}
						else{
							HX_STACK_LINE(241)
							(this->_selected)++;
						}
						HX_STACK_LINE(242)
						this->movePointer();
					}
				}
			}
		}
		HX_STACK_LINE(245)
		this->super::update();
	}
return null();
}


Void CombatHUD_obj::movePointer( ){
{
		HX_STACK_FRAME("CombatHUD","movePointer",0x81fe1981,"CombatHUD.movePointer","CombatHUD.hx",252,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(253)
		Float _g = this->_choices->__get(this->_selected).StaticCast< ::flixel::text::FlxText >()->get_height();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		Float _g2 = (this->_choices->__get(this->_selected).StaticCast< ::flixel::text::FlxText >()->y + _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(253)
		Float _g3 = (_g2 - (int)8);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(253)
		this->_pointer->set_y(_g3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,movePointer,(void))

Void CombatHUD_obj::makeChoice( ){
{
		HX_STACK_FRAME("CombatHUD","makeChoice",0x892305ba,"CombatHUD.makeChoice","CombatHUD.hx",260,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(261)
		this->_pointer->set_visible(false);
		HX_STACK_LINE(262)
		{
			HX_STACK_LINE(262)
			int _g = this->_selected;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(262)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(269)
					Float _g1 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(269)
					if (((_g1 < (int)85))){
						HX_STACK_LINE(272)
						this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_text(HX_CSTRING("1"));
						HX_STACK_LINE(273)
						(this->_enemyHealth)--;
						HX_STACK_LINE(274)
						this->_enemyHealthBar->set_currentValue(((Float(this->_enemyHealth) / Float(this->_enemyMaxHealth)) * (int)100));
					}
					else{
						HX_STACK_LINE(279)
						this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_text(HX_CSTRING("MISS!"));
					}
					HX_STACK_LINE(283)
					Float _g11 = this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->get_width();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(283)
					Float _g2 = (Float(_g11) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(283)
					Float _g3 = ((this->_sprEnemy->x + (int)2) - _g2);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(283)
					this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_x(_g3);
					HX_STACK_LINE(284)
					Float _g4 = this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->get_height();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(284)
					Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(284)
					Float _g6 = ((this->_sprEnemy->y + (int)4) - _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(284)
					this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_y(_g6);
					HX_STACK_LINE(285)
					this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_alpha((int)0);
					HX_STACK_LINE(286)
					this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_visible(true);
					HX_STACK_LINE(289)
					if (((this->_enemyHealth > (int)0))){
						HX_STACK_LINE(291)
						this->enemyAttack();
					}
					struct _Function_3_1{
						inline static Dynamic Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",295,0x215789db)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circOut_dyn(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(295)
					::flixel::tweens::FlxTween_obj::num(this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->y,(this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->y - (int)12),(int)1,_Function_3_1::Block(),this->updateDamageY_dyn());
					struct _Function_3_2{
						inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",296,0x215789db)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circInOut_dyn(),false);
								__result->Add(HX_CSTRING("complete") , __this->doneDamageIn_dyn(),false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(296)
					::flixel::tweens::FlxTween_obj::num((int)0,(int)1,.2,_Function_3_2::Block(this),this->updateDamageAlpha_dyn());
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(301)
					Float _g7 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(301)
					if (((_g7 < (int)50))){
						HX_STACK_LINE(304)
						this->outcome = ::Outcome_obj::ESCAPE;
						HX_STACK_LINE(305)
						this->_results->set_text(HX_CSTRING("ESCAPED!"));
						HX_STACK_LINE(306)
						this->_results->set_visible(true);
						HX_STACK_LINE(307)
						this->_results->set_alpha((int)0);
						struct _Function_4_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",308,0x215789db)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("alpha") , (int)1,false);
									return __result;
								}
								return null();
							}
						};
						struct _Function_4_2{
							inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",308,0x215789db)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circInOut_dyn(),false);
									__result->Add(HX_CSTRING("complete") , __this->doneResultsIn_dyn(),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(308)
						::flixel::tweens::FlxTween_obj::tween(this->_results,_Function_4_1::Block(),.66,_Function_4_2::Block(this));
					}
					else{
						HX_STACK_LINE(313)
						this->enemyAttack();
						struct _Function_4_1{
							inline static Dynamic Block( ){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",314,0x215789db)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circOut_dyn(),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(314)
						::flixel::tweens::FlxTween_obj::num(this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->y,(this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->y - (int)12),(int)1,_Function_4_1::Block(),this->updateDamageY_dyn());
						struct _Function_4_2{
							inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",315,0x215789db)
								{
									hx::Anon __result = hx::Anon_obj::Create();
									__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circInOut_dyn(),false);
									__result->Add(HX_CSTRING("complete") , __this->doneDamageIn_dyn(),false);
									return __result;
								}
								return null();
							}
						};
						HX_STACK_LINE(315)
						::flixel::tweens::FlxTween_obj::num((int)0,(int)1,.2,_Function_4_2::Block(this),this->updateDamageAlpha_dyn());
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(320)
		this->_wait = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,makeChoice,(void))

Void CombatHUD_obj::enemyAttack( ){
{
		HX_STACK_FRAME("CombatHUD","enemyAttack",0x20228805,"CombatHUD.enemyAttack","CombatHUD.hx",327,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(329)
		Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(329)
		if (((_g < (int)30))){
			HX_STACK_LINE(332)
			::flixel::FlxG_obj::camera->flash((int)-1,.2,null(),null());
			HX_STACK_LINE(333)
			this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_text(HX_CSTRING("1"));
			HX_STACK_LINE(334)
			(this->playerHealth)--;
			HX_STACK_LINE(335)
			this->updatePlayerHealth();
		}
		else{
			HX_STACK_LINE(340)
			this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_text(HX_CSTRING("MISS!"));
		}
		HX_STACK_LINE(344)
		Float _g1 = this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(344)
		Float _g2 = (Float(_g1) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(344)
		Float _g3 = ((this->_sprPlayer->x + (int)2) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(344)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_x(_g3);
		HX_STACK_LINE(345)
		Float _g4 = this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->get_height();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(345)
		Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(345)
		Float _g6 = ((this->_sprPlayer->y + (int)4) - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(345)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_y(_g6);
		HX_STACK_LINE(346)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_alpha((int)0);
		HX_STACK_LINE(347)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(CombatHUD_obj,enemyAttack,(void))

Void CombatHUD_obj::updateDamageY( Float Value){
{
		HX_STACK_FRAME("CombatHUD","updateDamageY",0x1e0fb516,"CombatHUD.updateDamageY","CombatHUD.hx",355,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(356)
		Float _g = this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_y(Value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(356)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_y(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,updateDamageY,(void))

Void CombatHUD_obj::updateDamageAlpha( Float Value){
{
		HX_STACK_FRAME("CombatHUD","updateDamageAlpha",0x79796e7b,"CombatHUD.updateDamageAlpha","CombatHUD.hx",363,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Value,"Value")
		HX_STACK_LINE(364)
		Float _g = this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_alpha(Value);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(364)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_alpha(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,updateDamageAlpha,(void))

Void CombatHUD_obj::doneDamageIn( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("CombatHUD","doneDamageIn",0x0a5fc361,"CombatHUD.doneDamageIn","CombatHUD.hx",372,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",372,0x215789db)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circInOut_dyn(),false);
					__result->Add(HX_CSTRING("startDelay") , (int)1,false);
					__result->Add(HX_CSTRING("complete") , __this->doneDamageOut_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(372)
		::flixel::tweens::FlxTween_obj::num((int)1,(int)0,.66,_Function_1_1::Block(this),this->updateDamageAlpha_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,doneDamageIn,(void))

Void CombatHUD_obj::doneResultsIn( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("CombatHUD","doneResultsIn",0x5b1790ae,"CombatHUD.doneResultsIn","CombatHUD.hx",380,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",380,0x215789db)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circOut_dyn(),false);
					__result->Add(HX_CSTRING("complete") , __this->finishFadeOut_dyn(),false);
					__result->Add(HX_CSTRING("startDelay") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(380)
		::flixel::tweens::FlxTween_obj::num((int)1,(int)0,.66,_Function_1_1::Block(this),this->updateAlpha_dyn());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,doneResultsIn,(void))

Void CombatHUD_obj::doneDamageOut( ::flixel::tweens::FlxTween _){
{
		HX_STACK_FRAME("CombatHUD","doneDamageOut",0x096fc592,"CombatHUD.doneDamageOut","CombatHUD.hx",389,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_,"_")
		HX_STACK_LINE(390)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_visible(false);
		HX_STACK_LINE(391)
		this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_visible(false);
		HX_STACK_LINE(392)
		this->_damages->__get((int)0).StaticCast< ::flixel::text::FlxText >()->set_text(HX_CSTRING(""));
		HX_STACK_LINE(393)
		this->_damages->__get((int)1).StaticCast< ::flixel::text::FlxText >()->set_text(HX_CSTRING(""));
		HX_STACK_LINE(395)
		if (((this->playerHealth <= (int)0))){
			HX_STACK_LINE(398)
			this->outcome = ::Outcome_obj::DEFEAT;
			HX_STACK_LINE(399)
			this->_results->set_text(HX_CSTRING("DEFEAT!"));
			HX_STACK_LINE(400)
			this->_results->set_visible(true);
			HX_STACK_LINE(401)
			this->_results->set_alpha((int)0);
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",402,0x215789db)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("alpha") , (int)1,false);
						return __result;
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",402,0x215789db)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circInOut_dyn(),false);
						__result->Add(HX_CSTRING("complete") , __this->doneResultsIn_dyn(),false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(402)
			::flixel::tweens::FlxTween_obj::tween(this->_results,_Function_2_1::Block(),.66,_Function_2_2::Block(this));
		}
		else{
			HX_STACK_LINE(404)
			if (((this->_enemyHealth <= (int)0))){
				HX_STACK_LINE(407)
				this->outcome = ::Outcome_obj::VICTORY;
				HX_STACK_LINE(408)
				this->_results->set_text(HX_CSTRING("VICTORY!"));
				HX_STACK_LINE(409)
				this->_results->set_visible(true);
				HX_STACK_LINE(410)
				this->_results->set_alpha((int)0);
				struct _Function_3_1{
					inline static Dynamic Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",411,0x215789db)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("alpha") , (int)1,false);
							return __result;
						}
						return null();
					}
				};
				struct _Function_3_2{
					inline static Dynamic Block( hx::ObjectPtr< ::CombatHUD_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","CombatHUD.hx",411,0x215789db)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::circInOut_dyn(),false);
							__result->Add(HX_CSTRING("complete") , __this->doneResultsIn_dyn(),false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(411)
				::flixel::tweens::FlxTween_obj::tween(this->_results,_Function_3_1::Block(),.66,_Function_3_2::Block(this));
			}
			else{
				HX_STACK_LINE(416)
				this->_wait = false;
				HX_STACK_LINE(417)
				this->_pointer->set_visible(true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(CombatHUD_obj,doneDamageOut,(void))

Void CombatHUD_obj::destroy( ){
{
		HX_STACK_FRAME("CombatHUD","destroy",0x5cda7e4f,"CombatHUD.destroy","CombatHUD.hx",422,0x215789db)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		this->super::destroy();
		HX_STACK_LINE(425)
		::Enemy _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->e);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(425)
		this->e = _g;
		HX_STACK_LINE(426)
		::flixel::FlxSprite _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sprBack);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(426)
		this->_sprBack = _g1;
		HX_STACK_LINE(427)
		::Player _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sprPlayer);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(427)
		this->_sprPlayer = _g2;
		HX_STACK_LINE(428)
		::Enemy _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_sprEnemy);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(428)
		this->_sprEnemy = _g3;
		HX_STACK_LINE(429)
		::flixel::ui::FlxBar _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_enemyHealthBar);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(429)
		this->_enemyHealthBar = _g4;
		HX_STACK_LINE(430)
		::flixel::text::FlxText _g5 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_txtPlayerHealth);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(430)
		this->_txtPlayerHealth = _g5;
		HX_STACK_LINE(431)
		Array< ::Dynamic > _g6 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_damages);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(431)
		this->_damages = _g6;
		HX_STACK_LINE(432)
		::flixel::FlxSprite _g7 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_pointer);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(432)
		this->_pointer = _g7;
		HX_STACK_LINE(433)
		Array< ::Dynamic > _g8 = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_choices);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(433)
		this->_choices = _g8;
		HX_STACK_LINE(434)
		::flixel::text::FlxText _g9 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_results);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(434)
		this->_results = _g9;
	}
return null();
}



CombatHUD_obj::CombatHUD_obj()
{
}

void CombatHUD_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CombatHUD);
	HX_MARK_MEMBER_NAME(e,"e");
	HX_MARK_MEMBER_NAME(playerHealth,"playerHealth");
	HX_MARK_MEMBER_NAME(outcome,"outcome");
	HX_MARK_MEMBER_NAME(_sprBack,"_sprBack");
	HX_MARK_MEMBER_NAME(_sprPlayer,"_sprPlayer");
	HX_MARK_MEMBER_NAME(_sprEnemy,"_sprEnemy");
	HX_MARK_MEMBER_NAME(_enemyHealth,"_enemyHealth");
	HX_MARK_MEMBER_NAME(_enemyMaxHealth,"_enemyMaxHealth");
	HX_MARK_MEMBER_NAME(_enemyHealthBar,"_enemyHealthBar");
	HX_MARK_MEMBER_NAME(_txtPlayerHealth,"_txtPlayerHealth");
	HX_MARK_MEMBER_NAME(_damages,"_damages");
	HX_MARK_MEMBER_NAME(_pointer,"_pointer");
	HX_MARK_MEMBER_NAME(_selected,"_selected");
	HX_MARK_MEMBER_NAME(_choices,"_choices");
	HX_MARK_MEMBER_NAME(_results,"_results");
	HX_MARK_MEMBER_NAME(_alpha,"_alpha");
	HX_MARK_MEMBER_NAME(_wait,"_wait");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CombatHUD_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(e,"e");
	HX_VISIT_MEMBER_NAME(playerHealth,"playerHealth");
	HX_VISIT_MEMBER_NAME(outcome,"outcome");
	HX_VISIT_MEMBER_NAME(_sprBack,"_sprBack");
	HX_VISIT_MEMBER_NAME(_sprPlayer,"_sprPlayer");
	HX_VISIT_MEMBER_NAME(_sprEnemy,"_sprEnemy");
	HX_VISIT_MEMBER_NAME(_enemyHealth,"_enemyHealth");
	HX_VISIT_MEMBER_NAME(_enemyMaxHealth,"_enemyMaxHealth");
	HX_VISIT_MEMBER_NAME(_enemyHealthBar,"_enemyHealthBar");
	HX_VISIT_MEMBER_NAME(_txtPlayerHealth,"_txtPlayerHealth");
	HX_VISIT_MEMBER_NAME(_damages,"_damages");
	HX_VISIT_MEMBER_NAME(_pointer,"_pointer");
	HX_VISIT_MEMBER_NAME(_selected,"_selected");
	HX_VISIT_MEMBER_NAME(_choices,"_choices");
	HX_VISIT_MEMBER_NAME(_results,"_results");
	HX_VISIT_MEMBER_NAME(_alpha,"_alpha");
	HX_VISIT_MEMBER_NAME(_wait,"_wait");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CombatHUD_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { return e; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_wait") ) { return _wait; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { return _alpha; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outcome") ) { return outcome; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprBack") ) { return _sprBack; }
		if (HX_FIELD_EQ(inName,"_damages") ) { return _damages; }
		if (HX_FIELD_EQ(inName,"_pointer") ) { return _pointer; }
		if (HX_FIELD_EQ(inName,"_choices") ) { return _choices; }
		if (HX_FIELD_EQ(inName,"_results") ) { return _results; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_sprEnemy") ) { return _sprEnemy; }
		if (HX_FIELD_EQ(inName,"_selected") ) { return _selected; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sprPlayer") ) { return _sprPlayer; }
		if (HX_FIELD_EQ(inName,"initCombat") ) { return initCombat_dyn(); }
		if (HX_FIELD_EQ(inName,"makeChoice") ) { return makeChoice_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateAlpha") ) { return updateAlpha_dyn(); }
		if (HX_FIELD_EQ(inName,"movePointer") ) { return movePointer_dyn(); }
		if (HX_FIELD_EQ(inName,"enemyAttack") ) { return enemyAttack_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerHealth") ) { return playerHealth; }
		if (HX_FIELD_EQ(inName,"_enemyHealth") ) { return _enemyHealth; }
		if (HX_FIELD_EQ(inName,"finishFadeIn") ) { return finishFadeIn_dyn(); }
		if (HX_FIELD_EQ(inName,"doneDamageIn") ) { return doneDamageIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"finishFadeOut") ) { return finishFadeOut_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDamageY") ) { return updateDamageY_dyn(); }
		if (HX_FIELD_EQ(inName,"doneResultsIn") ) { return doneResultsIn_dyn(); }
		if (HX_FIELD_EQ(inName,"doneDamageOut") ) { return doneDamageOut_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_enemyMaxHealth") ) { return _enemyMaxHealth; }
		if (HX_FIELD_EQ(inName,"_enemyHealthBar") ) { return _enemyHealthBar; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_txtPlayerHealth") ) { return _txtPlayerHealth; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateDamageAlpha") ) { return updateDamageAlpha_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updatePlayerHealth") ) { return updatePlayerHealth_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CombatHUD_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"e") ) { e=inValue.Cast< ::Enemy >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_wait") ) { _wait=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_alpha") ) { _alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outcome") ) { outcome=inValue.Cast< ::Outcome >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_sprBack") ) { _sprBack=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_damages") ) { _damages=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pointer") ) { _pointer=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_choices") ) { _choices=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_results") ) { _results=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_sprEnemy") ) { _sprEnemy=inValue.Cast< ::Enemy >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_selected") ) { _selected=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_sprPlayer") ) { _sprPlayer=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"playerHealth") ) { playerHealth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemyHealth") ) { _enemyHealth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_enemyMaxHealth") ) { _enemyMaxHealth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enemyHealthBar") ) { _enemyHealthBar=inValue.Cast< ::flixel::ui::FlxBar >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_txtPlayerHealth") ) { _txtPlayerHealth=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CombatHUD_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("e"));
	outFields->push(HX_CSTRING("playerHealth"));
	outFields->push(HX_CSTRING("outcome"));
	outFields->push(HX_CSTRING("_sprBack"));
	outFields->push(HX_CSTRING("_sprPlayer"));
	outFields->push(HX_CSTRING("_sprEnemy"));
	outFields->push(HX_CSTRING("_enemyHealth"));
	outFields->push(HX_CSTRING("_enemyMaxHealth"));
	outFields->push(HX_CSTRING("_enemyHealthBar"));
	outFields->push(HX_CSTRING("_txtPlayerHealth"));
	outFields->push(HX_CSTRING("_damages"));
	outFields->push(HX_CSTRING("_pointer"));
	outFields->push(HX_CSTRING("_selected"));
	outFields->push(HX_CSTRING("_choices"));
	outFields->push(HX_CSTRING("_results"));
	outFields->push(HX_CSTRING("_alpha"));
	outFields->push(HX_CSTRING("_wait"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Enemy*/ ,(int)offsetof(CombatHUD_obj,e),HX_CSTRING("e")},
	{hx::fsInt,(int)offsetof(CombatHUD_obj,playerHealth),HX_CSTRING("playerHealth")},
	{hx::fsObject /*::Outcome*/ ,(int)offsetof(CombatHUD_obj,outcome),HX_CSTRING("outcome")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(CombatHUD_obj,_sprBack),HX_CSTRING("_sprBack")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(CombatHUD_obj,_sprPlayer),HX_CSTRING("_sprPlayer")},
	{hx::fsObject /*::Enemy*/ ,(int)offsetof(CombatHUD_obj,_sprEnemy),HX_CSTRING("_sprEnemy")},
	{hx::fsInt,(int)offsetof(CombatHUD_obj,_enemyHealth),HX_CSTRING("_enemyHealth")},
	{hx::fsInt,(int)offsetof(CombatHUD_obj,_enemyMaxHealth),HX_CSTRING("_enemyMaxHealth")},
	{hx::fsObject /*::flixel::ui::FlxBar*/ ,(int)offsetof(CombatHUD_obj,_enemyHealthBar),HX_CSTRING("_enemyHealthBar")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(CombatHUD_obj,_txtPlayerHealth),HX_CSTRING("_txtPlayerHealth")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CombatHUD_obj,_damages),HX_CSTRING("_damages")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(CombatHUD_obj,_pointer),HX_CSTRING("_pointer")},
	{hx::fsInt,(int)offsetof(CombatHUD_obj,_selected),HX_CSTRING("_selected")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(CombatHUD_obj,_choices),HX_CSTRING("_choices")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(CombatHUD_obj,_results),HX_CSTRING("_results")},
	{hx::fsFloat,(int)offsetof(CombatHUD_obj,_alpha),HX_CSTRING("_alpha")},
	{hx::fsBool,(int)offsetof(CombatHUD_obj,_wait),HX_CSTRING("_wait")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("e"),
	HX_CSTRING("playerHealth"),
	HX_CSTRING("outcome"),
	HX_CSTRING("_sprBack"),
	HX_CSTRING("_sprPlayer"),
	HX_CSTRING("_sprEnemy"),
	HX_CSTRING("_enemyHealth"),
	HX_CSTRING("_enemyMaxHealth"),
	HX_CSTRING("_enemyHealthBar"),
	HX_CSTRING("_txtPlayerHealth"),
	HX_CSTRING("_damages"),
	HX_CSTRING("_pointer"),
	HX_CSTRING("_selected"),
	HX_CSTRING("_choices"),
	HX_CSTRING("_results"),
	HX_CSTRING("_alpha"),
	HX_CSTRING("_wait"),
	HX_CSTRING("initCombat"),
	HX_CSTRING("updateAlpha"),
	HX_CSTRING("finishFadeIn"),
	HX_CSTRING("finishFadeOut"),
	HX_CSTRING("updatePlayerHealth"),
	HX_CSTRING("update"),
	HX_CSTRING("movePointer"),
	HX_CSTRING("makeChoice"),
	HX_CSTRING("enemyAttack"),
	HX_CSTRING("updateDamageY"),
	HX_CSTRING("updateDamageAlpha"),
	HX_CSTRING("doneDamageIn"),
	HX_CSTRING("doneResultsIn"),
	HX_CSTRING("doneDamageOut"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CombatHUD_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CombatHUD_obj::__mClass,"__mClass");
};

#endif

Class CombatHUD_obj::__mClass;

void CombatHUD_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("CombatHUD"), hx::TCanCast< CombatHUD_obj> ,sStaticFields,sMemberFields,
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

void CombatHUD_obj::__boot()
{
}

