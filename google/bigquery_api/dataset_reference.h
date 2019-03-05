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
#ifndef  GOOGLE_BIGQUERY_API_DATASET_REFERENCE_H_
#define  GOOGLE_BIGQUERY_API_DATASET_REFERENCE_H_

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
class DatasetReference : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static DatasetReference* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit DatasetReference(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit DatasetReference(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~DatasetReference();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::DatasetReference</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_bigquery_api::DatasetReference");
  }

  /**
   * Determine if the '<code>datasetId</code>' attribute was set.
   *
   * @return true if the '<code>datasetId</code>' attribute was set.
   */
  bool has_dataset_id() const {
    return Storage().isMember("datasetId");
  }

  /**
   * Clears the '<code>datasetId</code>' attribute.
   */
  void clear_dataset_id() {
    MutableStorage()->removeMember("datasetId");
  }


  /**
   * Get the value of the '<code>datasetId</code>' attribute.
   */
  const StringPiece get_dataset_id() const {
    const Json::Value& v = Storage("datasetId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>datasetId</code>' attribute.
   *
   * [Required] A unique ID for this dataset, without the project name. The ID
   * must contain only letters (a-z, A-Z), numbers (0-9), or underscores (_).
   * The maximum length is 1,024 characters.
   *
   * @param[in] value The new value.
   */
  void set_dataset_id(const StringPiece& value) {
    *MutableStorage("datasetId") = value.data();
  }

  /**
   * Determine if the '<code>projectId</code>' attribute was set.
   *
   * @return true if the '<code>projectId</code>' attribute was set.
   */
  bool has_project_id() const {
    return Storage().isMember("projectId");
  }

  /**
   * Clears the '<code>projectId</code>' attribute.
   */
  void clear_project_id() {
    MutableStorage()->removeMember("projectId");
  }


  /**
   * Get the value of the '<code>projectId</code>' attribute.
   */
  const StringPiece get_project_id() const {
    const Json::Value& v = Storage("projectId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>projectId</code>' attribute.
   *
   * [Optional] The ID of the project containing this dataset.
   *
   * @param[in] value The new value.
   */
  void set_project_id(const StringPiece& value) {
    *MutableStorage("projectId") = value.data();
  }

 private:
  void operator=(const DatasetReference&);
};  // DatasetReference
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_DATASET_REFERENCE_H_
