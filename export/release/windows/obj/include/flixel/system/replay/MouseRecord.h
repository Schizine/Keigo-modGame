// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_system_replay_MouseRecord
#define INCLUDED_flixel_system_replay_MouseRecord

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_fa93722f50df8cd4_32_new)
HX_DECLARE_CLASS3(flixel,_hx_system,replay,MouseRecord)

namespace flixel{
namespace _hx_system{
namespace replay{


class HXCPP_CLASS_ATTRIBUTES MouseRecord_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MouseRecord_obj OBJ_;
		MouseRecord_obj();

	public:
		enum { _hx_ClassId = 0x0a5458c4 };

		void __construct(int x,int y,int button,int wheel);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.replay.MouseRecord")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.replay.MouseRecord"); }

		inline static ::hx::ObjectPtr< MouseRecord_obj > __new(int x,int y,int button,int wheel) {
			::hx::ObjectPtr< MouseRecord_obj > __this = new MouseRecord_obj();
			__this->__construct(x,y,button,wheel);
			return __this;
		}

		inline static ::hx::ObjectPtr< MouseRecord_obj > __alloc(::hx::Ctx *_hx_ctx,int x,int y,int button,int wheel) {
			MouseRecord_obj *__this = (MouseRecord_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MouseRecord_obj), false, "flixel.system.replay.MouseRecord"));
			*(void **)__this = MouseRecord_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fa93722f50df8cd4_32_new)
HXLINE(  33)		( ( ::flixel::_hx_system::replay::MouseRecord)(__this) )->x = x;
HXLINE(  34)		( ( ::flixel::_hx_system::replay::MouseRecord)(__this) )->y = y;
HXLINE(  35)		( ( ::flixel::_hx_system::replay::MouseRecord)(__this) )->button = button;
HXLINE(  36)		( ( ::flixel::_hx_system::replay::MouseRecord)(__this) )->wheel = wheel;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MouseRecord_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MouseRecord",76,42,a7,d7); }

		int x;
		int y;
		int button;
		int wheel;
};

} // end namespace flixel
} // end namespace system
} // end namespace replay

#endif /* INCLUDED_flixel_system_replay_MouseRecord */ 
