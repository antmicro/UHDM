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
 * File:   net.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef NET_H
#define NET_H

namespace UHDM {

  class net : public nets {
  public:
    // Implicit constructor used to initialize all members,
    // comment: net();
    ~net()  {}
    
    VectorOfnet_bit* get_net_bits() const { return net_bits_; }

    bool set_net_bits(VectorOfnet_bit* data) { net_bits_ = data; return true;}

    virtual unsigned int getUhdmType() { return uhdmnet; }   
  private:
    
    VectorOfnet_bit* net_bits_;

  };

  class netFactory {
  friend Serializer;
  public:
  static net* make() {
    net* obj = new net();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<net*> objects_;
  };
 	      
  class VectorOfnetFactory {
  friend Serializer;
  public:
  static std::vector<net*>* make() {
    std::vector<net*>* obj = new std::vector<net*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<net*>*> objects_;
  };

};

#endif
