// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from 
// ../../../ACE_wrappers/TAO/TAO_IDL/be/be_codegen.cpp:1133

#ifndef ORO_CORBA_SERVICEI_H_
#define ORO_CORBA_SERVICEI_H_

#include "corba.h"
#ifdef CORBA_IS_TAO
#include "ServiceS.h"
#else
#include "ServiceC.h"
#endif

#include "../../interface/Service.hpp"
#include "ConfigurationInterfaceI.h"
#include "OperationInterfaceI.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
#pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

class  RTT_corba_CService_i
    : public virtual POA_RTT::corba::CService, public virtual PortableServer::RefCountServantBase,
      public virtual RTT_corba_CConfigurationInterface_i,
      public virtual RTT_corba_COperationInterface_i
{
protected:
    PortableServer::POA_var mpoa;
    RTT::interface::Service::shared_ptr mservice;
public:
  // Constructor 
    RTT_corba_CService_i ( RTT::interface::ServicePtr service, PortableServer::POA_ptr poa);
  
  // Destructor 
  virtual ~RTT_corba_CService_i (void);
  
  virtual RTT::corba::CService_ptr activate_this() {
      PortableServer::ObjectId_var oid = mpoa->activate_object(this); // ref count=2
      //_remove_ref(); // ref count=1
      return _this();
  }

  PortableServer::POA_ptr _default_POA();

  virtual
  char * getName (
      void);
  
  virtual
  char * getServiceDescription (
      void);
  
  virtual
  ::RTT::corba::CService::CProviderNames * getProviderNames (
      void);
  
  virtual
  ::RTT::corba::CService_ptr getService (
      const char * name);
  
  virtual
  ::CORBA::Boolean hasService (
      const char * name);
  
};


#endif /* SERVICEI_H_  */


