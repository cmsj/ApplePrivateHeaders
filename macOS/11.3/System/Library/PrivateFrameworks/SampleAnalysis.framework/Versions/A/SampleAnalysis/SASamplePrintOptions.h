/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/Versions/A/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface SASamplePrintOptions : NSObject <NSCopying> {

	char _omitTasksBelowPercentOfTotalSamples;
	char _omitStacksBelowPercentOfTaskSamples;
	char _omitFramesBelowPercentOfStackSamples;
	char _microstackshotsFormat;
	char _printHeavyStacks;
	char _printJson;
	char _printSpinSignatureStack;
	char _printTargetThreadOnly;
	char _printTargetHIDEvent;
	char _forceOneBasedTimeIndexes;
	char _orderTasksBySampleCount;
	char _patchTruncatedStacks;
	char _tabDelineateBinaryImageSections;
	char _binaryImagesBeforeStacks;
	char _showThreadStateAsLeafFrame;
	char _aggregateStacksByThread;
	char _aggregateStacksByProcess;
	char _aggregateProcessesByExecutable;
	char _aggregateFramesByOffsetIntoBinary;
	char _systemstatsFormat;
	char _includeUserIdleAndBatteryStateInStacks;
	char _omitStacksOnBattery;
	char _omitStacksOnAC;
	char _omitStacksWithUserIdle;
	char _omitStacksWithUserActive;
	char _displayHeader;
	char _displayBody;
	char _displayFooter;
	char _displayFrameAddresses;
	char _displayDetailedCpuTime;
	char _displayDetailedWallTime;
	char _displayOffsetsFromUnnamedSymbols;
	char _displaySymbolInformation;
	char _displayFullSourcePaths;
	char _displayBinaryImageAddresses;
	char _displayBinaryImagesLackingNameOrPath;
	char _displayRunningThreads;
	char _displayRunnableThreads;
	char _displayBlockedThreads;
	char _displayCPUNumForRunningThreads;
	char _displayCPUNumForNonRunningThreads;
	char _displayThreadRunningState;
	char _displayIdleWorkQueueThreads;
	char _displayAllBinaries;
	char _displayBlockedReasons;
	char _displayBlockedReasonsLackingProcessOwners;
	char _displayAddressesInBlockedReasons;
	char _displayEmptyBootArgs;
	char _displayAllHIDEvents;
	char _displayTasksWithZeroCount;
	char _displayStacksWithZeroCount;
	char _displayAllTaskSizeChanges;
	int _omitStacksBelowBasePriority;
	int _omitStacksAboveBasePriority;
	NSSet* _pidsToPrint;
	NSSet* _uniquePidsToPrint;
	NSSet* _processNamesToPrint;
	NSSet* _processUUIDsToPrint;
	NSSet* _tidsToPrint;
	long long _omitTasksBelowSampleCount;
	long long _omitStacksBelowSampleCount;
	long long _omitFramesBelowSampleCount;
	long long _omitFramesAfterLineCount;

}

