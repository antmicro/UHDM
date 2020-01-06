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
 * File:   containers.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#include <vector>
#include <unordered_map>

#ifndef CONTAINERS_H
#define CONTAINERS_H

namespace UHDM {
  typedef std::vector<std::string> Id2SymbolMap;
  typedef std::unordered_map<std::string, unsigned long> Symbol2IdMap;

  class operand_group;
typedef std::vector<operand_group*> VectorOfoperand_group;
typedef std::vector<operand_group*>::iterator VectorOfoperand_groupItr;
class io_decl;
typedef std::vector<io_decl*> VectorOfio_decl;
typedef std::vector<io_decl*>::iterator VectorOfio_declItr;
class task;
typedef std::vector<task*> VectorOftask;
typedef std::vector<task*>::iterator VectorOftaskItr;
class function;
typedef std::vector<function*> VectorOffunction;
typedef std::vector<function*>::iterator VectorOffunctionItr;
class instance;
typedef std::vector<instance*> VectorOfinstance;
typedef std::vector<instance*>::iterator VectorOfinstanceItr;
class module;
typedef std::vector<module*> VectorOfmodule;
typedef std::vector<module*>::iterator VectorOfmoduleItr;
class primitive;
typedef std::vector<primitive*> VectorOfprimitive;
typedef std::vector<primitive*>::iterator VectorOfprimitiveItr;
class task_func;
typedef std::vector<task_func*> VectorOftask_func;
typedef std::vector<task_func*>::iterator VectorOftask_funcItr;
class net;
typedef std::vector<net*> VectorOfnet;
typedef std::vector<net*>::iterator VectorOfnetItr;
class array_net;
typedef std::vector<array_net*> VectorOfarray_net;
typedef std::vector<array_net*>::iterator VectorOfarray_netItr;
class variables;
typedef std::vector<variables*> VectorOfvariables;
typedef std::vector<variables*>::iterator VectorOfvariablesItr;
class parameters;
typedef std::vector<parameters*> VectorOfparameters;
typedef std::vector<parameters*>::iterator VectorOfparametersItr;
class assertion;
typedef std::vector<assertion*> VectorOfassertion;
typedef std::vector<assertion*>::iterator VectorOfassertionItr;
class typespec;
typedef std::vector<typespec*> VectorOftypespec;
typedef std::vector<typespec*>::iterator VectorOftypespecItr;
class class_defn;
typedef std::vector<class_defn*> VectorOfclass_defn;
typedef std::vector<class_defn*>::iterator VectorOfclass_defnItr;
class program;
typedef std::vector<program*> VectorOfprogram;
typedef std::vector<program*>::iterator VectorOfprogramItr;
class logic_var;
typedef std::vector<logic_var*> VectorOflogic_var;
typedef std::vector<logic_var*>::iterator VectorOflogic_varItr;
class array_var;
typedef std::vector<array_var*> VectorOfarray_var;
typedef std::vector<array_var*>::iterator VectorOfarray_varItr;
class named_event;
typedef std::vector<named_event*> VectorOfnamed_event;
typedef std::vector<named_event*>::iterator VectorOfnamed_eventItr;
class spec_param;
typedef std::vector<spec_param*> VectorOfspec_param;
typedef std::vector<spec_param*>::iterator VectorOfspec_paramItr;
class process;
typedef std::vector<process*> VectorOfprocess;
typedef std::vector<process*>::iterator VectorOfprocessItr;
class interface_tf_decl;
typedef std::vector<interface_tf_decl*> VectorOfinterface_tf_decl;
typedef std::vector<interface_tf_decl*>::iterator VectorOfinterface_tf_declItr;
class modport;
typedef std::vector<modport*> VectorOfmodport;
typedef std::vector<modport*>::iterator VectorOfmodportItr;
class mod_path;
typedef std::vector<mod_path*> VectorOfmod_path;
typedef std::vector<mod_path*>::iterator VectorOfmod_pathItr;
class cont_assign;
typedef std::vector<cont_assign*> VectorOfcont_assign;
typedef std::vector<cont_assign*>::iterator VectorOfcont_assignItr;
class interface;
typedef std::vector<interface*> VectorOfinterface;
typedef std::vector<interface*>::iterator VectorOfinterfaceItr;
class interface_array;
typedef std::vector<interface_array*> VectorOfinterface_array;
typedef std::vector<interface_array*>::iterator VectorOfinterface_arrayItr;
class clocking_block;
typedef std::vector<clocking_block*> VectorOfclocking_block;
typedef std::vector<clocking_block*>::iterator VectorOfclocking_blockItr;
class scope;
typedef std::vector<scope*> VectorOfscope;
typedef std::vector<scope*>::iterator VectorOfscopeItr;
class primitive_array;
typedef std::vector<primitive_array*> VectorOfprimitive_array;
typedef std::vector<primitive_array*>::iterator VectorOfprimitive_arrayItr;
class port;
typedef std::vector<port*> VectorOfport;
typedef std::vector<port*>::iterator VectorOfportItr;
class module_array;
typedef std::vector<module_array*> VectorOfmodule_array;
typedef std::vector<module_array*>::iterator VectorOfmodule_arrayItr;
class tchk;
typedef std::vector<tchk*> VectorOftchk;
typedef std::vector<tchk*>::iterator VectorOftchkItr;
class def_param;
typedef std::vector<def_param*> VectorOfdef_param;
typedef std::vector<def_param*>::iterator VectorOfdef_paramItr;
class alias_stmt;
typedef std::vector<alias_stmt*> VectorOfalias_stmt;
typedef std::vector<alias_stmt*>::iterator VectorOfalias_stmtItr;
class package;
typedef std::vector<package*> VectorOfpackage;
typedef std::vector<package*>::iterator VectorOfpackageItr;

};

#endif

