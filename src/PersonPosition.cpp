// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `PersonPosition.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include </home/alvaro/catkin_ws/src/velodyne_detect_person/include/PersonPosition.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __RoboCompPersonPosition__PersonPosition__personPose_name = "personPose";

}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::RoboCompPersonPosition::upCast(::IceProxy::RoboCompPersonPosition::PersonPosition* p) { return p; }

void
::IceProxy::RoboCompPersonPosition::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::RoboCompPersonPosition::PersonPosition>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::RoboCompPersonPosition::PersonPosition;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::RoboCompPersonPosition::PersonPosition::personPose(const ::RoboCompPersonPosition::MapPose& personPosition, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __RoboCompPersonPosition__PersonPosition__personPose_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::RoboCompPersonPosition::PersonPosition* __del = dynamic_cast< ::IceDelegate::RoboCompPersonPosition::PersonPosition*>(__delBase.get());
            __del->personPose(personPosition, __ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::RoboCompPersonPosition::PersonPosition::begin_personPose(const ::RoboCompPersonPosition::MapPose& personPosition, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __RoboCompPersonPosition__PersonPosition__personPose_name, __del, __cookie);
    try
    {
        __result->__prepare(__RoboCompPersonPosition__PersonPosition__personPose_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(personPosition);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::RoboCompPersonPosition::PersonPosition::end_personPose(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __RoboCompPersonPosition__PersonPosition__personPose_name);
}

const ::std::string&
IceProxy::RoboCompPersonPosition::PersonPosition::ice_staticId()
{
    return ::RoboCompPersonPosition::PersonPosition::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::RoboCompPersonPosition::PersonPosition::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::RoboCompPersonPosition::PersonPosition);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::RoboCompPersonPosition::PersonPosition::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::RoboCompPersonPosition::PersonPosition);
}

::IceProxy::Ice::Object*
IceProxy::RoboCompPersonPosition::PersonPosition::__newInstance() const
{
    return new PersonPosition;
}

void
IceDelegateM::RoboCompPersonPosition::PersonPosition::personPose(const ::RoboCompPersonPosition::MapPose& personPosition, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __RoboCompPersonPosition__PersonPosition__personPose_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(personPosition);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

void
IceDelegateD::RoboCompPersonPosition::PersonPosition::personPose(const ::RoboCompPersonPosition::MapPose& personPosition, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::RoboCompPersonPosition::MapPose& __p_personPosition, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_personPosition(__p_personPosition)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::RoboCompPersonPosition::PersonPosition* servant = dynamic_cast< ::RoboCompPersonPosition::PersonPosition*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->personPose(_m_personPosition, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::RoboCompPersonPosition::MapPose& _m_personPosition;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __RoboCompPersonPosition__PersonPosition__personPose_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(personPosition, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::Object* RoboCompPersonPosition::upCast(::RoboCompPersonPosition::PersonPosition* p) { return p; }

namespace
{
const ::std::string __RoboCompPersonPosition__PersonPosition_ids[2] =
{
    "::Ice::Object",
    "::RoboCompPersonPosition::PersonPosition"
};

}

bool
RoboCompPersonPosition::PersonPosition::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__RoboCompPersonPosition__PersonPosition_ids, __RoboCompPersonPosition__PersonPosition_ids + 2, _s);
}

::std::vector< ::std::string>
RoboCompPersonPosition::PersonPosition::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__RoboCompPersonPosition__PersonPosition_ids[0], &__RoboCompPersonPosition__PersonPosition_ids[2]);
}

const ::std::string&
RoboCompPersonPosition::PersonPosition::ice_id(const ::Ice::Current&) const
{
    return __RoboCompPersonPosition__PersonPosition_ids[1];
}

const ::std::string&
RoboCompPersonPosition::PersonPosition::ice_staticId()
{
    return __RoboCompPersonPosition__PersonPosition_ids[1];
}

::Ice::DispatchStatus
RoboCompPersonPosition::PersonPosition::___personPose(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::RoboCompPersonPosition::MapPose personPosition;
    __is->read(personPosition);
    __inS.endReadParams();
    personPose(personPosition, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __RoboCompPersonPosition__PersonPosition_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "personPose"
};

}

::Ice::DispatchStatus
RoboCompPersonPosition::PersonPosition::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__RoboCompPersonPosition__PersonPosition_all, __RoboCompPersonPosition__PersonPosition_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __RoboCompPersonPosition__PersonPosition_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___personPose(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
RoboCompPersonPosition::PersonPosition::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
RoboCompPersonPosition::PersonPosition::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
RoboCompPersonPosition::__patch(PersonPositionPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::RoboCompPersonPosition::PersonPositionPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::RoboCompPersonPosition::PersonPosition::ice_staticId(), v);
    }
}
