/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IFGlobals : NSObject
+(id)hardwareModel;
+(char)runningFromInstallMedia;
+(id)installFrameworkVersionString;
+(id)raidOperationQueue;
+(id)stringForNVRAMVariable:(id)arg1 ;
+(char)debugReadOnlyRoot;
+(char)shouldDisableLowPriorityIO;
+(char)showVerboseLog;
+(char)dontWriteFiles;
+(id)OSInstallImageLocation;
+(void)resetIFGlobalsCache;
+(char)hasAppleIPAddress;
+(char)shouldExecuteScripts;
+(char)isCPUSWBuildTrain;
+(char)runningInRosetta;
+(char)runningOnPhysicalIntel;
+(char)shouldShowPerfStats;
+(id)activeLanguage;
+(char)autoPilot;
+(id)autoPilotTarget;
+(double)installFrameworkVersion;
+(void)logSystemInfo;
+(void)logMemStats;
+(char)lowMemorySituation;
+(char)debugChoiceAttrEngine;
+(void)setSpecialFlags:(id)arg1 ;
+(char)isDittoEnabled;
+(char)isPFScriptModuleEnabled;
+(char)isPatchDiagnosticEnabled;
+(char)enableP2PDownloads;
@end
