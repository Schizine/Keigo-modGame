// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#define INCLUDED_flixel_addons_text_FlxTypeText

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,text,FlxTypeText)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,text,FlxTextFormatMarkerPair)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace text{


class HXCPP_CLASS_ATTRIBUTES FlxTypeText_obj : public  ::flixel::text::FlxText_obj
{
	public:
		typedef  ::flixel::text::FlxText_obj super;
		typedef FlxTypeText_obj OBJ_;
		FlxTypeText_obj();

	public:
		enum { _hx_ClassId = 0x55ec573d };

		void __construct(Float X,Float Y,int Width,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.text.FlxTypeText")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.text.FlxTypeText"); }
		static ::hx::ObjectPtr< FlxTypeText_obj > __new(Float X,Float Y,int Width,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont);
		static ::hx::ObjectPtr< FlxTypeText_obj > __alloc(::hx::Ctx *_hx_ctx,Float X,Float Y,int Width,::String Text,::hx::Null< int >  __o_Size,::hx::Null< bool >  __o_EmbeddedFont);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypeText_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypeText",f9,aa,db,d0); }

		static void __boot();
		static ::String helperString;
		Float delay;
		Float eraseDelay;
		bool showCursor;
		::String cursorCharacter;
		Float cursorBlinkSpeed;
		::String prefix;
		bool autoErase;
		Float waitTime;
		bool paused;
		::Array< ::Dynamic> sounds;
		bool useDefaultSound;
		bool finishSounds;
		::Array< int > skipKeys;
		 ::Dynamic completeCallback;
		Dynamic completeCallback_dyn() { return completeCallback;}
		 ::Dynamic eraseCallback;
		Dynamic eraseCallback_dyn() { return eraseCallback;}
		::String _finalText;
		Float _timer;
		Float _waitTimer;
		int _length;
		bool _typing;
		bool _erasing;
		bool _waiting;
		Float _cursorTimer;
		bool _typingVariation;
		Float _typeVarPercent;
		 ::flixel::_hx_system::FlxSound _sound;
		void start( ::Dynamic Delay,::hx::Null< bool >  ForceRestart,::hx::Null< bool >  AutoErase,::Array< int > SkipKeys, ::Dynamic Callback);
		::Dynamic start_dyn();

		 ::flixel::text::FlxText applyMarkup(::String input,::Array< ::Dynamic> rules);

		void insertBreakLines();
		::Dynamic insertBreakLines_dyn();

		void erase( ::Dynamic Delay,::hx::Null< bool >  ForceRestart,::Array< int > SkipKeys, ::Dynamic Callback);
		::Dynamic erase_dyn();

		void resetText(::String Text);
		::Dynamic resetText_dyn();

		void setTypingVariation(::hx::Null< Float >  Amount,::hx::Null< bool >  On);
		::Dynamic setTypingVariation_dyn();

		void onComplete();
		::Dynamic onComplete_dyn();

		void onErased();
		::Dynamic onErased_dyn();

		void update(Float elapsed);

		void skip();
		::Dynamic skip_dyn();

		void loadDefaultSound();
		::Dynamic loadDefaultSound_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace text

#endif /* INCLUDED_flixel_addons_text_FlxTypeText */ 