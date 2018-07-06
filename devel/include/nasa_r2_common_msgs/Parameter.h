// Generated by gencpp from file nasa_r2_common_msgs/Parameter.msg
// DO NOT EDIT!


#ifndef NASA_R2_COMMON_MSGS_MESSAGE_PARAMETER_H
#define NASA_R2_COMMON_MSGS_MESSAGE_PARAMETER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nasa_r2_common_msgs
{
template <class ContainerAllocator>
struct Parameter_
{
  typedef Parameter_<ContainerAllocator> Type;

  Parameter_()
    : key()
    , type(0)
    , value()  {
    }
  Parameter_(const ContainerAllocator& _alloc)
    : key(_alloc)
    , type(0)
    , value(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _key_type;
  _key_type key;

   typedef uint8_t _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _value_type;
  _value_type value;


    enum { STRING = 0u };
     enum { INT = 1u };
     enum { FLOAT = 2u };
     enum { BOOL = 3u };
     enum { LIST = 4u };
     enum { DICT = 5u };
 

  typedef boost::shared_ptr< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> const> ConstPtr;

}; // struct Parameter_

typedef ::nasa_r2_common_msgs::Parameter_<std::allocator<void> > Parameter;

typedef boost::shared_ptr< ::nasa_r2_common_msgs::Parameter > ParameterPtr;
typedef boost::shared_ptr< ::nasa_r2_common_msgs::Parameter const> ParameterConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nasa_r2_common_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'nasa_r2_common_msgs': ['/home/vincent/Project/r2_sim/src/deprecated_nasa_r2_common/nasa_r2_common_msgs/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'visualization_msgs': ['/opt/ros/indigo/share/visualization_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "36ddbd8f0ee48b1cd429060e624bb6d5";
  }

  static const char* value(const ::nasa_r2_common_msgs::Parameter_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x36ddbd8f0ee48b1cULL;
  static const uint64_t static_value2 = 0xd429060e624bb6d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nasa_r2_common_msgs/Parameter";
  }

  static const char* value(const ::nasa_r2_common_msgs::Parameter_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 STRING  = 0\n\
uint8 INT     = 1\n\
uint8 FLOAT   = 2\n\
uint8 BOOL    = 3\n\
uint8 LIST    = 4\n\
uint8 DICT    = 5\n\
\n\
string          key\n\
uint8           type\n\
string          value\n\
";
  }

  static const char* value(const ::nasa_r2_common_msgs::Parameter_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.type);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Parameter_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nasa_r2_common_msgs::Parameter_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nasa_r2_common_msgs::Parameter_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.key);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "value: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NASA_R2_COMMON_MSGS_MESSAGE_PARAMETER_H