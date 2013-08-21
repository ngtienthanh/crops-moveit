/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/tienthanh/workspace/ros/groovy/moveit/src/moveit_msgs/msg/CollisionMap.msg
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_COLLISIONMAP_H
#define MOVEIT_MSGS_MESSAGE_COLLISIONMAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <moveit_msgs/OrientedBoundingBox.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct CollisionMap_
{
  typedef CollisionMap_<ContainerAllocator> Type;

  CollisionMap_()
    : header()
    , boxes()  {
    }
  CollisionMap_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , boxes(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >::other >  _boxes_type;
  _boxes_type boxes;




  typedef boost::shared_ptr< ::moveit_msgs::CollisionMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::CollisionMap_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct CollisionMap_

typedef ::moveit_msgs::CollisionMap_<std::allocator<void> > CollisionMap;

typedef boost::shared_ptr< ::moveit_msgs::CollisionMap > CollisionMapPtr;
typedef boost::shared_ptr< ::moveit_msgs::CollisionMap const> CollisionMapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::CollisionMap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::CollisionMap_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'household_objects_database_msgs': ['/opt/ros/groovy/share/household_objects_database_msgs/msg'], 'shape_msgs': ['/opt/ros/groovy/share/shape_msgs/msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'moveit_msgs': ['/home/tienthanh/workspace/ros/groovy/moveit/devel/share/moveit_msgs/msg', '/home/tienthanh/workspace/ros/groovy/moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/groovy/share/trajectory_msgs/msg'], 'sensor_msgs': ['/opt/ros/groovy/share/sensor_msgs/msg'], 'object_recognition_msgs': ['/opt/ros/groovy/share/object_recognition_msgs/msg'], 'octomap_msgs': ['/opt/ros/groovy/share/octomap_msgs/msg'], 'manipulation_msgs': ['/opt/ros/groovy/share/manipulation_msgs/msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CollisionMap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CollisionMap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CollisionMap_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba8b828774cfbf26889eb3454fc94005";
  }

  static const char* value(const ::moveit_msgs::CollisionMap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba8b828774cfbf26ULL;
  static const uint64_t static_value2 = 0x889eb3454fc94005ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/CollisionMap";
  }

  static const char* value(const ::moveit_msgs::CollisionMap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#header for interpreting box positions\n\
Header header\n\
\n\
#boxes for use in collision testing\n\
OrientedBoundingBox[] boxes\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: moveit_msgs/OrientedBoundingBox\n\
# the pose of the box\n\
geometry_msgs/Pose pose\n\
\n\
# the extents of the box, assuming the center is at the origin\n\
geometry_msgs/Point32 extents\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::moveit_msgs::CollisionMap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.boxes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CollisionMap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::CollisionMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::CollisionMap_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "boxes[]" << std::endl;
    for (size_t i = 0; i < v.boxes.size(); ++i)
    {
      s << indent << "  boxes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::OrientedBoundingBox_<ContainerAllocator> >::stream(s, indent + "    ", v.boxes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_COLLISIONMAP_H