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
// Description:
//   A data platform for customers to create, manage, share and query data.
// Classes:
//   JobConfigurationQuery
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/job_configuration_query.h"

#include <string>

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/clustering.h"
#include "google/bigquery_api/dataset_reference.h"
#include "google/bigquery_api/encryption_configuration.h"
#include "google/bigquery_api/external_data_configuration.h"
#include "google/bigquery_api/query_parameter.h"
#include "google/bigquery_api/range_partitioning.h"
#include "google/bigquery_api/table_reference.h"
#include "google/bigquery_api/time_partitioning.h"
#include "google/bigquery_api/user_defined_function_resource.h"


#include "absl/strings/str_cat.h"


namespace google_bigquery_api {
using namespace googleapis;


// Object factory method (static).
JobConfigurationQuery* JobConfigurationQuery::New() {
  return new client::JsonCppCapsule<JobConfigurationQuery>;
}

// Standard immutable constructor.
JobConfigurationQuery::JobConfigurationQuery(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
JobConfigurationQuery::JobConfigurationQuery(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
JobConfigurationQuery::~JobConfigurationQuery() {
}

// Properties.

const Clustering JobConfigurationQuery::get_clustering() const {
   const Json::Value& storage = Storage("clustering");
   return client::JsonValueToCppValueHelper<Clustering >(storage);
}

Clustering JobConfigurationQuery::mutable_clustering() {
  Json::Value* storage = MutableStorage("clustering");
  return client::JsonValueToMutableCppValueHelper<Clustering >(storage);
}

const DatasetReference JobConfigurationQuery::get_default_dataset() const {
   const Json::Value& storage = Storage("defaultDataset");
   return client::JsonValueToCppValueHelper<DatasetReference >(storage);
}

DatasetReference JobConfigurationQuery::mutable_defaultDataset() {
  Json::Value* storage = MutableStorage("defaultDataset");
  return client::JsonValueToMutableCppValueHelper<DatasetReference >(storage);
}

const EncryptionConfiguration JobConfigurationQuery::get_destination_encryption_configuration() const {
   const Json::Value& storage = Storage("destinationEncryptionConfiguration");
   return client::JsonValueToCppValueHelper<EncryptionConfiguration >(storage);
}

EncryptionConfiguration JobConfigurationQuery::mutable_destinationEncryptionConfiguration() {
  Json::Value* storage = MutableStorage("destinationEncryptionConfiguration");
  return client::JsonValueToMutableCppValueHelper<EncryptionConfiguration >(storage);
}

const TableReference JobConfigurationQuery::get_destination_table() const {
   const Json::Value& storage = Storage("destinationTable");
   return client::JsonValueToCppValueHelper<TableReference >(storage);
}

TableReference JobConfigurationQuery::mutable_destinationTable() {
  Json::Value* storage = MutableStorage("destinationTable");
  return client::JsonValueToMutableCppValueHelper<TableReference >(storage);
}

const client::JsonCppArray<QueryParameter > JobConfigurationQuery::get_query_parameters() const {
   const Json::Value& storage = Storage("queryParameters");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<QueryParameter > >(storage);
}

client::JsonCppArray<QueryParameter > JobConfigurationQuery::mutable_queryParameters() {
  Json::Value* storage = MutableStorage("queryParameters");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<QueryParameter > >(storage);
}

const RangePartitioning JobConfigurationQuery::get_range_partitioning() const {
   const Json::Value& storage = Storage("rangePartitioning");
   return client::JsonValueToCppValueHelper<RangePartitioning >(storage);
}

RangePartitioning JobConfigurationQuery::mutable_rangePartitioning() {
  Json::Value* storage = MutableStorage("rangePartitioning");
  return client::JsonValueToMutableCppValueHelper<RangePartitioning >(storage);
}

const client::JsonCppAssociativeArray<ExternalDataConfiguration > JobConfigurationQuery::get_table_definitions() const {
   const Json::Value& storage = Storage("tableDefinitions");
   return client::JsonValueToCppValueHelper<client::JsonCppAssociativeArray<ExternalDataConfiguration > >(storage);
}

client::JsonCppAssociativeArray<ExternalDataConfiguration > JobConfigurationQuery::mutable_tableDefinitions() {
  Json::Value* storage = MutableStorage("tableDefinitions");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppAssociativeArray<ExternalDataConfiguration > >(storage);
}

const TimePartitioning JobConfigurationQuery::get_time_partitioning() const {
   const Json::Value& storage = Storage("timePartitioning");
   return client::JsonValueToCppValueHelper<TimePartitioning >(storage);
}

TimePartitioning JobConfigurationQuery::mutable_timePartitioning() {
  Json::Value* storage = MutableStorage("timePartitioning");
  return client::JsonValueToMutableCppValueHelper<TimePartitioning >(storage);
}

const client::JsonCppArray<UserDefinedFunctionResource > JobConfigurationQuery::get_user_defined_function_resources() const {
   const Json::Value& storage = Storage("userDefinedFunctionResources");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<UserDefinedFunctionResource > >(storage);
}

client::JsonCppArray<UserDefinedFunctionResource > JobConfigurationQuery::mutable_userDefinedFunctionResources() {
  Json::Value* storage = MutableStorage("userDefinedFunctionResources");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<UserDefinedFunctionResource > >(storage);
}
}  // namespace google_bigquery_api
