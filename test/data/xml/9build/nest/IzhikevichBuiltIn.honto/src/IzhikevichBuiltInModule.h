/*
 *  IzhikevichBuiltInModule.h
 *
 *  This file is part of NEST.
 *
 *  Copyright (C) 2008 by
 *  The NEST Initiative
 *
 *  See the file AUTHORS for details.
 *
 *  Permission is granted to compile and modify
 *  this file for non-commercial use.
 *  See the file LICENSE for details.
 *
 */

/* This file was generated by PyPe9 version 0.1 on Wed 25 Mar 15 02:01:59PM */

#ifndef IZHIKEVICHBUILTIN_MODULE_H
#define IZHIKEVICHBUILTIN_MODULE_H

#include "dynmodule.h"
#include "slifunction.h"

namespace nest {
  class Network;
}

// Put your stuff into your own namespace.
namespace nineml {

/**
 * Class defining your model.
 * @note For each model, you must define one such class, with a unique name.
 */
class IzhikevichBuiltInModule : public DynModule {
 public:

  // Interface functions ------------------------------------------

  /**
   * @note The constructor registers the module with the dynamic loader.
   *       Initialization proper is performed by the init() method.
   */
  IzhikevichBuiltInModule();

  /**
   * @note The destructor does not do much in modules. Proper "downrigging"
   *       is the responsibility of the unregister() method.
   */
  ~IzhikevichBuiltInModule();

  /**
   * Initialize module by registering models with the network.
   * @param SLIInterpreter* SLI interpreter
   * @param nest::Network*  Network with which to register models
   * @note  Parameter Network is needed for historical compatibility
   *        only.
   */
  void init(SLIInterpreter*, nest::Network*);

  /**
   * Return the name of your model.
   */
  const std::string name(void) const;

  /**
   * Return the name of a sli file to execute when IzhikevichBuiltInModule is loaded.
   * This mechanism can be used to define SLI commands associated with your
   * module, in particular, set up type tries for functions you have defined.
   */
  const std::string commandstring(void) const;

};

}  // nineml namespace

#endif  // IZHIKEVICHBUILTIN_MODULE_H