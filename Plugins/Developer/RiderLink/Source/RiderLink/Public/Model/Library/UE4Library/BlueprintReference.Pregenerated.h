//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.13.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#ifndef BLUEPRINTREFERENCE_PREGENERATED_H
#define BLUEPRINTREFERENCE_PREGENERATED_H


#include "protocol/Protocol.h"
#include "types/DateTime.h"
#include "impl/RdSignal.h"
#include "impl/RdProperty.h"
#include "impl/RdList.h"
#include "impl/RdSet.h"
#include "impl/RdMap.h"
#include "base/ISerializersOwner.h"
#include "base/IUnknownInstance.h"
#include "serialization/ISerializable.h"
#include "serialization/Polymorphic.h"
#include "serialization/NullableSerializer.h"
#include "serialization/ArraySerializer.h"
#include "serialization/InternedSerializer.h"
#include "serialization/SerializationCtx.h"
#include "serialization/Serializers.h"
#include "ext/RdExtBase.h"
#include "task/RdCall.h"
#include "task/RdEndpoint.h"
#include "task/RdSymmetricCall.h"
#include "std/to_string.h"
#include "std/hash.h"
#include "std/allocator.h"
#include "util/enum.h"
#include "util/gen_util.h"

#include <cstring>
#include <cstdint>
#include <vector>
#include <ctime>

#include "thirdparty.hpp"
#include "instantiations_UE4Library.h"

#include "Containers/UnrealString.h"

#include "UE4TypesMarshallers.h"
#include "Runtime/Core/Public/Containers/Array.h"
#include "Runtime/Core/Public/Containers/ContainerAllocationPolicies.h"


#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

/// <summary>
/// <p>Generated from: UE4Library.kt:204</p>
/// </summary>
namespace JetBrains {
namespace EditorPlugin {

// data
class RIDERLINK_API BlueprintReference : public rd::IPolymorphicSerializable {

private:
    // custom serializers

public:
    // constants

protected:
    // fields
    FString pathName_;
    FString guid_;
    

private:
    // initializer
    void initialize();

public:
    // primary ctor
    BlueprintReference(FString pathName_, FString guid_);
    
    // deconstruct trait
    #ifdef __cpp_structured_bindings
    template <size_t I>
    decltype(auto) get() const
    {
        if constexpr (I < 0 || I >= 2) static_assert (I < 0 || I >= 2, "I < 0 || I >= 2");
        else if constexpr (I==0)  return static_cast<const FString&>(get_pathName());
        else if constexpr (I==1)  return static_cast<const FString&>(get_guid());
    }
    #endif
    
    // default ctors and dtors
    
    BlueprintReference() = delete;
    
    BlueprintReference(BlueprintReference const &) = default;
    
    BlueprintReference& operator=(BlueprintReference const &) = default;
    
    BlueprintReference(BlueprintReference &&) = default;
    
    BlueprintReference& operator=(BlueprintReference &&) = default;
    
    virtual ~BlueprintReference() = default;
    
    // reader
    static BlueprintReference read(rd::SerializationCtx& ctx, rd::Buffer & buffer);
    
    // writer
    void write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const override;
    
    // virtual init
    
    // identify
    
    // getters
    FString const & get_pathName() const;
    FString const & get_guid() const;
    
    // intern

private:
    // equals trait
    bool equals(rd::ISerializable const& object) const override;

public:
    // equality operators
    friend bool operator==(const BlueprintReference &lhs, const BlueprintReference &rhs);
    friend bool operator!=(const BlueprintReference &lhs, const BlueprintReference &rhs);
    // hash code trait
    size_t hashCode() const noexcept override;
    // type name trait
    std::string type_name() const override;
    // static type name trait
    static std::string static_type_name();

private:
    // polymorphic to string
    std::string toString() const override;

public:
    // external to string
    friend std::string to_string(const BlueprintReference & value);
};

}
}

// hash code trait
namespace rd {

template <>
struct hash<JetBrains::EditorPlugin::BlueprintReference> {
    size_t operator()(const JetBrains::EditorPlugin::BlueprintReference & value) const noexcept {
        return value.hashCode();
    }
};

}

#ifdef __cpp_structured_bindings
// tuple trait
namespace std {

template <>
class tuple_size<JetBrains::EditorPlugin::BlueprintReference> : public integral_constant<size_t, 2> {};

template <size_t I>
class tuple_element<I, JetBrains::EditorPlugin::BlueprintReference> {
public:
    using type = decltype (declval<JetBrains::EditorPlugin::BlueprintReference>().get<I>());
};

}
#endif

#ifdef _MSC_VER
#pragma warning( pop )
#endif



#endif // BLUEPRINTREFERENCE_PREGENERATED_H
