
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming_NamingContextPackage_NotFoundReason__
#define __org_omg_CosNaming_NamingContextPackage_NotFoundReason__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CosNaming
      {
        namespace NamingContextPackage
        {
            class NotFoundReason;
        }
      }
    }
  }
}

class org::omg::CosNaming::NamingContextPackage::NotFoundReason : public ::java::lang::Object
{

public: // actually protected
  NotFoundReason(jint);
public:
  static ::org::omg::CosNaming::NamingContextPackage::NotFoundReason * from_int(jint);
  virtual jint value();
private:
  static const jlong serialVersionUID = -5689237060527596081LL;
public:
  static const jint _missing_node = 0;
  static const jint _not_context = 1;
  static const jint _not_object = 2;
  static ::org::omg::CosNaming::NamingContextPackage::NotFoundReason * missing_node;
  static ::org::omg::CosNaming::NamingContextPackage::NotFoundReason * not_context;
  static ::org::omg::CosNaming::NamingContextPackage::NotFoundReason * not_object;
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) value__;
public:
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming_NamingContextPackage_NotFoundReason__
