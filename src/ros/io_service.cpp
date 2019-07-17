/*
 * Copyright 2019 Ben Greenberg
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "ur_modern_driver/ros/io_service.h"
#include <ros/ros.h>

static const std::string MIN_PAYLOAD_ARG("~min_payload");
static const std::string MAX_PAYLOAD_ARG("~max_payload");

IOService::IOService(URCommander &commander)
  : commander_(commander),
    min_payload_(0.0),
    max_payload_(1.0)
{
  ros::param::get(MIN_PAYLOAD_ARG, min_payload_);
  ros::param::get(MAX_PAYLOAD_ARG, max_payload_);
}

IOService::setPayload(ur_msgs::SetPayloadRequest& req, ur_msgs::SetPayloadResponse& resp)
{
  if((req.payload >= min_payload_) && (req.payload <= max_payload_))
  {
    ROS_INFO("Set")
//    ur_msgs::SetPayload srv;
//    srv.request.payload = args.payload;
//    if (client.call(srv))
//    {
//      ROS_INFO("Succes: %d", srv.response.success);
//    }
//    else
//    {
//      ROS_ERROR("Failed to call service set_payload");
//      return 1;
//    }
  }

}
