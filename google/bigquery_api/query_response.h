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
#ifndef  GOOGLE_BIGQUERY_API_QUERY_RESPONSE_H_
#define  GOOGLE_BIGQUERY_API_QUERY_RESPONSE_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/error_proto.h"
#include "google/bigquery_api/job_reference.h"
#include "google/bigquery_api/table_row.h"
#include "google/bigquery_api/table_schema.h"

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
class QueryResponse : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static QueryResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit QueryResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit QueryResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~QueryResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_bigquery_api::QueryResponse</code>
   */
  const char* GetTypeName() const {
    return "google_bigquery_api::QueryResponse";
  }

  /**
   * Determine if the '<code>cacheHit</code>' attribute was set.
   *
   * @return true if the '<code>cacheHit</code>' attribute was set.
   */
  bool has_cache_hit() const {
    return Storage().isMember("cacheHit");
  }

  /**
   * Clears the '<code>cacheHit</code>' attribute.
   */
  void clear_cache_hit() {
    MutableStorage()->removeMember("cacheHit");
  }


  /**
   * Get the value of the '<code>cacheHit</code>' attribute.
   */
  bool get_cache_hit() const {
    const Json::Value& storage = Storage("cacheHit");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>cacheHit</code>' attribute.
   *
   * Whether the query result was fetched from the query cache.
   *
   * @param[in] value The new value.
   */
  void set_cache_hit(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("cacheHit"));
  }

  /**
   * Determine if the '<code>errors</code>' attribute was set.
   *
   * @return true if the '<code>errors</code>' attribute was set.
   */
  bool has_errors() const {
    return Storage().isMember("errors");
  }

  /**
   * Clears the '<code>errors</code>' attribute.
   */
  void clear_errors() {
    MutableStorage()->removeMember("errors");
  }


  /**
   * Get a reference to the value of the '<code>errors</code>' attribute.
   */
  const client::JsonCppArray<ErrorProto > get_errors() const;

  /**
   * Gets a reference to a mutable value of the '<code>errors</code>' property.
   *
   * [Output-only] The first errors or warnings encountered during the running
   * of the job. The final message includes the number of errors that caused the
   * process to stop. Errors here do not necessarily mean that the job has
   * completed or was unsuccessful.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<ErrorProto > mutable_errors();

  /**
   * Determine if the '<code>jobComplete</code>' attribute was set.
   *
   * @return true if the '<code>jobComplete</code>' attribute was set.
   */
  bool has_job_complete() const {
    return Storage().isMember("jobComplete");
  }

  /**
   * Clears the '<code>jobComplete</code>' attribute.
   */
  void clear_job_complete() {
    MutableStorage()->removeMember("jobComplete");
  }


  /**
   * Get the value of the '<code>jobComplete</code>' attribute.
   */
  bool get_job_complete() const {
    const Json::Value& storage = Storage("jobComplete");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>jobComplete</code>' attribute.
   *
   * Whether the query has completed or not. If rows or totalRows are present,
   * this will always be true. If this is false, totalRows will not be
   * available.
   *
   * @param[in] value The new value.
   */
  void set_job_complete(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("jobComplete"));
  }

  /**
   * Determine if the '<code>jobReference</code>' attribute was set.
   *
   * @return true if the '<code>jobReference</code>' attribute was set.
   */
  bool has_job_reference() const {
    return Storage().isMember("jobReference");
  }

  /**
   * Clears the '<code>jobReference</code>' attribute.
   */
  void clear_job_reference() {
    MutableStorage()->removeMember("jobReference");
  }


  /**
   * Get a reference to the value of the '<code>jobReference</code>' attribute.
   */
  const JobReference get_job_reference() const;

  /**
   * Gets a reference to a mutable value of the '<code>jobReference</code>'
   * property.
   *
   * Reference to the Job that was created to run the query. This field will be
   * present even if the original request timed out, in which case
   * GetQueryResults can be used to read the results once the query has
   * completed. Since this API only returns the first page of results,
   * subsequent pages can be fetched via the same mechanism (GetQueryResults).
   *
   * @return The result can be modified to change the attribute value.
   */
  JobReference mutable_jobReference();

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
  const std::string get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * The resource type.
   *
   * @param[in] value The new value.
   */
  void set_kind(const std::string& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>numDmlAffectedRows</code>' attribute was set.
   *
   * @return true if the '<code>numDmlAffectedRows</code>' attribute was set.
   */
  bool has_num_dml_affected_rows() const {
    return Storage().isMember("numDmlAffectedRows");
  }

  /**
   * Clears the '<code>numDmlAffectedRows</code>' attribute.
   */
  void clear_num_dml_affected_rows() {
    MutableStorage()->removeMember("numDmlAffectedRows");
  }


  /**
   * Get the value of the '<code>numDmlAffectedRows</code>' attribute.
   */
  int64 get_num_dml_affected_rows() const {
    const Json::Value& storage = Storage("numDmlAffectedRows");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>numDmlAffectedRows</code>' attribute.
   *
   * [Output-only] The number of rows affected by a DML statement. Present only
   * for DML statements INSERT, UPDATE or DELETE.
   *
   * @param[in] value The new value.
   */
  void set_num_dml_affected_rows(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("numDmlAffectedRows"));
  }

  /**
   * Determine if the '<code>pageToken</code>' attribute was set.
   *
   * @return true if the '<code>pageToken</code>' attribute was set.
   */
  bool has_page_token() const {
    return Storage().isMember("pageToken");
  }

  /**
   * Clears the '<code>pageToken</code>' attribute.
   */
  void clear_page_token() {
    MutableStorage()->removeMember("pageToken");
  }


  /**
   * Get the value of the '<code>pageToken</code>' attribute.
   */
  const std::string get_page_token() const {
    const Json::Value& v = Storage("pageToken");
    if (v == Json::Value::null) return std::string("");
    return std::string(v.asCString());
  }

  /**
   * Change the '<code>pageToken</code>' attribute.
   *
   * A token used for paging results.
   *
   * @param[in] value The new value.
   */
  void set_page_token(const std::string& value) {
    *MutableStorage("pageToken") = value.data();
  }

  /**
   * Determine if the '<code>rows</code>' attribute was set.
   *
   * @return true if the '<code>rows</code>' attribute was set.
   */
  bool has_rows() const {
    return Storage().isMember("rows");
  }

  /**
   * Clears the '<code>rows</code>' attribute.
   */
  void clear_rows() {
    MutableStorage()->removeMember("rows");
  }


  /**
   * Get a reference to the value of the '<code>rows</code>' attribute.
   */
  const client::JsonCppArray<TableRow > get_rows() const;

  /**
   * Gets a reference to a mutable value of the '<code>rows</code>' property.
   *
   * An object with as many results as can be contained within the maximum
   * permitted reply size. To get any additional rows, you can call
   * GetQueryResults and specify the jobReference returned above.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<TableRow > mutable_rows();

  /**
   * Determine if the '<code>schema</code>' attribute was set.
   *
   * @return true if the '<code>schema</code>' attribute was set.
   */
  bool has_schema() const {
    return Storage().isMember("schema");
  }

  /**
   * Clears the '<code>schema</code>' attribute.
   */
  void clear_schema() {
    MutableStorage()->removeMember("schema");
  }


  /**
   * Get a reference to the value of the '<code>schema</code>' attribute.
   */
  const TableSchema get_schema() const;

  /**
   * Gets a reference to a mutable value of the '<code>schema</code>' property.
   *
   * The schema of the results. Present only when the query completes
   * successfully.
   *
   * @return The result can be modified to change the attribute value.
   */
  TableSchema mutable_schema();

  /**
   * Determine if the '<code>totalBytesProcessed</code>' attribute was set.
   *
   * @return true if the '<code>totalBytesProcessed</code>' attribute was set.
   */
  bool has_total_bytes_processed() const {
    return Storage().isMember("totalBytesProcessed");
  }

  /**
   * Clears the '<code>totalBytesProcessed</code>' attribute.
   */
  void clear_total_bytes_processed() {
    MutableStorage()->removeMember("totalBytesProcessed");
  }


  /**
   * Get the value of the '<code>totalBytesProcessed</code>' attribute.
   */
  int64 get_total_bytes_processed() const {
    const Json::Value& storage = Storage("totalBytesProcessed");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>totalBytesProcessed</code>' attribute.
   *
   * The total number of bytes processed for this query. If this query was a dry
   * run, this is the number of bytes that would be processed if the query were
   * run.
   *
   * @param[in] value The new value.
   */
  void set_total_bytes_processed(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("totalBytesProcessed"));
  }

  /**
   * Determine if the '<code>totalRows</code>' attribute was set.
   *
   * @return true if the '<code>totalRows</code>' attribute was set.
   */
  bool has_total_rows() const {
    return Storage().isMember("totalRows");
  }

  /**
   * Clears the '<code>totalRows</code>' attribute.
   */
  void clear_total_rows() {
    MutableStorage()->removeMember("totalRows");
  }


  /**
   * Get the value of the '<code>totalRows</code>' attribute.
   */
  uint64 get_total_rows() const {
    const Json::Value& storage = Storage("totalRows");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>totalRows</code>' attribute.
   *
   * The total number of rows in the complete query result set, which can be
   * more than the number of rows in this single page of results.
   *
   * @param[in] value The new value.
   */
  void set_total_rows(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("totalRows"));
  }

 private:
  void operator=(const QueryResponse&);
};  // QueryResponse
}  // namespace google_bigquery_api
#endif  // GOOGLE_BIGQUERY_API_QUERY_RESPONSE_H_
