
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_datatransfer_StringSelection__
#define __java_awt_datatransfer_StringSelection__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace awt
    {
      namespace datatransfer
      {
          class Clipboard;
          class DataFlavor;
          class StringSelection;
          class Transferable;
      }
    }
  }
}

class java::awt::datatransfer::StringSelection : public ::java::lang::Object
{

public:
  StringSelection(::java::lang::String *);
  virtual JArray< ::java::awt::datatransfer::DataFlavor * > * getTransferDataFlavors();
  virtual jboolean isDataFlavorSupported(::java::awt::datatransfer::DataFlavor *);
  virtual ::java::lang::Object * getTransferData(::java::awt::datatransfer::DataFlavor *);
  virtual void lostOwnership(::java::awt::datatransfer::Clipboard *, ::java::awt::datatransfer::Transferable *);
public: // actually package-private
  static JArray< ::java::awt::datatransfer::DataFlavor * > * supported_flavors;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) data;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_datatransfer_StringSelection__
