// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_motion__Actuate_TweenTimer
#include <motion/_Actuate/TweenTimer.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ddff7c747423f6c3_641_new,"motion._Actuate.TweenTimer","new",0x977c8172,"motion._Actuate.TweenTimer.new","motion/Actuate.hx",641,0xcac92ba8)
namespace motion{
namespace _Actuate{

void TweenTimer_obj::__construct(Float progress){
            	HX_STACKFRAME(&_hx_pos_ddff7c747423f6c3_641_new)
HXDLIN( 641)		this->progress = progress;
            	}

Dynamic TweenTimer_obj::__CreateEmpty() { return new TweenTimer_obj; }

void *TweenTimer_obj::_hx_vtable = 0;

Dynamic TweenTimer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TweenTimer_obj > _hx_result = new TweenTimer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TweenTimer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e131e44;
}


TweenTimer_obj::TweenTimer_obj()
{
}

::hx::Val TweenTimer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return ::hx::Val( progress ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TweenTimer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("progress",ad,f7,2a,86));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TweenTimer_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(TweenTimer_obj,progress),HX_("progress",ad,f7,2a,86)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TweenTimer_obj_sStaticStorageInfo = 0;
#endif

static ::String TweenTimer_obj_sMemberFields[] = {
	HX_("progress",ad,f7,2a,86),
	::String(null()) };

::hx::Class TweenTimer_obj::__mClass;

void TweenTimer_obj::__register()
{
	TweenTimer_obj _hx_dummy;
	TweenTimer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion._Actuate.TweenTimer",80,a0,a6,dd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TweenTimer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TweenTimer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TweenTimer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TweenTimer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace _Actuate