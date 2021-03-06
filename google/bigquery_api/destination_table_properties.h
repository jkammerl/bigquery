// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.6.0

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google API Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Generated from:
//   Version: v2
//   Revision: 20190224
// Generated by:
//    Tool: google-apis-code-generator 1.6.0
//     C++: 0.1.5
#ifndef  GOOGLE_BIGQUERY_API_DESTINATION_TABLE_PROPERTIES_H_
#define  GOOGLE_BIGQUERY_API_DESTINATION_TABLE_PROPERTIES_H_

#include <string>

#include "googleapis/client/data/jsoncpp_data.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_bigquery_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class DestinationTableProperties : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static DestinationTableProperties* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit DestinationTableProperties(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit DestinationTableProperties(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~DestinationTableProperties();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::DestinationTableProperties</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::DestinationTableProperties";
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const std::string get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * [Optional] The description for the destination table. This will only be
   * used if the destination table is newly created. If the table already exists
   * and a value different than the current description is provided, the job
   * will fail.
   *
   * @param[in] value The new value.
   */
  void set_description(const std::string& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>friendlyName</code>' attribute was set.
   *
   * @return true if the '<code>friendlyName</code>' attribute was set.
   */
  bool has_friendly_name() const {
    return Storage().isMember("friendlyName");
  }

  /**
   * Clears the '<code>friendlyName</code>' attribute.
   */
  void clear_friendly_name() {
    MutableStorage()->removeMember("friendlyName");
  }


  /**
   * Get the value of the '<code>friendlyName</code>' attribute.
   */
  const std::string get_friendly_name() const {
    const Json::Value& v = Storage("friendlyName");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>friendlyName</code>' attribute.
   *
   * [Optional] The friendly name for the destination table. This will only be
   * used if the destination table is newly created. If the table already exists
   * and a value different than the current friendly name is provided, the job
   * will fail.
   *
   * @param[in] value The new value.
   */
  void set_friendly_name(const std::string& value) {
    *MutableStorage("friendlyName") = value.data();
  }

  /**
   * Determine if the '<code>labels</code>' attribute was set.
   *
   * @return true if the '<code>labels</code>' attribute was set.
   */
  bool has_labels() const {
    return Storage().isMember("labels");
  }

  /**
   * Clears the '<code>labels</code>' attribute.
   */
  void clear_labels() {
    MutableStorage()->removeMember("labels");
  }


  /**
   * Get a reference to the value of the '<code>labels</code>' attribute.
   */
  const client::JsonCppAssociativeArray<string > get_labels() const {
     const Json::Value& storage = Storage("labels");
    return client::JsonValueToCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>labels</code>' property.
   *
   * [Optional] The labels associated with this table. You can use these to
   * organize and group your tables. This will only be used if the destination
   * table is newly created. If the table already exists and labels are
   * different than the current labels are provided, the job will fail.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<string > mutable_labels() {
    Json::Value* storage = MutableStorage("labels");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

 private:
  void operator=(const DestinationTableProperties&);
};  // DestinationTableProperties
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_DESTINATION_TABLE_PROPERTIES_H_
