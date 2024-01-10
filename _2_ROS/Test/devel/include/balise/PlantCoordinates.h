// Generated by gencpp from file balise/PlantCoordinates.msg
// DO NOT EDIT!


#ifndef BALISE_MESSAGE_PLANTCOORDINATES_H
#define BALISE_MESSAGE_PLANTCOORDINATES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace balise
{
template <class ContainerAllocator>
struct PlantCoordinates_
{
  typedef PlantCoordinates_<ContainerAllocator> Type;

  PlantCoordinates_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)
    , id(0)  {
    }
  PlantCoordinates_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)
    , id(0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;

   typedef uint32_t _id_type;
  _id_type id;





  typedef boost::shared_ptr< ::balise::PlantCoordinates_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::balise::PlantCoordinates_<ContainerAllocator> const> ConstPtr;

}; // struct PlantCoordinates_

typedef ::balise::PlantCoordinates_<std::allocator<void> > PlantCoordinates;

typedef boost::shared_ptr< ::balise::PlantCoordinates > PlantCoordinatesPtr;
typedef boost::shared_ptr< ::balise::PlantCoordinates const> PlantCoordinatesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::balise::PlantCoordinates_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::balise::PlantCoordinates_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::balise::PlantCoordinates_<ContainerAllocator1> & lhs, const ::balise::PlantCoordinates_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.theta == rhs.theta &&
    lhs.id == rhs.id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::balise::PlantCoordinates_<ContainerAllocator1> & lhs, const ::balise::PlantCoordinates_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace balise

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::balise::PlantCoordinates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::balise::PlantCoordinates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::balise::PlantCoordinates_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::balise::PlantCoordinates_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::balise::PlantCoordinates_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::balise::PlantCoordinates_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::balise::PlantCoordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7315a950cf4918ab18c91703ecd24e3b";
  }

  static const char* value(const ::balise::PlantCoordinates_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7315a950cf4918abULL;
  static const uint64_t static_value2 = 0x18c91703ecd24e3bULL;
};

template<class ContainerAllocator>
struct DataType< ::balise::PlantCoordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "balise/PlantCoordinates";
  }

  static const char* value(const ::balise::PlantCoordinates_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::balise::PlantCoordinates_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
"float32 theta\n"
"uint32 id\n"
;
  }

  static const char* value(const ::balise::PlantCoordinates_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::balise::PlantCoordinates_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlantCoordinates_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::balise::PlantCoordinates_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::balise::PlantCoordinates_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
    s << indent << "id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BALISE_MESSAGE_PLANTCOORDINATES_H
