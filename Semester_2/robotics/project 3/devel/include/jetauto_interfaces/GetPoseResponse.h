// Generated by gencpp from file jetauto_interfaces/GetPoseResponse.msg
// DO NOT EDIT!


#ifndef JETAUTO_INTERFACES_MESSAGE_GETPOSERESPONSE_H
#define JETAUTO_INTERFACES_MESSAGE_GETPOSERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace jetauto_interfaces
{
template <class ContainerAllocator>
struct GetPoseResponse_
{
  typedef GetPoseResponse_<ContainerAllocator> Type;

  GetPoseResponse_()
    : success(false)
    , position()
    , orientation()  {
    }
  GetPoseResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , position(_alloc)
    , orientation(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _position_type;
  _position_type position;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _orientation_type;
  _orientation_type orientation;





  typedef boost::shared_ptr< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPoseResponse_

typedef ::jetauto_interfaces::GetPoseResponse_<std::allocator<void> > GetPoseResponse;

typedef boost::shared_ptr< ::jetauto_interfaces::GetPoseResponse > GetPoseResponsePtr;
typedef boost::shared_ptr< ::jetauto_interfaces::GetPoseResponse const> GetPoseResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.position == rhs.position &&
    lhs.orientation == rhs.orientation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jetauto_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "15f95f5538fad94dd79708adc832f5c7";
  }

  static const char* value(const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x15f95f5538fad94dULL;
  static const uint64_t static_value2 = 0xd79708adc832f5c7ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetauto_interfaces/GetPoseResponse";
  }

  static const char* value(const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"float32[] position\n"
"float32[] orientation\n"
"\n"
;
  }

  static const char* value(const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.position);
      stream.next(m.orientation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPoseResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetauto_interfaces::GetPoseResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "orientation[]" << std::endl;
    for (size_t i = 0; i < v.orientation.size(); ++i)
    {
      s << indent << "  orientation[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.orientation[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETAUTO_INTERFACES_MESSAGE_GETPOSERESPONSE_H
