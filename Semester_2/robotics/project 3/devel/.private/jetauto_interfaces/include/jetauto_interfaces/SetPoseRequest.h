// Generated by gencpp from file jetauto_interfaces/SetPoseRequest.msg
// DO NOT EDIT!


#ifndef JETAUTO_INTERFACES_MESSAGE_SETPOSEREQUEST_H
#define JETAUTO_INTERFACES_MESSAGE_SETPOSEREQUEST_H


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
struct SetPoseRequest_
{
  typedef SetPoseRequest_<ContainerAllocator> Type;

  SetPoseRequest_()
    : position()
    , orientation()
    , tolerance()
    , resolution(0.0)  {
    }
  SetPoseRequest_(const ContainerAllocator& _alloc)
    : position(_alloc)
    , orientation(_alloc)
    , tolerance(_alloc)
    , resolution(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _position_type;
  _position_type position;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _orientation_type;
  _orientation_type orientation;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _tolerance_type;
  _tolerance_type tolerance;

   typedef float _resolution_type;
  _resolution_type resolution;





  typedef boost::shared_ptr< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetPoseRequest_

typedef ::jetauto_interfaces::SetPoseRequest_<std::allocator<void> > SetPoseRequest;

typedef boost::shared_ptr< ::jetauto_interfaces::SetPoseRequest > SetPoseRequestPtr;
typedef boost::shared_ptr< ::jetauto_interfaces::SetPoseRequest const> SetPoseRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.orientation == rhs.orientation &&
    lhs.tolerance == rhs.tolerance &&
    lhs.resolution == rhs.resolution;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jetauto_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8627915f2b86c07c590c6fe745292a5d";
  }

  static const char* value(const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8627915f2b86c07cULL;
  static const uint64_t static_value2 = 0x590c6fe745292a5dULL;
};

template<class ContainerAllocator>
struct DataType< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetauto_interfaces/SetPoseRequest";
  }

  static const char* value(const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] position\n"
"float32[] orientation\n"
"float32[] tolerance\n"
"float32 resolution\n"
;
  }

  static const char* value(const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.orientation);
      stream.next(m.tolerance);
      stream.next(m.resolution);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetPoseRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetauto_interfaces::SetPoseRequest_<ContainerAllocator>& v)
  {
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
    s << indent << "tolerance[]" << std::endl;
    for (size_t i = 0; i < v.tolerance.size(); ++i)
    {
      s << indent << "  tolerance[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.tolerance[i]);
    }
    s << indent << "resolution: ";
    Printer<float>::stream(s, indent + "  ", v.resolution);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETAUTO_INTERFACES_MESSAGE_SETPOSEREQUEST_H
