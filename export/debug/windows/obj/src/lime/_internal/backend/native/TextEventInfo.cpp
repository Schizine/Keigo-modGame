// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_TextEventInfo
#include <lime/_internal/backend/native/TextEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_48b909785036aaec_861_new,"lime._internal.backend.native.TextEventInfo","new",0x7aff2f5b,"lime._internal.backend.native.TextEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",861,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_48b909785036aaec_871_clone,"lime._internal.backend.native.TextEventInfo","clone",0x4be06718,"lime._internal.backend.native.TextEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",871,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void TextEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_windowID,::String text,::hx::Null< int >  __o_start,::hx::Null< int >  __o_length){
            		int windowID = __o_windowID.Default(0);
            		int start = __o_start.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_48b909785036aaec_861_new)
HXLINE( 862)		this->type = ( (int)(type) );
HXLINE( 863)		this->windowID = windowID;
HXLINE( 864)		this->text = text;
HXLINE( 865)		this->start = start;
HXLINE( 866)		this->length = length;
            	}

Dynamic TextEventInfo_obj::__CreateEmpty() { return new TextEventInfo_obj; }

void *TextEventInfo_obj::_hx_vtable = 0;

Dynamic TextEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TextEventInfo_obj > _hx_result = new TextEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TextEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7946ae53;
}

 ::lime::_internal::backend::native::TextEventInfo TextEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_48b909785036aaec_871_clone)
HXDLIN( 871)		return  ::lime::_internal::backend::native::TextEventInfo_obj::__alloc( HX_CTX ,this->type,this->windowID,this->text,this->start,this->length);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TextEventInfo_obj,clone,return )


TextEventInfo_obj::TextEventInfo_obj()
{
}

void TextEventInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextEventInfo);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(windowID,"windowID");
	HX_MARK_END_CLASS();
}

void TextEventInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(windowID,"windowID");
}

::hx::Val TextEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { return ::hx::Val( windowID ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TextEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"windowID") ) { windowID=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("windowID",cb,af,cd,7d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TextEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TextEventInfo_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsInt,(int)offsetof(TextEventInfo_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsInt,(int)offsetof(TextEventInfo_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsString,(int)offsetof(TextEventInfo_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsInt,(int)offsetof(TextEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(TextEventInfo_obj,windowID),HX_("windowID",cb,af,cd,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TextEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String TextEventInfo_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("length",e6,94,07,9f),
	HX_("start",62,74,0b,84),
	HX_("text",ad,cc,f9,4c),
	HX_("type",ba,f2,08,4d),
	HX_("windowID",cb,af,cd,7d),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class TextEventInfo_obj::__mClass;

void TextEventInfo_obj::__register()
{
	TextEventInfo_obj _hx_dummy;
	TextEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.TextEventInfo",e9,e5,8f,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TextEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TextEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native
