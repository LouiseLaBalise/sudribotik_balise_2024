// Generated by gencpp from file balise_msgs/ArrayPositionPx.msg
// DO NOT EDIT!


#ifndef BALISE_MSGS_MESSAGE_ARRAYPOSITIONPX_H
#define BALISE_MSGS_MESSAGE_ARRAYPOSITIONPX_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <balise_msgs/PositionPx.h>

namespace balise_msgs
{
template <class ContainerAllocator>
struct ArrayPositionPx_
{
  typedef ArrayPositionPx_<ContainerAllocator> Type;

  ArrayPositionPx_()
    : header()
    , array_of_positionspx()  {
    }
  ArrayPositionPx_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , array_of_positionspx(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::balise_msgs::PositionPx_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::balise_msgs::PositionPx_<ContainerAllocator> >> _array_of_positionspx_type;
  _array_of_positionspx_type array_of_positionspx;





  typedef boost::shared_ptr< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> const> ConstPtr;

}; // struct ArrayPositionPx_

typedef ::balise_msgs::ArrayPositionPx_<std::allocator<void> > ArrayPositionPx;

typedef boost::shared_ptr< ::balise_msgs::ArrayPositionPx > ArrayPositionPxPtr;
typedef boost::shared_ptr< ::balise_msgs::ArrayPositionPx const> ArrayPositionPxConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::balise_msgs::ArrayPositionPx_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::balise_msgs::ArrayPositionPx_<ContainerAllocator1> & lhs, const ::balise_msgs::ArrayPositionPx_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.array_of_positionspx == rhs.array_of_positionspx;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::balise_msgs::ArrayPositionPx_<ContainerAllocator1> & lhs, const ::balise_msgs::ArrayPositionPx_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace balise_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "74175f7ab9c85114e7078a9141456233";
  }

  static const char* value(const ::balise_msgs::ArrayPositionPx_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x74175f7ab9c85114ULL;
  static const uint64_t static_value2 = 0xe7078a9141456233ULL;
};

template<class ContainerAllocator>
struct DataType< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "balise_msgs/ArrayPositionPx";
  }

  static const char* value(const ::balise_msgs::ArrayPositionPx_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"PositionPx[] array_of_positionspx\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: balise_msgs/PositionPx\n"
"int32 x\n"
"int32 y \n"
"int32 theta\n"
;
  }

  static const char* value(const ::balise_msgs::ArrayPositionPx_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.array_of_positionspx);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ArrayPositionPx_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::balise_msgs::ArrayPositionPx_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::balise_msgs::ArrayPositionPx_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "array_of_positionspx[]" << std::endl;
    for (size_t i = 0; i < v.array_of_positionspx.size(); ++i)
    {
      s << indent << "  array_of_positionspx[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::balise_msgs::PositionPx_<ContainerAllocator> >::stream(s, indent + "    ", v.array_of_positionspx[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BALISE_MSGS_MESSAGE_ARRAYPOSITIONPX_H
