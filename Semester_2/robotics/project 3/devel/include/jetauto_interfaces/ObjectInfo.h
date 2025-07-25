// Generated by gencpp from file jetauto_interfaces/ObjectInfo.msg
// DO NOT EDIT!


#ifndef JETAUTO_INTERFACES_MESSAGE_OBJECTINFO_H
#define JETAUTO_INTERFACES_MESSAGE_OBJECTINFO_H


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
struct ObjectInfo_
{
  typedef ObjectInfo_<ContainerAllocator> Type;

  ObjectInfo_()
    : class_name()
    , box()
    , score(0.0)  {
    }
  ObjectInfo_(const ContainerAllocator& _alloc)
    : class_name(_alloc)
    , box(_alloc)
    , score(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _class_name_type;
  _class_name_type class_name;

   typedef std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> _box_type;
  _box_type box;

   typedef float _score_type;
  _score_type score;





  typedef boost::shared_ptr< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectInfo_

typedef ::jetauto_interfaces::ObjectInfo_<std::allocator<void> > ObjectInfo;

typedef boost::shared_ptr< ::jetauto_interfaces::ObjectInfo > ObjectInfoPtr;
typedef boost::shared_ptr< ::jetauto_interfaces::ObjectInfo const> ObjectInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator2> & rhs)
{
  return lhs.class_name == rhs.class_name &&
    lhs.box == rhs.box &&
    lhs.score == rhs.score;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator1> & lhs, const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace jetauto_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ebf7cc78c9b0f49498f40ad8f4b8382";
  }

  static const char* value(const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ebf7cc78c9b0f49ULL;
  static const uint64_t static_value2 = 0x498f40ad8f4b8382ULL;
};

template<class ContainerAllocator>
struct DataType< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "jetauto_interfaces/ObjectInfo";
  }

  static const char* value(const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string class_name\n"
"int32[] box\n"
"float32 score\n"
;
  }

  static const char* value(const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.class_name);
      stream.next(m.box);
      stream.next(m.score);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::jetauto_interfaces::ObjectInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::jetauto_interfaces::ObjectInfo_<ContainerAllocator>& v)
  {
    s << indent << "class_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.class_name);
    s << indent << "box[]" << std::endl;
    for (size_t i = 0; i < v.box.size(); ++i)
    {
      s << indent << "  box[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.box[i]);
    }
    s << indent << "score: ";
    Printer<float>::stream(s, indent + "  ", v.score);
  }
};

} // namespace message_operations
} // namespace ros

#endif // JETAUTO_INTERFACES_MESSAGE_OBJECTINFO_H
