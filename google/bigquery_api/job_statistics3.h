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
#ifndef  GOOGLE_BIGQUERY_API_JOB_STATISTICS3_H_
#define  GOOGLE_BIGQUERY_API_JOB_STATISTICS3_H_

#include "googleapis/base/integral_types.h"
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
class JobStatistics3 : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static JobStatistics3* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobStatistics3(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit JobStatistics3(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~JobStatistics3();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::JobStatistics3</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_bigquery_api::JobStatistics3");
  }

  /**
   * Determine if the '<code>badRecords</code>' attribute was set.
   *
   * @return true if the '<code>badRecords</code>' attribute was set.
   */
  bool has_bad_records() const {
    return Storage().isMember("badRecords");
  }

  /**
   * Clears the '<code>badRecords</code>' attribute.
   */
  void clear_bad_records() {
    MutableStorage()->removeMember("badRecords");
  }


  /**
   * Get the value of the '<code>badRecords</code>' attribute.
   */
  int64 get_bad_records() const {
    const Json::Value& storage = Storage("badRecords");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>badRecords</code>' attribute.
   *
   * [Output-only] The number of bad records encountered. Note that if the job
   * has failed because of more bad records encountered than the maximum allowed
   * in the load job configuration, then this number can be less than the total
   * number of bad records present in the input data.
   *
   * @param[in] value The new value.
   */
  void set_bad_records(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("badRecords"));
  }

  /**
   * Determine if the '<code>inputFileBytes</code>' attribute was set.
   *
   * @return true if the '<code>inputFileBytes</code>' attribute was set.
   */
  bool has_input_file_bytes() const {
    return Storage().isMember("inputFileBytes");
  }

  /**
   * Clears the '<code>inputFileBytes</code>' attribute.
   */
  void clear_input_file_bytes() {
    MutableStorage()->removeMember("inputFileBytes");
  }


  /**
   * Get the value of the '<code>inputFileBytes</code>' attribute.
   */
  int64 get_input_file_bytes() const {
    const Json::Value& storage = Storage("inputFileBytes");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>inputFileBytes</code>' attribute.
   *
   * [Output-only] Number of bytes of source data in a load job.
   *
   * @param[in] value The new value.
   */
  void set_input_file_bytes(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("inputFileBytes"));
  }

  /**
   * Determine if the '<code>inputFiles</code>' attribute was set.
   *
   * @return true if the '<code>inputFiles</code>' attribute was set.
   */
  bool has_input_files() const {
    return Storage().isMember("inputFiles");
  }

  /**
   * Clears the '<code>inputFiles</code>' attribute.
   */
  void clear_input_files() {
    MutableStorage()->removeMember("inputFiles");
  }


  /**
   * Get the value of the '<code>inputFiles</code>' attribute.
   */
  int64 get_input_files() const {
    const Json::Value& storage = Storage("inputFiles");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>inputFiles</code>' attribute.
   *
   * [Output-only] Number of source files in a load job.
   *
   * @param[in] value The new value.
   */
  void set_input_files(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("inputFiles"));
  }

  /**
   * Determine if the '<code>outputBytes</code>' attribute was set.
   *
   * @return true if the '<code>outputBytes</code>' attribute was set.
   */
  bool has_output_bytes() const {
    return Storage().isMember("outputBytes");
  }

  /**
   * Clears the '<code>outputBytes</code>' attribute.
   */
  void clear_output_bytes() {
    MutableStorage()->removeMember("outputBytes");
  }


  /**
   * Get the value of the '<code>outputBytes</code>' attribute.
   */
  int64 get_output_bytes() const {
    const Json::Value& storage = Storage("outputBytes");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>outputBytes</code>' attribute.
   *
   * [Output-only] Size of the loaded data in bytes. Note that while a load job
   * is in the running state, this value may change.
   *
   * @param[in] value The new value.
   */
  void set_output_bytes(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("outputBytes"));
  }

  /**
   * Determine if the '<code>outputRows</code>' attribute was set.
   *
   * @return true if the '<code>outputRows</code>' attribute was set.
   */
  bool has_output_rows() const {
    return Storage().isMember("outputRows");
  }

  /**
   * Clears the '<code>outputRows</code>' attribute.
   */
  void clear_output_rows() {
    MutableStorage()->removeMember("outputRows");
  }


  /**
   * Get the value of the '<code>outputRows</code>' attribute.
   */
  int64 get_output_rows() const {
    const Json::Value& storage = Storage("outputRows");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>outputRows</code>' attribute.
   *
   * [Output-only] Number of rows imported in a load job. Note that while an
   * import job is in the running state, this value may change.
   *
   * @param[in] value The new value.
   */
  void set_output_rows(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("outputRows"));
  }

 private:
  void operator=(const JobStatistics3&);
};  // JobStatistics3
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_JOB_STATISTICS3_H_
