//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
//
//*********************************************************

#include "pch.h"
#include "MainPage.xaml.h"
#include "Constants.h"

using namespace SDKSample;
using namespace SDKSample::BarcodeScannerCPP;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>  
{
    // The format here is the following:
    //     { "Description for the sample", "Fully qualified name for the class that implements the scenario" }
    { "BarcodeScanner DataReceived event", "SDKSample.BarcodeScannerCPP.Scenario1" }, 
    { "BarcodeScanner Release/Retain functionality", "SDKSample.BarcodeScannerCPP.Scenario2" }
}; 