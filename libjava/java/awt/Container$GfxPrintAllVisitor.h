
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_Container$GfxPrintAllVisitor__
#define __java_awt_Container$GfxPrintAllVisitor__

#pragma interface

#include <java/awt/Container$GfxVisitor.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class Container$GfxPrintAllVisitor;
        class Container$GfxVisitor;
        class Graphics;
    }
  }
}

class java::awt::Container$GfxPrintAllVisitor : public ::java::awt::Container$GfxVisitor
{

public: // actually package-private
  Container$GfxPrintAllVisitor();
public:
  virtual void visit(::java::awt::Component *, ::java::awt::Graphics *);
  static ::java::awt::Container$GfxVisitor * INSTANCE;
  static ::java::lang::Class class$;
};

#endif // __java_awt_Container$GfxPrintAllVisitor__
