// Generated by Haxe 4.1.5
#ifndef INCLUDED_smTools_SMFile
#define INCLUDED_smTools_SMFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(smTools,SMFile)
HX_DECLARE_CLASS1(smTools,SMHeader)
HX_DECLARE_CLASS1(smTools,SMMeasure)

namespace smTools{


class HXCPP_CLASS_ATTRIBUTES SMFile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SMFile_obj OBJ_;
		SMFile_obj();

	public:
		enum { _hx_ClassId = 0x08d5c773 };

		void __construct(::Array< ::String > data);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="smTools.SMFile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"smTools.SMFile"); }
		static ::hx::ObjectPtr< SMFile_obj > __new(::Array< ::String > data);
		static ::hx::ObjectPtr< SMFile_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > data);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SMFile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SMFile",36,98,0e,b4); }

		static  ::smTools::SMFile loadFile(::String path);
		static ::Dynamic loadFile_dyn();

		::Array< ::String > _fileData;
		Float _readTime;
		 ::smTools::SMHeader header;
		::Array< ::Dynamic> measures;
};

} // end namespace smTools

#endif /* INCLUDED_smTools_SMFile */ 
