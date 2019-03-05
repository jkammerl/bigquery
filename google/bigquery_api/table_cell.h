// Copyright 2010 Google Inc.
//
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

// This code was generated by google-apis-code-generator 1.5.1
//   Build date: 2018-10-08 17:45:39 UTC
//   on: 2019-03-01, 03:01:16 UTC
//   C++ generator version: 0.1.4

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   BigQuery API (bigquery/v2)
// Generated from:
//   Version: v2
//   Revision: 427
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_BIGQUERY_API_TABLE_CELL_H_
#define  GOOGLE_BIGQUERY_API_TABLE_CELL_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

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
class TableCell : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static TableCell* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TableCell(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TableCell(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~TableCell();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::TableCell</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_bigquery_api::TableCell");
  }

  /**
   * Determine if the '<code>v</code>' attribute was set.
   *
   * @return true if the '<code>v</code>' attribute was set.
   */
  bool has_v() const {
    return Storage().isMember("v");
  }

  /**
   * Clears the '<code>v</code>' attribute.
   */
  void clear_v() {
    MutableStorage()->removeMember("v");
  }


  /**
   * Get a reference to the value of the '<code>v</code>' attribute.
   */
  const client::JsonCppData get_v() const {
     const Json::Value& storage = Storage("v");
    return client::JsonValueToCppValueHelper<client::JsonCppData >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>v</code>' property.
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppData mutable_v() {
    Json::Value* storage = MutableStorage("v");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppData >(storage);
  }

 private:
  void operator=(const TableCell&);
};  // TableCell
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_TABLE_CELL_H_
