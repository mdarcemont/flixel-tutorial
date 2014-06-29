#include <hxcpp.h>

#ifndef INCLUDED_Outcome
#include <Outcome.h>
#endif

::Outcome Outcome_obj::DEFEAT;

::Outcome Outcome_obj::ESCAPE;

::Outcome Outcome_obj::NONE;

::Outcome Outcome_obj::VICTORY;

HX_DEFINE_CREATE_ENUM(Outcome_obj)

int Outcome_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DEFEAT")) return 3;
	if (inName==HX_CSTRING("ESCAPE")) return 1;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("VICTORY")) return 2;
	return super::__FindIndex(inName);
}

int Outcome_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DEFEAT")) return 0;
	if (inName==HX_CSTRING("ESCAPE")) return 0;
	if (inName==HX_CSTRING("NONE")) return 0;
	if (inName==HX_CSTRING("VICTORY")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Outcome_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DEFEAT")) return DEFEAT;
	if (inName==HX_CSTRING("ESCAPE")) return ESCAPE;
	if (inName==HX_CSTRING("NONE")) return NONE;
	if (inName==HX_CSTRING("VICTORY")) return VICTORY;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("NONE"),
	HX_CSTRING("ESCAPE"),
	HX_CSTRING("VICTORY"),
	HX_CSTRING("DEFEAT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Outcome_obj::DEFEAT,"DEFEAT");
	HX_MARK_MEMBER_NAME(Outcome_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Outcome_obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(Outcome_obj::VICTORY,"VICTORY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Outcome_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Outcome_obj::DEFEAT,"DEFEAT");
	HX_VISIT_MEMBER_NAME(Outcome_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Outcome_obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(Outcome_obj::VICTORY,"VICTORY");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class Outcome_obj::__mClass;

Dynamic __Create_Outcome_obj() { return new Outcome_obj; }

void Outcome_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Outcome"), hx::TCanCast< Outcome_obj >,sStaticFields,sMemberFields,
	&__Create_Outcome_obj, &__Create,
	&super::__SGetClass(), &CreateOutcome_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Outcome_obj::__boot()
{
hx::Static(DEFEAT) = hx::CreateEnum< Outcome_obj >(HX_CSTRING("DEFEAT"),3);
hx::Static(ESCAPE) = hx::CreateEnum< Outcome_obj >(HX_CSTRING("ESCAPE"),1);
hx::Static(NONE) = hx::CreateEnum< Outcome_obj >(HX_CSTRING("NONE"),0);
hx::Static(VICTORY) = hx::CreateEnum< Outcome_obj >(HX_CSTRING("VICTORY"),2);
}


