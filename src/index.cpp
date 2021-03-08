#include "HelloWorld.h"
#include <iostream>
#include <napi.h>
#include <string>

// native C++ function that is assigned to the `exports` object
Napi::String sayHello(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();

  // calling helloUser with hardocded argument
  // std::string result = helloUser("Angel");

  std::string inputParam = info[0].ToString();

  std::string result = helloUser(inputParam);

  // return the new value
  return Napi::String::New(env, result);
}

// callback method when module is registered in NodeJS
Napi::Object Init(Napi::Env env, Napi::Object exports)

{

  std::cout << "Initiation of module has completed!\n";

  // setting a key on the `exports` object
  exports.Set(
      Napi::String::New(env, "helloWorld"), // the property key helloWorld
      Napi::Function::New(env, sayHello)    // the property value
  );

  // returning the exports object
  return exports;
}

NODE_API_MODULE(myModule, Init)