@property (copy) NSSet * pidsToPrint;                                           //@synthesize pidsToPrint=_pidsToPrint - In the implementation block
@property (copy) NSSet * uniquePidsToPrint;                                     //@synthesize uniquePidsToPrint=_uniquePidsToPrint - In the implementation block
@property (copy) NSSet * processNamesToPrint;                                   //@synthesize processNamesToPrint=_processNamesToPrint - In the implementation block
@property (copy) NSSet * processUUIDsToPrint;                                   //@synthesize processUUIDsToPrint=_processUUIDsToPrint - In the implementation block
@property (copy) NSSet * tidsToPrint;                                           //@synthesize tidsToPrint=_tidsToPrint - In the implementation block
@property (assign) char printHeavyStacks;                                       //@synthesize printHeavyStacks=_printHeavyStacks - In the implementation block
@property (assign) char printJson;                                              //@synthesize printJson=_printJson - In the implementation block
@property (assign) char printSpinSignatureStack;                                //@synthesize printSpinSignatureStack=_printSpinSignatureStack - In the implementation block
@property (assign) char printTargetThreadOnly;                                  //@synthesize printTargetThreadOnly=_printTargetThreadOnly - In the implementation block
@property (assign) char printTargetHIDEvent;                                    //@synthesize printTargetHIDEvent=_printTargetHIDEvent - In the implementation block
@property (assign) char forceOneBasedTimeIndexes;                               //@synthesize forceOneBasedTimeIndexes=_forceOneBasedTimeIndexes - In the implementation block
@property (assign) char orderTasksBySampleCount;                                //@synthesize orderTasksBySampleCount=_orderTasksBySampleCount - In the implementation block
@property (assign) char patchTruncatedStacks;                                   //@synthesize patchTruncatedStacks=_patchTruncatedStacks - In the implementation block
@property (assign) char tabDelineateBinaryImageSections;                        //@synthesize tabDelineateBinaryImageSections=_tabDelineateBinaryImageSections - In the implementation block
@property (assign) char binaryImagesBeforeStacks;                               //@synthesize binaryImagesBeforeStacks=_binaryImagesBeforeStacks - In the implementation block
@property (assign) char showThreadStateAsLeafFrame;                             //@synthesize showThreadStateAsLeafFrame=_showThreadStateAsLeafFrame - In the implementation block
@property (assign) char aggregateStacksByThread;                                //@synthesize aggregateStacksByThread=_aggregateStacksByThread - In the implementation block
@property (assign) char aggregateStacksByProcess;                               //@synthesize aggregateStacksByProcess=_aggregateStacksByProcess - In the implementation block
@property (assign) char aggregateProcessesByExecutable;                         //@synthesize aggregateProcessesByExecutable=_aggregateProcessesByExecutable - In the implementation block
@property (assign) char aggregateFramesByOffsetIntoBinary;                      //@synthesize aggregateFramesByOffsetIntoBinary=_aggregateFramesByOffsetIntoBinary - In the implementation block
@property (assign) char microstackshotsFormat; 
@property (assign) char systemstatsFormat;                                      //@synthesize systemstatsFormat=_systemstatsFormat - In the implementation block
@property (assign) char includeUserIdleAndBatteryStateInStacks;                 //@synthesize includeUserIdleAndBatteryStateInStacks=_includeUserIdleAndBatteryStateInStacks - In the implementation block
@property (assign) char omitStacksOnBattery;                                    //@synthesize omitStacksOnBattery=_omitStacksOnBattery - In the implementation block
@property (assign) char omitStacksOnAC;                                         //@synthesize omitStacksOnAC=_omitStacksOnAC - In the implementation block
@property (assign) char omitStacksWithUserIdle;                                 //@synthesize omitStacksWithUserIdle=_omitStacksWithUserIdle - In the implementation block
@property (assign) char omitStacksWithUserActive;                               //@synthesize omitStacksWithUserActive=_omitStacksWithUserActive - In the implementation block
@property (assign) int omitStacksBelowBasePriority;                             //@synthesize omitStacksBelowBasePriority=_omitStacksBelowBasePriority - In the implementation block
@property (assign) int omitStacksAboveBasePriority;                             //@synthesize omitStacksAboveBasePriority=_omitStacksAboveBasePriority - In the implementation block
@property (assign) char displayHeader;                                          //@synthesize displayHeader=_displayHeader - In the implementation block
@property (assign) char displayBody;                                            //@synthesize displayBody=_displayBody - In the implementation block
@property (assign) char displayFooter;                                          //@synthesize displayFooter=_displayFooter - In the implementation block
@property (assign) char omitTasksBelowPercentOfTotalSamples;                    //@synthesize omitTasksBelowPercentOfTotalSamples=_omitTasksBelowPercentOfTotalSamples - In the implementation block
@property (assign) char omitStacksBelowPercentOfTaskSamples;                    //@synthesize omitStacksBelowPercentOfTaskSamples=_omitStacksBelowPercentOfTaskSamples - In the implementation block
@property (assign) char omitFramesBelowPercentOfStackSamples;                   //@synthesize omitFramesBelowPercentOfStackSamples=_omitFramesBelowPercentOfStackSamples - In the implementation block
@property (assign) long long omitTasksBelowSampleCount;                         //@synthesize omitTasksBelowSampleCount=_omitTasksBelowSampleCount - In the implementation block
@property (assign) long long omitStacksBelowSampleCount;                        //@synthesize omitStacksBelowSampleCount=_omitStacksBelowSampleCount - In the implementation block
@property (assign) long long omitFramesBelowSampleCount;                        //@synthesize omitFramesBelowSampleCount=_omitFramesBelowSampleCount - In the implementation block
@property (assign) long long omitFramesAfterLineCount;                          //@synthesize omitFramesAfterLineCount=_omitFramesAfterLineCount - In the implementation block
@property (assign) char displayFrameAddresses;                                  //@synthesize displayFrameAddresses=_displayFrameAddresses - In the implementation block
@property (assign) char displayDetailedCpuTime;                                 //@synthesize displayDetailedCpuTime=_displayDetailedCpuTime - In the implementation block
@property (assign) char displayDetailedWallTime;                                //@synthesize displayDetailedWallTime=_displayDetailedWallTime - In the implementation block
@property (assign) char displayOffsetsFromUnnamedSymbols;                       //@synthesize displayOffsetsFromUnnamedSymbols=_displayOffsetsFromUnnamedSymbols - In the implementation block
@property (assign) char displaySymbolInformation;                               //@synthesize displaySymbolInformation=_displaySymbolInformation - In the implementation block
@property (assign) char displayFullSourcePaths;                                 //@synthesize displayFullSourcePaths=_displayFullSourcePaths - In the implementation block
@property (assign) char displayBinaryImageAddresses;                            //@synthesize displayBinaryImageAddresses=_displayBinaryImageAddresses - In the implementation block
@property (assign) char displayBinaryImagesLackingNameOrPath;                   //@synthesize displayBinaryImagesLackingNameOrPath=_displayBinaryImagesLackingNameOrPath - In the implementation block
@property (assign) char displayRunningThreads;                                  //@synthesize displayRunningThreads=_displayRunningThreads - In the implementation block
@property (assign) char displayRunnableThreads;                                 //@synthesize displayRunnableThreads=_displayRunnableThreads - In the implementation block
@property (assign) char displayBlockedThreads;                                  //@synthesize displayBlockedThreads=_displayBlockedThreads - In the implementation block
@property (assign) char displayCPUNumForRunningThreads;                         //@synthesize displayCPUNumForRunningThreads=_displayCPUNumForRunningThreads - In the implementation block
@property (assign) char displayCPUNumForNonRunningThreads;                      //@synthesize displayCPUNumForNonRunningThreads=_displayCPUNumForNonRunningThreads - In the implementation block
@property (assign) char displayThreadRunningState;                              //@synthesize displayThreadRunningState=_displayThreadRunningState - In the implementation block
@property (assign) char displayIdleWorkQueueThreads;                            //@synthesize displayIdleWorkQueueThreads=_displayIdleWorkQueueThreads - In the implementation block
@property (assign) char displayAllBinaries;                                     //@synthesize displayAllBinaries=_displayAllBinaries - In the implementation block
@property (assign) char displayBlockedReasons;                                  //@synthesize displayBlockedReasons=_displayBlockedReasons - In the implementation block
@property (assign) char displayBlockedReasonsLackingProcessOwners;              //@synthesize displayBlockedReasonsLackingProcessOwners=_displayBlockedReasonsLackingProcessOwners - In the implementation block
@property (assign) char displayAddressesInBlockedReasons;                       //@synthesize displayAddressesInBlockedReasons=_displayAddressesInBlockedReasons - In the implementation block
@property (assign) char displayEmptyBootArgs;                                   //@synthesize displayEmptyBootArgs=_displayEmptyBootArgs - In the implementation block
@property (assign) char displayAllHIDEvents;                                    //@synthesize displayAllHIDEvents=_displayAllHIDEvents - In the implementation block
@property (assign) char displayTasksWithZeroCount;                              //@synthesize displayTasksWithZeroCount=_displayTasksWithZeroCount - In the implementation block
@property (assign) char displayStacksWithZeroCount;                             //@synthesize displayStacksWithZeroCount=_displayStacksWithZeroCount - In the implementation block
@property (assign) char displayAllTaskSizeChanges;                              //@synthesize displayAllTaskSizeChanges=_displayAllTaskSizeChanges - In the implementation block
@property (assign) char verbose; 
@property (assign) char displayProcessFirstLastTimes; 
@property (assign) char displaySub1MsCpuTime; 
-(char)displayCPUNumForRunningThreads;
-(char)displayCPUNumForNonRunningThreads;
-(char)aggregateProcessesByExecutable;
-(char)displayRunningThreads;
-(char)printTargetThreadOnly;
-(char)printJson;
-(char)displayHeader;
-(char)displayBody;
-(char)displayFooter;
-(char)displayDetailedWallTime;
-(char)printTargetHIDEvent;
-(char)displayEmptyBootArgs;
-(char)printSpinSignatureStack;
-(char)displayAllBinaries;
-(NSSet *)pidsToPrint;
-(NSSet *)uniquePidsToPrint;
-(NSSet *)processNamesToPrint;
-(NSSet *)processUUIDsToPrint;
-(NSSet *)tidsToPrint;
-(char)orderTasksBySampleCount;
-(char)displayTasksWithZeroCount;
-(long long)omitTasksBelowSampleCount;
-(char)omitTasksBelowPercentOfTotalSamples;
-(char)binaryImagesBeforeStacks;
-(char)microstackshotsFormat;
-(char)displayAllTaskSizeChanges;
-(char)displayDetailedCpuTime;
-(char)displayIdleWorkQueueThreads;
-(char)tabDelineateBinaryImageSections;
-(char)displayBinaryImagesLackingNameOrPath;
-(char)displayBinaryImageAddresses;
-(char)includeUserIdleAndBatteryStateInStacks;
-(char)displayStacksWithZeroCount;
-(long long)omitStacksBelowSampleCount;
-(char)omitStacksBelowPercentOfTaskSamples;
-(char)aggregateFramesByOffsetIntoBinary;
-(char)displayBlockedReasons;
-(char)displayBlockedReasonsLackingProcessOwners;
-(char)displayAddressesInBlockedReasons;
-(char)patchTruncatedStacks;
-(char)displayThreadRunningState;
-(char)showThreadStateAsLeafFrame;
-(char)omitFramesBelowPercentOfStackSamples;
-(long long)omitFramesAfterLineCount;
-(char)displayFrameAddresses;
-(char)displaySymbolInformation;
-(char)displayOffsetsFromUnnamedSymbols;
-(char)displayFullSourcePaths;
-(char)displayAllHIDEvents;
-(void)setDisplayDetailedCpuTime:(char)arg1 ;
-(void)setDisplayHeader:(char)arg1 ;
-(void)setDisplayBody:(char)arg1 ;
-(void)setTabDelineateBinaryImageSections:(char)arg1 ;
-(void)setBinaryImagesBeforeStacks:(char)arg1 ;
-(void)setOrderTasksBySampleCount:(char)arg1 ;
-(void)setShowThreadStateAsLeafFrame:(char)arg1 ;
-(void)setOmitStacksBelowPercentOfTaskSamples:(char)arg1 ;
-(void)setOmitFramesBelowPercentOfStackSamples:(char)arg1 ;
-(void)setOmitTasksBelowSampleCount:(long long)arg1 ;
-(void)setOmitStacksBelowSampleCount:(long long)arg1 ;
-(void)setDisplayFrameAddresses:(char)arg1 ;
-(void)setDisplayDetailedWallTime:(char)arg1 ;
-(void)setDisplayOffsetsFromUnnamedSymbols:(char)arg1 ;
-(void)setDisplayFullSourcePaths:(char)arg1 ;
-(void)setDisplaySymbolInformation:(char)arg1 ;
-(void)setDisplayBinaryImageAddresses:(char)arg1 ;
-(void)setDisplayBinaryImagesLackingNameOrPath:(char)arg1 ;
-(void)setDisplayCPUNumForRunningThreads:(char)arg1 ;
-(void)setDisplayCPUNumForNonRunningThreads:(char)arg1 ;
-(void)setDisplayThreadRunningState:(char)arg1 ;
-(void)setDisplayAllBinaries:(char)arg1 ;
-(void)setDisplayBlockedReasons:(char)arg1 ;
-(void)setDisplayBlockedReasonsLackingProcessOwners:(char)arg1 ;
-(void)setDisplayAddressesInBlockedReasons:(char)arg1 ;
-(void)setDisplayEmptyBootArgs:(char)arg1 ;
-(void)setDisplayAllHIDEvents:(char)arg1 ;
-(void)setDisplayTasksWithZeroCount:(char)arg1 ;
-(void)setDisplayStacksWithZeroCount:(char)arg1 ;
-(void)setDisplayAllTaskSizeChanges:(char)arg1 ;
-(void)setAggregateProcessesByExecutable:(char)arg1 ;
-(void)setAggregateFramesByOffsetIntoBinary:(char)arg1 ;
-(void)setTidsToPrint:(NSSet *)arg1 ;
-(void)setPidsToPrint:(NSSet *)arg1 ;
-(void)setUniquePidsToPrint:(NSSet *)arg1 ;
-(void)setProcessUUIDsToPrint:(NSSet *)arg1 ;
-(char)displaySub1MsCpuTime;
-(void)setDisplaySub1MsCpuTime:(char)arg1 ;
-(char)displayProcessFirstLastTimes;
-(void)setDisplayProcessFirstLastTimes:(char)arg1 ;
-(void)setProcessNamesToPrint:(NSSet *)arg1 ;
-(void)setOmitFramesAfterLineCount:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)init;
-(char)verbose;
-(void)setVerbose:(char)arg1 ;
-(char)printHeavyStacks;
-(void)setPrintTargetThreadOnly:(char)arg1 ;
-(void)setDisplayFooter:(char)arg1 ;
-(void)setPrintTargetHIDEvent:(char)arg1 ;
-(void)setForceOneBasedTimeIndexes:(char)arg1 ;
-(char)forceOneBasedTimeIndexes;
-(void)setDisplayIdleWorkQueueThreads:(char)arg1 ;
-(void)setPrintHeavyStacks:(char)arg1 ;
-(void)setOmitStacksBelowBasePriority:(int)arg1 ;
-(void)setOmitFramesBelowSampleCount:(long long)arg1 ;
-(void)setPrintJson:(char)arg1 ;
-(void)setPatchTruncatedStacks:(char)arg1 ;
-(int)omitStacksAboveBasePriority;
-(int)omitStacksBelowBasePriority;
-(void)setOmitStacksAboveBasePriority:(int)arg1 ;
-(void)setOmitStacksOnAC:(char)arg1 ;
-(void)setOmitStacksOnBattery:(char)arg1 ;
-(void)setOmitStacksWithUserActive:(char)arg1 ;
-(void)setOmitStacksWithUserIdle:(char)arg1 ;
-(void)setSystemstatsFormat:(char)arg1 ;
-(void)setIncludeUserIdleAndBatteryStateInStacks:(char)arg1 ;
-(char)displayRunnableThreads;
-(void)setDisplayBlockedThreads:(char)arg1 ;
-(char)displayBlockedThreads;
-(void)setDisplayRunnableThreads:(char)arg1 ;
-(void)setDisplayRunningThreads:(char)arg1 ;
-(char)aggregateStacksByProcess;
-(void)setAggregateStacksByThread:(char)arg1 ;
-(char)aggregateStacksByThread;
-(void)setAggregateStacksByProcess:(char)arg1 ;
-(char)systemstatsFormat;
-(char)omitStacksOnBattery;
-(char)omitStacksOnAC;
-(char)omitStacksWithUserActive;
-(char)omitStacksWithUserIdle;
-(long long)omitFramesBelowSampleCount;
-(void)setPrintSpinSignatureStack:(char)arg1 ;
-(void)setMicrostackshotsFormat:(char)arg1 ;
-(void)setOmitTasksBelowPercentOfTotalSamples:(char)arg1 ;
@end
