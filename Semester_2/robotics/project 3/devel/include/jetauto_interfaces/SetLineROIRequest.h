// Generated by gencpp from file jetauto_interfaces/SetLineROIRequest.msg
// DO NOT EDIT!


#ifndef JETAUTO_INTERFACES_MESSAGE_SETLINEROIREQUEST_H
#define JETAUTO_INTERFACES_MESSAGE_SETLINEROIREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <jetauto_interfaces/LineROI.h>

namespace jetauto_interfaces
{
template <class ContainerAllocator>
struct SetLineROIRequest_
{
  typedef SetLineROIRequest_<ContainerAllocator> Type;

  SetLineROIRequest_()
    : data()  {
    }
  SetLineROIRequest_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::jetauto_interfaces::LineROI_<ContainerAllocator>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetLineROIRequest_

typedef ::jetauto_interfaces::SetLineROIRequest_<std::allocator<void> > SetLineROIRequest;

typedef boost::shared_ptr< ::jetauto_interfaces::SetLineROIRequest > SetLineROIRequestPtr;
typedef boost::shared_ptr< ::jetauto_interfaces::SetLineROIRequest const> SetLineROIRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jetauto_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d2d94ea1712440788e5286834c2903c3";
  }

  static const char* value(const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd2d94ea171244078ULL;
  static const uint64_t static_value2 = 0x8e5286834c2903c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetauto_interfaces/SetLineROIRequest";
  }

  static const char* value(const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetauto_interfaces/LineROI data\n"
"\n"
"================================================================================\n"
"MSG: jetauto_interfaces/LineROI\n"
"jetauto_interfaces/ROI roi_up\n"
"jetauto_interfaces/ROI roi_center\n"
"jetauto_interfaces/ROI roi_down\n"
"\n"
"================================================================================\n"
"MSG: jetauto_interfaces/ROI\n"
"int16 y_min\n"
"int16 y_max\n"
"int16 x_min\n"
"int16 x_max\n"
"float32 scale\n"
;
  }

  static const char* value(const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLineROIRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetauto_interfaces::SetLineROIRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    s << std::endl;
    Printer< ::jetauto_interfaces::LineROI_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETAUTO_INTERFACES_MESSAGE_SETLINEROIREQUEST_H
