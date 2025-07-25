// Generated by gencpp from file jetauto_interfaces/SetColorRGBARequest.msg
// DO NOT EDIT!


#ifndef JETAUTO_INTERFACES_MESSAGE_SETCOLORRGBAREQUEST_H
#define JETAUTO_INTERFACES_MESSAGE_SETCOLORRGBAREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/ColorRGBA.h>

namespace jetauto_interfaces
{
template <class ContainerAllocator>
struct SetColorRGBARequest_
{
  typedef SetColorRGBARequest_<ContainerAllocator> Type;

  SetColorRGBARequest_()
    : data()  {
    }
  SetColorRGBARequest_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::ColorRGBA_<ContainerAllocator>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetColorRGBARequest_

typedef ::jetauto_interfaces::SetColorRGBARequest_<std::allocator<void> > SetColorRGBARequest;

typedef boost::shared_ptr< ::jetauto_interfaces::SetColorRGBARequest > SetColorRGBARequestPtr;
typedef boost::shared_ptr< ::jetauto_interfaces::SetColorRGBARequest const> SetColorRGBARequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jetauto_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61714ccdbab6d68e5c7a3305a077f115";
  }

  static const char* value(const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61714ccdbab6d68eULL;
  static const uint64_t static_value2 = 0x5c7a3305a077f115ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetauto_interfaces/SetColorRGBARequest";
  }

  static const char* value(const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/ColorRGBA data\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/ColorRGBA\n"
"float32 r\n"
"float32 g\n"
"float32 b\n"
"float32 a\n"
;
  }

  static const char* value(const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetColorRGBARequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetauto_interfaces::SetColorRGBARequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    s << std::endl;
    Printer< ::std_msgs::ColorRGBA_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETAUTO_INTERFACES_MESSAGE_SETCOLORRGBAREQUEST_H
