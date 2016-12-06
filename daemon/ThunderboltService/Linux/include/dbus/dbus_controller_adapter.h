
/*
 *	This file was automatically generated by dbusxx-xml2cpp; DO NOT EDIT!
 */

#ifndef __dbusxx___home_eas_intel_dev2_bld_daemon_debug_dbus_controller_adapter_h__ADAPTOR_MARSHAL_H
#define __dbusxx___home_eas_intel_dev2_bld_daemon_debug_dbus_controller_adapter_h__ADAPTOR_MARSHAL_H

#include "tbtdbus.h"
#include <cassert>
#include <type_traits>

namespace com {
namespace Intel {
namespace Thunderbolt1 {

class controller_adaptor
: public ::DBus::InterfaceAdaptor
{
public:

    controller_adaptor()
    : ::DBus::InterfaceAdaptor("com.Intel.Thunderbolt1.controller")
    {
        register_method(controller_adaptor, GetControllerID, _GetControllerID_stub);
        register_method(controller_adaptor, IsInSafeMode, _IsInSafeMode_stub);
        register_method(controller_adaptor, UpdateFirmware, _UpdateFirmware_stub);
        register_method(controller_adaptor, GetCurrentNVMVersion, _GetCurrentNVMVersion_stub);
        register_method(controller_adaptor, ReadFirmware, _ReadFirmware_stub);
    }

    // The introspection API changed from DBus-C++ library version 0.5 to 
    // version 0.9.  In particular, the introspect() virtual function signature
    // changed from returning IntrospectedInterface* to returning 
    // IntrospectedInterface* const.  See dbus_controllers_adapter.h for
    // further discussion.

#if DBUS_CXX_INTROSPECT_HAS_SPURIOUS_CONST
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wignored-qualifiers"
#endif

    ::DBus::IntrospectedInterface*
#ifdef DBUS_CXX_INTROSPECT_HAS_SPURIOUS_CONST
    const
#endif
    introspect() const
    {
        static ::DBus::IntrospectedArgument GetControllerID_args[] = 
        {
            { "rc", "u", false },
            { "errstr", "s", false },
            { "id", "s", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument IsInSafeMode_args[] = 
        {
            { "rc", "u", false },
            { "errstr", "s", false },
            { "safeMode", "b", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument UpdateFirmware_args[] = 
        {
            { "buffer", "ay", true },
            { "rc", "u", false },
            { "txnid", "u", false },
            { "errstr", "s", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument GetCurrentNVMVersion_args[] = 
        {
            { "rc", "u", false },
            { "errstr", "s", false },
            { "major", "u", false },
            { "minor", "u", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument ReadFirmware_args[] = 
        {
            { "offset", "u", true },
            { "size", "u", true },
            { "rc", "u", false },
            { "errstr", "s", false },
            { "data", "ay", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedArgument UpdateFirmwareResponse_args[] = 
        {
            { "rc", "u", false },
            { "txnid", "u", false },
            { "errstr", "s", false },
            { 0, 0, 0 }
        };
        static ::DBus::IntrospectedMethod controller_adaptor_methods[] = 
        {
            { "GetControllerID", GetControllerID_args },
            { "IsInSafeMode", IsInSafeMode_args },
            { "UpdateFirmware", UpdateFirmware_args },
            { "GetCurrentNVMVersion", GetCurrentNVMVersion_args },
            { "ReadFirmware", ReadFirmware_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedMethod controller_adaptor_signals[] = 
        {
            { "UpdateFirmwareResponse", UpdateFirmwareResponse_args },
            { 0, 0 }
        };
        static ::DBus::IntrospectedProperty controller_adaptor_properties[] = 
        {
            { 0, 0, 0, 0 }
        };
        static ::DBus::IntrospectedInterface controller_adaptor_interface = 
        {
            "com.Intel.Thunderbolt1.controller",
            controller_adaptor_methods,
            controller_adaptor_signals,
            controller_adaptor_properties
        };
        return &controller_adaptor_interface;
    }
#if DBUS_CXX_INTROSPECT_HAS_SPURIOUS_CONST
#pragma GCC diagnostic pop
#endif

public:

    /* properties exposed by this interface, use
     * property() and property(value) to get and set a particular property
     */

public:

    /* methods exported by this interface,
     * you will have to implement them in your ObjectAdaptor
     */
    virtual void GetControllerID(uint32_t& rc, std::string& errstr, std::string& id) = 0;
    virtual void IsInSafeMode(uint32_t& rc, std::string& errstr, bool& safeMode) = 0;
    virtual void UpdateFirmware(const std::vector< uint8_t >& buffer, uint32_t& rc, uint32_t& txnid, std::string& errstr) = 0;
    virtual void GetCurrentNVMVersion(uint32_t& rc, std::string& errstr, uint32_t& major, uint32_t& minor) = 0;
    virtual void ReadFirmware(const uint32_t& offset, const uint32_t& size, uint32_t& rc, std::string& errstr, std::vector< uint8_t >& data) = 0;

public:

    /* signal emitters for this interface
     */
    void UpdateFirmwareResponse(const uint32_t& arg1, const uint32_t& arg2, const std::string& arg3)
    {
        ::DBus::SignalMessage sig("UpdateFirmwareResponse");
        ::DBus::MessageIter wi = sig.writer();
        wi << arg1;
        wi << arg2;
        wi << arg3;
        emit_signal(sig);
    }

private:

    /* unmarshalers (to unpack the DBus message before calling the actual interface method)
     */
    ::DBus::Message _GetControllerID_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argout1;
        std::string argout2;
        std::string argout3;
        GetControllerID(argout1, argout2, argout3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        return reply;
    }
    ::DBus::Message _IsInSafeMode_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argout1;
        std::string argout2;
        bool argout3;
        IsInSafeMode(argout1, argout2, argout3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        return reply;
    }
    ::DBus::Message _UpdateFirmware_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        std::vector< uint8_t > argin1; ri >> argin1;
        uint32_t argout1;
        uint32_t argout2;
        std::string argout3;
        UpdateFirmware(argin1, argout1, argout2, argout3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        return reply;
    }
    ::DBus::Message _GetCurrentNVMVersion_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argout1;
        std::string argout2;
        uint32_t argout3;
        uint32_t argout4;
        GetCurrentNVMVersion(argout1, argout2, argout3, argout4);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        wi << argout4;
        return reply;
    }
    ::DBus::Message _ReadFirmware_stub(const ::DBus::CallMessage &call)
    {
        ::DBus::MessageIter ri = call.reader();

        uint32_t argin1; ri >> argin1;
        uint32_t argin2; ri >> argin2;
        uint32_t argout1;
        std::string argout2;
        std::vector< uint8_t > argout3;
        ReadFirmware(argin1, argin2, argout1, argout2, argout3);
        ::DBus::ReturnMessage reply(call);
        ::DBus::MessageIter wi = reply.writer();
        wi << argout1;
        wi << argout2;
        wi << argout3;
        return reply;
    }
};

} } } 
#endif //__dbusxx___home_eas_intel_dev2_bld_daemon_debug_dbus_controller_adapter_h__ADAPTOR_MARSHAL_H