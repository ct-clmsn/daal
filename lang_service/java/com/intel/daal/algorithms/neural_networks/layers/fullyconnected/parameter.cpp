/* file: parameter.cpp */
/*******************************************************************************
* Copyright 2014-2016 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#include <jni.h>
#include "neural_networks/layers/fullyconnected/JParameter.h"

#include "daal.h"

#include "common_helpers.h"

USING_COMMON_NAMESPACES()
using namespace daal::algorithms::neural_networks::layers;

/*
 * Class:     com_intel_daal_algorithms_neural_networks_layers_fullyconnected_Parameter
 * Method:    cInit
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_intel_daal_algorithms_neural_1networks_layers_fullyconnected_Parameter_cInit
  (JNIEnv *env, jobject thisObj, jlong nOutputs, jlong nDim)
{
    return (jlong)(new fullyconnected::Parameter((size_t)nOutputs, (size_t)nDim));
}

/*
 * Class:     com_intel_daal_algorithms_neural_networks_layers_fullyconnected_Parameter
 * Method:    cGetNOutputs
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_daal_algorithms_neural_1networks_layers_fullyconnected_Parameter_cGetNOutputs
  (JNIEnv *env, jobject thisObj, jlong cParameter)
{
    return (jlong)((((fullyconnected::Parameter *)cParameter))->nOutputs);
}

/*
 * Class:     com_intel_daal_algorithms_neural_networks_layers_fullyconnected_Parameter
 * Method:    cSetNOutputs
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_intel_daal_algorithms_neural_1networks_layers_fullyconnected_Parameter_cSetNOutputs
  (JNIEnv *env, jobject thisObj, jlong cParameter, jlong nOutputs)
{
    (((fullyconnected::Parameter *)cParameter))->nOutputs = (size_t)nOutputs;
}

/*
 * Class:     com_intel_daal_algorithms_neural_networks_layers_fullyconnected_Parameter
 * Method:    cGetDim
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_daal_algorithms_neural_1networks_layers_fullyconnected_Parameter_cGetDim
  (JNIEnv *env, jobject thisObj, jlong cParameter)
{
    return (jlong)((((fullyconnected::Parameter *)cParameter))->dim);
}

/*
 * Class:     com_intel_daal_algorithms_neural_networks_layers_fullyconnected_Parameter
 * Method:    cSetDim
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_intel_daal_algorithms_neural_1networks_layers_fullyconnected_Parameter_cSetDim
  (JNIEnv *env, jobject thisObj, jlong cParameter, jlong dim)
{
    (((fullyconnected::Parameter *)cParameter))->dim = (size_t)dim;
}