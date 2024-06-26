//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.13.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "StringRange.Pregenerated.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion
// constants
// initializer
void StringRange::initialize()
{
}
// primary ctor
StringRange::StringRange(int32_t first_, int32_t last_) :
rd::IPolymorphicSerializable()
,first_(std::move(first_)), last_(std::move(last_))
{
    initialize();
}
// secondary constructor
// default ctors and dtors
// reader
StringRange StringRange::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    auto first_ = buffer.read_integral<int32_t>();
    auto last_ = buffer.read_integral<int32_t>();
    StringRange res{std::move(first_), std::move(last_)};
    return res;
}
// writer
void StringRange::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
    buffer.write_integral(first_);
    buffer.write_integral(last_);
}
// virtual init
// identify
// getters
int32_t const & StringRange::get_first() const
{
    return first_;
}
int32_t const & StringRange::get_last() const
{
    return last_;
}
// intern
// equals trait
bool StringRange::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<StringRange const&>(object);
    if (this == &other) return true;
    if (this->first_ != other.first_) return false;
    if (this->last_ != other.last_) return false;
    
    return true;
}
// equality operators
bool operator==(const StringRange &lhs, const StringRange &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const StringRange &lhs, const StringRange &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t StringRange::hashCode() const noexcept
{
    size_t __r = 0;
    __r = __r * 31 + (rd::hash<int32_t>()(get_first()));
    __r = __r * 31 + (rd::hash<int32_t>()(get_last()));
    return __r;
}
// type name trait
std::string StringRange::type_name() const
{
    return "StringRange";
}
// static type name trait
std::string StringRange::static_type_name()
{
    return "StringRange";
}
// polymorphic to string
std::string StringRange::toString() const
{
    std::string res = "StringRange\n";
    res += "\tfirst = ";
    res += rd::to_string(first_);
    res += '\n';
    res += "\tlast = ";
    res += rd::to_string(last_);
    res += '\n';
    return res;
}
// external to string
std::string to_string(const StringRange & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

