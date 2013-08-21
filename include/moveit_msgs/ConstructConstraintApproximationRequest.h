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
 * Auto-generated by genmsg_cpp from file /home/tienthanh/workspace/ros/groovy/moveit/src/moveit_msgs/srv/ConstructConstraintApproximation.srv
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_CONSTRUCTCONSTRAINTAPPROXIMATIONREQUEST_H
#define MOVEIT_MSGS_MESSAGE_CONSTRUCTCONSTRAINTAPPROXIMATIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/RobotState.h>
#include <moveit_msgs/Constraints.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct ConstructConstraintApproximationRequest_
{
  typedef ConstructConstraintApproximationRequest_<ContainerAllocator> Type;

  ConstructConstraintApproximationRequest_()
    : start_state()
    , group()
    , state_space_parameterization()
    , samples(0)
    , edges_per_sample(0)
    , constraint()  {
    }
  ConstructConstraintApproximationRequest_(const ContainerAllocator& _alloc)
    : start_state(_alloc)
    , group(_alloc)
    , state_space_parameterization(_alloc)
    , samples(0)
    , edges_per_sample(0)
    , constraint(_alloc)  {
    }



   typedef  ::moveit_msgs::RobotState_<ContainerAllocator>  _start_state_type;
  _start_state_type start_state;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _group_type;
  _group_type group;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _state_space_parameterization_type;
  _state_space_parameterization_type state_space_parameterization;

   typedef uint32_t _samples_type;
  _samples_type samples;

   typedef uint32_t _edges_per_sample_type;
  _edges_per_sample_type edges_per_sample;

   typedef  ::moveit_msgs::Constraints_<ContainerAllocator>  _constraint_type;
  _constraint_type constraint;




  typedef boost::shared_ptr< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct ConstructConstraintApproximationRequest_

typedef ::moveit_msgs::ConstructConstraintApproximationRequest_<std::allocator<void> > ConstructConstraintApproximationRequest;

typedef boost::shared_ptr< ::moveit_msgs::ConstructConstraintApproximationRequest > ConstructConstraintApproximationRequestPtr;
typedef boost::shared_ptr< ::moveit_msgs::ConstructConstraintApproximationRequest const> ConstructConstraintApproximationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "947808c4dccc14c09d0dfa3031f59b69";
  }

  static const char* value(const ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x947808c4dccc14c0ULL;
  static const uint64_t static_value2 = 0x9d0dfa3031f59b69ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/ConstructConstraintApproximationRequest";
  }

  static const char* value(const ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
RobotState start_state\n\
\n\
\n\
string group\n\
\n\
\n\
string state_space_parameterization\n\
\n\
\n\
uint32 samples\n\
\n\
\n\
uint32 edges_per_sample\n\
\n\
\n\
Constraints constraint\n\
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
MSG: moveit_msgs/MultiDOFJointState\n\
# A representation of a multi-dof joint state\n\
\n\
Header header\n\
\n\
string[] joint_names\n\
geometry_msgs/Transform[] joint_transforms\n\
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
================================================================================\n\
MSG: moveit_msgs/Constraints\n\
# This message contains a list of motion planning constraints.\n\
# All constraints must be satisfied for a goal to be considered valid\n\
\n\
string name\n\
\n\
JointConstraint[] joint_constraints\n\
\n\
PositionConstraint[] position_constraints\n\
\n\
OrientationConstraint[] orientation_constraints\n\
\n\
VisibilityConstraint[] visibility_constraints\n\
\n\
================================================================================\n\
MSG: moveit_msgs/JointConstraint\n\
# Constrain the position of a joint to be within a certain bound\n\
string joint_name\n\
\n\
# the bound to be achieved is [position - tolerance_below, position + tolerance_above]\n\
float64 position\n\
float64 tolerance_above\n\
float64 tolerance_below\n\
\n\
# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n\
float64 weight\n\
================================================================================\n\
MSG: moveit_msgs/PositionConstraint\n\
# This message contains the definition of a position constraint.\n\
\n\
Header header\n\
\n\
# The robot link this constraint refers to\n\
string link_name\n\
\n\
# The offset (in the link frame) for the target point on the link we are planning for\n\
geometry_msgs/Vector3 target_point_offset\n\
\n\
# The volume this constraint refers to \n\
BoundingVolume constraint_region\n\
\n\
# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n\
float64 weight\n\
\n\
================================================================================\n\
MSG: moveit_msgs/BoundingVolume\n\
# Define a volume in 3D\n\
\n\
# A set of solid geometric primitives that make up the volume to define (as a union)\n\
shape_msgs/SolidPrimitive[] primitives\n\
\n\
# The poses at which the primitives are located\n\
geometry_msgs/Pose[] primitive_poses\n\
\n\
# In addition to primitives, meshes can be specified to add to the bounding volume (again, as union)\n\
shape_msgs/Mesh[] meshes\n\
\n\
# The poses at which the meshes are located\n\
geometry_msgs/Pose[] mesh_poses\n\
\n\
================================================================================\n\
MSG: moveit_msgs/OrientationConstraint\n\
# This message contains the definition of an orientation constraint.\n\
\n\
Header header\n\
\n\
# The desired orientation of the robot link specified as a quaternion\n\
geometry_msgs/Quaternion orientation\n\
\n\
# The robot link this constraint refers to\n\
string link_name\n\
\n\
# optional axis-angle error tolerances specified\n\
float64 absolute_x_axis_tolerance\n\
float64 absolute_y_axis_tolerance\n\
float64 absolute_z_axis_tolerance\n\
\n\
# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n\
float64 weight\n\
\n\
================================================================================\n\
MSG: moveit_msgs/VisibilityConstraint\n\
# The constraint is useful to maintain visibility to a disc (the target) in a particular frame.\n\
# This disc forms the base of a visibiliy cone whose tip is at the origin of the sensor.\n\
# Maintaining visibility is done by ensuring the robot does not obstruct the visibility cone.\n\
# Note:\n\
# This constraint does NOT enforce minimum or maximum distances between the sensor\n\
# and the target, nor does it enforce the target to be in the field of view of\n\
# the sensor. A PositionConstraint can (and probably should) be used for such purposes.\n\
\n\
# The radius of the disc that should be maintained visible \n\
float64 target_radius\n\
\n\
# The pose of the disc; as the robot moves, the pose of the disc may change as well\n\
# This can be in the frame of a particular robot link, for example\n\
geometry_msgs/PoseStamped target_pose\n\
\n\
# From the sensor origin towards the target, the disc forms a visibility cone\n\
# This cone is approximated using many sides. For example, when using 4 sides, \n\
# that in fact makes the visibility region be a pyramid.\n\
# This value should always be 3 or more.\n\
int32 cone_sides\n\
\n\
# The pose in which visibility is to be maintained.\n\
# The frame id should represent the robot link to which the sensor is attached.\n\
# It is assumed the sensor can look directly at the target, in any direction.\n\
# This assumption is usually not true, but additional PositionConstraints\n\
# can resolve this issue.\n\
geometry_msgs/PoseStamped sensor_pose\n\
\n\
# Even though the disc is maintained visible, the visibility cone can be very small\n\
# because of the orientation of the disc with respect to the sensor. It is possible\n\
# for example to view the disk almost from a side, in which case the visibility cone \n\
# can end up having close to 0 volume. The view angle is defined to be the angle between\n\
# the normal to the visibility disc and the direction vector from the sensor origin.\n\
# The value below represents the minimum desired view angle. For a perfect view,\n\
# this value will be 0 (the two vectors are exact opposites). For a completely obstructed view\n\
# this value will be Pi/2 (the vectors are perpendicular). This value defined below \n\
# is the maximum view angle to be maintained. This should be a value in the open interval\n\
# (0, Pi/2). If 0 is set, the view angle is NOT enforced.\n\
float64 max_view_angle\n\
\n\
# This angle is used similarly to max_view_angle but limits the maximum angle\n\
# between the sensor origin direction vector and the axis that connects the\n\
# sensor origin to the target frame origin. The value is again in the range (0, Pi/2)\n\
# and is NOT enforced if set to 0.\n\
float64 max_range_angle\n\
\n\
# The axis that is assumed to indicate the direction of view for the sensor\n\
# X = 2, Y = 1, Z = 0\n\
uint8 SENSOR_Z=0\n\
uint8 SENSOR_Y=1\n\
uint8 SENSOR_X=2\n\
uint8 sensor_view_direction\n\
\n\
# A weighting factor for this constraint (denotes relative importance to other constraints. Closer to zero means less important)\n\
float64 weight\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
";
  }

  static const char* value(const ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.start_state);
      stream.next(m.group);
      stream.next(m.state_space_parameterization);
      stream.next(m.samples);
      stream.next(m.edges_per_sample);
      stream.next(m.constraint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ConstructConstraintApproximationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::ConstructConstraintApproximationRequest_<ContainerAllocator>& v)
  {
    s << indent << "start_state: ";
    s << std::endl;
    Printer< ::moveit_msgs::RobotState_<ContainerAllocator> >::stream(s, indent + "  ", v.start_state);
    s << indent << "group: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.group);
    s << indent << "state_space_parameterization: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.state_space_parameterization);
    s << indent << "samples: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.samples);
    s << indent << "edges_per_sample: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.edges_per_sample);
    s << indent << "constraint: ";
    s << std::endl;
    Printer< ::moveit_msgs::Constraints_<ContainerAllocator> >::stream(s, indent + "  ", v.constraint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_CONSTRUCTCONSTRAINTAPPROXIMATIONREQUEST_H
