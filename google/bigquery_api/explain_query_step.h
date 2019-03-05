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
#ifndef  GOOGLE_BIGQUERY_API_EXPLAIN_QUERY_STEP_H_
#define  GOOGLE_BIGQUERY_API_EXPLAIN_QUERY_STEP_H_

#include <string>
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
class ExplainQueryStep : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ExplainQueryStep* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ExplainQueryStep(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ExplainQueryStep(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ExplainQueryStep();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::ExplainQueryStep</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_bigquery_api::ExplainQueryStep");
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Machine-readable operation type.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>substeps</code>' attribute was set.
   *
   * @return true if the '<code>substeps</code>' attribute was set.
   */
  bool has_substeps() const {
    return Storage().isMember("substeps");
  }

  /**
   * Clears the '<code>substeps</code>' attribute.
   */
  void clear_substeps() {
    MutableStorage()->removeMember("substeps");
  }


  /**
   * Get a reference to the value of the '<code>substeps</code>' attribute.
   */
  const client::JsonCppArray<string > get_substeps() const {
     const Json::Value& storage = Storage("substeps");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>substeps</code>'
   * property.
   *
   * Human-readable stage descriptions.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_substeps() {
    Json::Value* storage = MutableStorage("substeps");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const ExplainQueryStep&);
};  // ExplainQueryStep
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_EXPLAIN_QUERY_STEP_H_
