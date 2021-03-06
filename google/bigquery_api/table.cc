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
//   Table
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/table.h"

#include <string>

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"

#include "google/bigquery_api/clustering.h"
#include "google/bigquery_api/encryption_configuration.h"
#include "google/bigquery_api/external_data_configuration.h"
#include "google/bigquery_api/materialized_view_definition.h"
#include "google/bigquery_api/model_definition.h"
#include "google/bigquery_api/range_partitioning.h"
#include "google/bigquery_api/streamingbuffer.h"
#include "google/bigquery_api/table_reference.h"
#include "google/bigquery_api/table_schema.h"
#include "google/bigquery_api/time_partitioning.h"
#include "google/bigquery_api/view_definition.h"


#include "absl/strings/str_cat.h"


namespace google_bigquery_api {
using namespace googleapis;


// Object factory method (static).
Table* Table::New() {
  return new client::JsonCppCapsule<Table>;
}

// Standard immutable constructor.
Table::Table(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Table::Table(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Table::~Table() {
}

// Properties.

const Clustering Table::get_clustering() const {
   const Json::Value& storage = Storage("clustering");
   return client::JsonValueToCppValueHelper<Clustering >(storage);
}

Clustering Table::mutable_clustering() {
  Json::Value* storage = MutableStorage("clustering");
  return client::JsonValueToMutableCppValueHelper<Clustering >(storage);
}

const EncryptionConfiguration Table::get_encryption_configuration() const {
   const Json::Value& storage = Storage("encryptionConfiguration");
   return client::JsonValueToCppValueHelper<EncryptionConfiguration >(storage);
}

EncryptionConfiguration Table::mutable_encryptionConfiguration() {
  Json::Value* storage = MutableStorage("encryptionConfiguration");
  return client::JsonValueToMutableCppValueHelper<EncryptionConfiguration >(storage);
}

const ExternalDataConfiguration Table::get_external_data_configuration() const {
   const Json::Value& storage = Storage("externalDataConfiguration");
   return client::JsonValueToCppValueHelper<ExternalDataConfiguration >(storage);
}

ExternalDataConfiguration Table::mutable_externalDataConfiguration() {
  Json::Value* storage = MutableStorage("externalDataConfiguration");
  return client::JsonValueToMutableCppValueHelper<ExternalDataConfiguration >(storage);
}

const MaterializedViewDefinition Table::get_materialized_view() const {
   const Json::Value& storage = Storage("materializedView");
   return client::JsonValueToCppValueHelper<MaterializedViewDefinition >(storage);
}

MaterializedViewDefinition Table::mutable_materializedView() {
  Json::Value* storage = MutableStorage("materializedView");
  return client::JsonValueToMutableCppValueHelper<MaterializedViewDefinition >(storage);
}

const ModelDefinition Table::get_model() const {
   const Json::Value& storage = Storage("model");
   return client::JsonValueToCppValueHelper<ModelDefinition >(storage);
}

ModelDefinition Table::mutable_model() {
  Json::Value* storage = MutableStorage("model");
  return client::JsonValueToMutableCppValueHelper<ModelDefinition >(storage);
}

const RangePartitioning Table::get_range_partitioning() const {
   const Json::Value& storage = Storage("rangePartitioning");
   return client::JsonValueToCppValueHelper<RangePartitioning >(storage);
}

RangePartitioning Table::mutable_rangePartitioning() {
  Json::Value* storage = MutableStorage("rangePartitioning");
  return client::JsonValueToMutableCppValueHelper<RangePartitioning >(storage);
}

const TableSchema Table::get_schema() const {
   const Json::Value& storage = Storage("schema");
   return client::JsonValueToCppValueHelper<TableSchema >(storage);
}

TableSchema Table::mutable_schema() {
  Json::Value* storage = MutableStorage("schema");
  return client::JsonValueToMutableCppValueHelper<TableSchema >(storage);
}

const Streamingbuffer Table::get_streaming_buffer() const {
   const Json::Value& storage = Storage("streamingBuffer");
   return client::JsonValueToCppValueHelper<Streamingbuffer >(storage);
}

Streamingbuffer Table::mutable_streamingBuffer() {
  Json::Value* storage = MutableStorage("streamingBuffer");
  return client::JsonValueToMutableCppValueHelper<Streamingbuffer >(storage);
}

const TableReference Table::get_table_reference() const {
   const Json::Value& storage = Storage("tableReference");
   return client::JsonValueToCppValueHelper<TableReference >(storage);
}

TableReference Table::mutable_tableReference() {
  Json::Value* storage = MutableStorage("tableReference");
  return client::JsonValueToMutableCppValueHelper<TableReference >(storage);
}

const TimePartitioning Table::get_time_partitioning() const {
   const Json::Value& storage = Storage("timePartitioning");
   return client::JsonValueToCppValueHelper<TimePartitioning >(storage);
}

TimePartitioning Table::mutable_timePartitioning() {
  Json::Value* storage = MutableStorage("timePartitioning");
  return client::JsonValueToMutableCppValueHelper<TimePartitioning >(storage);
}

const ViewDefinition Table::get_view() const {
   const Json::Value& storage = Storage("view");
   return client::JsonValueToCppValueHelper<ViewDefinition >(storage);
}

ViewDefinition Table::mutable_view() {
  Json::Value* storage = MutableStorage("view");
  return client::JsonValueToMutableCppValueHelper<ViewDefinition >(storage);
}
}  // namespace google_bigquery_api
