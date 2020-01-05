/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   clocking_block.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef CLOCKING_BLOCK_H
#define CLOCKING_BLOCK_H

namespace UHDM {

  class clocking_block : public BaseClass {
  public:
    // Implicit constructor used to initialize all members,
    // comment: clocking_block();
    ~clocking_block() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    unsigned int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(unsigned int data) { uhdmParentType_ = data; }

    std::string get_vpiFile() const { return SymbolFactory::getSymbol(vpiFile_); }

    void set_vpiFile(std::string data) { vpiFile_ = SymbolFactory::make(data); }

    unsigned int get_vpiLineNo() const { return vpiLineNo_; }

    void set_vpiLineNo(unsigned int data) { vpiLineNo_ = data; }

    virtual unsigned int getUhdmType() { return uhdmclocking_block; }   
  private:
    
    BaseClass* vpiParent_;

    unsigned int uhdmParentType_;

    unsigned int vpiFile_;

    unsigned int vpiLineNo_;

  };

  class clocking_blockFactory {
  friend Serializer;
  public:
  static clocking_block* make() {
    clocking_block* obj = new clocking_block();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<clocking_block*> objects_;
  };
 	      
  class VectorOfclocking_blockFactory {
  friend Serializer;
  public:
  static std::vector<clocking_block*>* make() {
    std::vector<clocking_block*>* obj = new std::vector<clocking_block*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<clocking_block*>*> objects_;
  };

};

#endif

