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
// Description:
//   A data platform for customers to create, manage, share and query data.
// Classes:
//   Dataset
// Documentation:
//   https://cloud.google.com/bigquery/

#include "google/bigquery_api/dataset.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/bigquery_api/dataset_reference.h"
#include "google/bigquery_api/table_reference.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_bigquery_api {
using namespace googleapis;



// Object factory method (static).
Dataset::DatasetAccess* Dataset::DatasetAccess::New() {
  return new client::JsonCppCapsule<DatasetAccess>;
}

// Standard immutable constructor.
Dataset::DatasetAccess::DatasetAccess(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Dataset::DatasetAccess::DatasetAccess(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Dataset::DatasetAccess::~DatasetAccess() {
}
// Object factory method (static).
Dataset* Dataset::New() {
  return new client::JsonCppCapsule<Dataset>;
}

// Standard immutable constructor.
Dataset::Dataset(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Dataset::Dataset(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Dataset::~Dataset() {
}
}  // namespace google_bigquery_api
