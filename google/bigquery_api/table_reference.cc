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
//   TableReference
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/table_reference.h"

#include <string>

#include <string>
#include "googleapis/client/data/jsoncpp_data.h"


#include "absl/strings/str_cat.h"


namespace google_bigquery_api {
using namespace googleapis;


// Object factory method (static).
TableReference* TableReference::New() {
  return new client::JsonCppCapsule<TableReference>;
}

// Standard immutable constructor.
TableReference::TableReference(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
TableReference::TableReference(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
TableReference::~TableReference() {
}

// Properties.
}  // namespace google_bigquery_api
