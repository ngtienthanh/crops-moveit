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
 * Auto-generated by genmsg_cpp from file /home/tienthanh/workspace/ros/groovy/moveit/src/moveit_msgs/msg/DisplayTrajectory.msg
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_DISPLAYTRAJECTORY_H
#define MOVEIT_MSGS_MESSAGE_DISPLAYTRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/RobotTrajectory.h>
#include <moveit_msgs/RobotState.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct DisplayTrajectory_
{
  typedef DisplayTrajectory_<ContainerAllocator> Type;

  DisplayTrajectory_()
    : model_id()
    , trajectory()
    , trajectory_start()  {
    }
  DisplayTrajectory_(const ContainerAllocator& _alloc)
    : model_id(_alloc)
    , trajectory(_alloc)
    , trajectory_start(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_id_type;
  _model_id_type model_id;

   typedef std::vector< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> >::other >  _trajectory_type;
  _trajectory_type trajectory;

   typedef  ::moveit_msgs::RobotState_<ContainerAllocator>  _trajectory_start_type;
  _trajectory_start_type trajectory_start;




  typedef boost::shared_ptr< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct DisplayTrajectory_

typedef ::moveit_msgs::DisplayTrajectory_<std::allocator<void> > DisplayTrajectory;

typedef boost::shared_ptr< ::moveit_msgs::DisplayTrajectory > DisplayTrajectoryPtr;
typedef boost::shared_ptr< ::moveit_msgs::DisplayTrajectory const> DisplayTrajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'household_objects_database_msgs': ['/opt/ros/groovy/share/household_objects_database_msgs/msg'], 'shape_msgs': ['/opt/ros/groovy/share/shape_msgs/msg'], 'std_msgs': ['/opt/ros/groovy/share/std_msgs/msg'], 'moveit_msgs': ['/home/tienthanh/workspace/ros/groovy/moveit/devel/share/moveit_msgs/msg', '/home/tienthanh/workspace/ros/groovy/moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/groovy/share/trajectory_msgs/msg'], 'sensor_msgs': ['/opt/ros/groovy/share/sensor_msgs/msg'], 'object_recognition_msgs': ['/opt/ros/groovy/share/object_recognition_msgs/msg'], 'octomap_msgs': ['/opt/ros/groovy/share/octomap_msgs/msg'], 'manipulation_msgs': ['/opt/ros/groovy/share/manipulation_msgs/msg'], 'geometry_msgs': ['/opt/ros/groovy/share/geometry_msgs/msg'], 'actionlib_msgs': ['/opt/ros/groovy/share/actionlib_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "caee4ecd3bb590f67324c145953b7387";
  }

  static const char* value(const ::moveit_msgs::DisplayTrajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcaee4ecd3bb590f6ULL;
  static const uint64_t static_value2 = 0x7324c145953b7387ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/DisplayTrajectory";
  }

  static const char* value(const ::moveit_msgs::DisplayTrajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The model id for which this path has been generated\n\
string model_id\n\
\n\
# The representation of the path contains position values for all the joints that are moving along the path; a sequence of trajectories may be specified\n\
RobotTrajectory[] trajectory\n\
\n\
# The robot state is used to obtain positions for all/some of the joints of the robot. \n\
# It is used by the path display node to determine the positions of the joints that are not specified in the joint path message above. \n\
# If the robot state message contains joint position information for joints that are also mentioned in the joint path message, the positions in the joint path message will overwrite the positions specified in the robot state message. \n\
RobotState trajectory_start\n\
\n\
================================================================================\n\
MSG: moveit_msgs/RobotTrajectory\n\
trajectory_msgs/JointTrajectory joint_trajectory\n\
MultiDOFJointTrajectory multi_dof_joint_trajectory\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
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
MSG: trajectory_msgs/JointTrajectoryPoint\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
duration time_from_start\n\
================================================================================\n\
MSG: moveit_msgs/MultiDOFJointTrajectory\n\
# The header is used to specify the reference time for the trajectory durations\n\
Header header\n\
\n\
#A representation of a multi-dof joint trajectory\n\
string[] joint_names\n\
MultiDOFJointTrajectoryPoint[] points\n\
\n\
================================================================================\n\
MSG: moveit_msgs/MultiDOFJointTrajectoryPoint\n\
geometry_msgs/Transform[] transforms\n\
duration time_from_start\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
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
MSG: moveit_msgs/RobotState\n\
# This message contains information about the robot state, i.e. the positions of its joints and links\n\
sensor_msgs/JointState joint_state\n\
\n\
# Joints that may have multiple DOF are specified here\n\
MultiDOFJointState multi_dof_joint_state\n\
\n\
# Attached collision objects (attached to some link on the robot)\n\
AttachedCollisionObject[] attached_collision_objects\n\
\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
================================================================================\n\
MSG: moveit_msgs/MultiDOFJointState\n\
# A representation of a multi-dof joint state\n\
\n\
Header header\n\
\n\
string[] joint_names\n\
geometry_msgs/Transform[] joint_transforms\n\
\n\
================================================================================\n\
MSG: moveit_msgs/AttachedCollisionObject\n\
# The CollisionObject will be attached with a fixed joint to this link\n\
string link_name\n\
\n\
#This contains the actual shapes and poses for the CollisionObject\n\
#to be attached to the link\n\
#If action is remove and no object.id is set, all objects\n\
#attached to the link indicated by link_name will be removed\n\
CollisionObject object\n\
\n\
# The set of links that the attached objects are allowed to touch\n\
# by default - the link_name is already considered by default\n\
string[] touch_links\n\
\n\
# The weight of the attached object, if known\n\
float64 weight\n\
\n\
================================================================================\n\
MSG: moveit_msgs/CollisionObject\n\
# a header, used for interpreting the poses\n\
Header header\n\
\n\
# the id of the object (name used in MoveIt)\n\
string id\n\
\n\
# The object type in a database of known objects\n\
object_recognition_msgs/ObjectType type\n\
\n\
# the the collision geometries associated with the object;\n\
# their poses are with respect to the specified header\n\
\n\
# solid geometric primitives\n\
shape_msgs/SolidPrimitive[] primitives\n\
geometry_msgs/Pose[] primitive_poses\n\
\n\
# meshes\n\
shape_msgs/Mesh[] meshes\n\
geometry_msgs/Pose[] mesh_poses\n\
\n\
# bounding planes (equation is specified, but the plane can be oriented using an additional pose)\n\
shape_msgs/Plane[] planes\n\
geometry_msgs/Pose[] plane_poses\n\
\n\
# Puts the object into the environment\n\
#or updates the object if already added\n\
byte ADD=0\n\
\n\
# Removes the object from the environment entirely (everything that mages the specified id)\n\
byte REMOVE=1\n\
\n\
# Operation to be performed\n\
byte operation\n\
\n\
================================================================================\n\
MSG: object_recognition_msgs/ObjectType\n\
################################################## OBJECT ID #########################################################\n\
\n\
# Contains information about the type of a found object. Those two sets of parameters together uniquely define an\n\
# object\n\
\n\
# The key of the found object: the unique identifier in the given db\n\
string key\n\
\n\
# The db parameters stored as a JSON/compressed YAML string. An object id does not make sense without the corresponding\n\
# database. E.g., in object_recognition, it can look like: \"{'type':'CouchDB', 'root':'http://localhost'}\"\n\
# There is no conventional format for those parameters and it's nice to keep that flexibility.\n\
# The object_recognition_core as a generic DB type that can read those fields\n\
# Current examples:\n\
# For CouchDB:\n\
#   type: 'CouchDB'\n\
#   root: 'http://localhost:5984'\n\
#   collection: 'object_recognition'\n\
# For SQL household database:\n\
#   type: 'SqlHousehold'\n\
#   host: 'wgs36'\n\
#   port: 5432\n\
#   user: 'willow'\n\
#   password: 'willow'\n\
#   name: 'household_objects'\n\
#   module: 'tabletop'\n\
string db\n\
\n\
================================================================================\n\
MSG: shape_msgs/SolidPrimitive\n\
# Define box, sphere, cylinder, cone \n\
# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\
\n\
uint8 BOX=1\n\
uint8 SPHERE=2\n\
uint8 CYLINDER=3\n\
uint8 CONE=4\n\
\n\
# The type of the shape\n\
uint8 type\n\
\n\
\n\
# The dimensions of the shape\n\
float64[] dimensions\n\
\n\
# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\
\n\
# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n\
# sides of the box.\n\
uint8 BOX_X=0\n\
uint8 BOX_Y=1\n\
uint8 BOX_Z=2\n\
\n\
\n\
# For the SPHERE type, only one component is used, and it gives the radius of\n\
# the sphere.\n\
uint8 SPHERE_RADIUS=0\n\
\n\
\n\
# For the CYLINDER and CONE types, the center line is oriented along\n\
# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n\
# of dimensions gives the height of the cylinder (cone).  The\n\
# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n\
# radius of the base of the cylinder (cone).  Cone and cylinder\n\
# primitives are defined to be circular. The tip of the cone is\n\
# pointing up, along +Z axis.\n\
\n\
uint8 CYLINDER_HEIGHT=0\n\
uint8 CYLINDER_RADIUS=1\n\
\n\
uint8 CONE_HEIGHT=0\n\
uint8 CONE_RADIUS=1\n\
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
MSG: shape_msgs/Mesh\n\
# Definition of a mesh\n\
\n\
# list of triangles; the index values refer to positions in vertices[]\n\
MeshTriangle[] triangles\n\
\n\
# the actual vertices that make up the mesh\n\
geometry_msgs/Point[] vertices\n\
\n\
================================================================================\n\
MSG: shape_msgs/MeshTriangle\n\
# Definition of a triangle's vertices\n\
uint32[3] vertex_indices\n\
\n\
================================================================================\n\
MSG: shape_msgs/Plane\n\
# Representation of a plane, using the plane equation ax + by + cz + d = 0\n\
\n\
# a := coef[0]\n\
# b := coef[1]\n\
# c := coef[2]\n\
# d := coef[3]\n\
\n\
float64[4] coef\n\
\n\
";
  }

  static const char* value(const ::moveit_msgs::DisplayTrajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_id);
      stream.next(m.trajectory);
      stream.next(m.trajectory_start);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct DisplayTrajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::DisplayTrajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::DisplayTrajectory_<ContainerAllocator>& v)
  {
    s << indent << "model_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_id);
    s << indent << "trajectory[]" << std::endl;
    for (size_t i = 0; i < v.trajectory.size(); ++i)
    {
      s << indent << "  trajectory[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::RobotTrajectory_<ContainerAllocator> >::stream(s, indent + "    ", v.trajectory[i]);
    }
    s << indent << "trajectory_start: ";
    s << std::endl;
    Printer< ::moveit_msgs::RobotState_<ContainerAllocator> >::stream(s, indent + "  ", v.trajectory_start);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_DISPLAYTRAJECTORY_H
