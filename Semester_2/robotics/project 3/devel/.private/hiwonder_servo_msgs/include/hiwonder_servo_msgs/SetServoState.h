// Generated by gencpp from file hiwonder_servo_msgs/SetServoState.msg
// DO NOT EDIT!


#ifndef HIWONDER_SERVO_MSGS_MESSAGE_SETSERVOSTATE_H
#define HIWONDER_SERVO_MSGS_MESSAGE_SETSERVOSTATE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hiwonder_servo_msgs
{
template <class ContainerAllocator>
struct SetServoState_
{
  typedef SetServoState_<ContainerAllocator> Type;

  SetServoState_()
    : cmd()
    , param()  {
    }
  SetServoState_(const ContainerAllocator& _alloc)
    : cmd(_alloc)
    , param(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _cmd_type;
  _cmd_type cmd;

   typedef std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> _param_type;
  _param_type param;





  typedef boost::shared_ptr< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> const> ConstPtr;

}; // struct SetServoState_

typedef ::hiwonder_servo_msgs::SetServoState_<std::allocator<void> > SetServoState;

typedef boost::shared_ptr< ::hiwonder_servo_msgs::SetServoState > SetServoStatePtr;
typedef boost::shared_ptr< ::hiwonder_servo_msgs::SetServoState const> SetServoStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator1> & lhs, const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd &&
    lhs.param == rhs.param;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator1> & lhs, const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace hiwonder_servo_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "495232b75d6f89b16edefd5f6ad78757";
  }

  static const char* value(const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x495232b75d6f89b1ULL;
  static const uint64_t static_value2 = 0x6edefd5f6ad78757ULL;
};

template<class ContainerAllocator>
struct DataType< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hiwonder_servo_msgs/SetServoState";
  }

  static const char* value(const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string cmd\n"
"int16[] param\n"
;
  }

  static const char* value(const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.param);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetServoState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hiwonder_servo_msgs::SetServoState_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.cmd);
    s << indent << "param[]" << std::endl;
    for (size_t i = 0; i < v.param.size(); ++i)
    {
      s << indent << "  param[" << i << "]: ";
      Printer<int16_t>::stream(s, indent + "  ", v.param[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HIWONDER_SERVO_MSGS_MESSAGE_SETSERVOSTATE_H
