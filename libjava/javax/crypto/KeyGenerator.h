
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_crypto_KeyGenerator__
#define __javax_crypto_KeyGenerator__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace security
    {
        class Provider;
        class SecureRandom;
      namespace spec
      {
          class AlgorithmParameterSpec;
      }
    }
  }
  namespace javax
  {
    namespace crypto
    {
        class KeyGenerator;
        class KeyGeneratorSpi;
        class SecretKey;
    }
  }
}

class javax::crypto::KeyGenerator : public ::java::lang::Object
{

public: // actually protected
  KeyGenerator(::javax::crypto::KeyGeneratorSpi *, ::java::security::Provider *, ::java::lang::String *);
public:
  static ::javax::crypto::KeyGenerator * getInstance(::java::lang::String *);
  static ::javax::crypto::KeyGenerator * getInstance(::java::lang::String *, ::java::lang::String *);
  static ::javax::crypto::KeyGenerator * getInstance(::java::lang::String *, ::java::security::Provider *);
  virtual ::javax::crypto::SecretKey * generateKey();
  virtual ::java::lang::String * getAlgorithm();
  virtual ::java::security::Provider * getProvider();
  virtual void init(::java::security::spec::AlgorithmParameterSpec *);
  virtual void init(::java::security::spec::AlgorithmParameterSpec *, ::java::security::SecureRandom *);
  virtual void init(jint);
  virtual void init(jint, ::java::security::SecureRandom *);
  virtual void init(::java::security::SecureRandom *);
private:
  static ::java::lang::String * SERVICE;
  ::javax::crypto::KeyGeneratorSpi * __attribute__((aligned(__alignof__( ::java::lang::Object)))) kgSpi;
  ::java::security::Provider * provider;
  ::java::lang::String * algorithm;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_crypto_KeyGenerator__
