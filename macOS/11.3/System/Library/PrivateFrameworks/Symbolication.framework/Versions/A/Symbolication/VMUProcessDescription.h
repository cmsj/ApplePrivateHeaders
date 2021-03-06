/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Versions/A/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSDictionary, NSMutableArray, NSArray, NSDate, NSMutableDictionary;

@interface VMUProcessDescription : NSObject {

	unsigned _task;
	int _pid;
	char _taskIsCorpse;
	NSString* _hardwareModel;
	NSString* _processName;
	char _processNameNeedsCorrection;
	NSString* _executablePath;
	CSTypeRef _symbolicator;
	char _executablePathNeedsCorrection;
	unsigned long long _executableLoadAddress;
	int _cpuType;
	unsigned _platform;
	char _is64Bit;
	timeval _proc_starttime;
	unsigned long long _physicalFootprint;
	unsigned long long _physicalFootprintPeak;
	NSDictionary* _lsApplicationInformation;
	NSMutableArray* _binaryImages;
	NSArray* _sortedBinaryImages;
	NSDictionary* _binaryImageHints;
	NSArray* _unreadableBinaryImagePaths;
	char _binaryImagePostProcessingComplete;
	NSDictionary* _buildVersionDictionary;
	NSDictionary* _osVersionDictionary;
	mapped_memory_tRef _mappedMemory;
	NSString* _parentProcessName;
	NSString* _parentExecutablePath;
	int _ppid;
	NSDate* _date;
	NSMutableDictionary* _environment;

}

@property (nonatomic,readonly) unsigned long long physicalFootprint;                  //@synthesize physicalFootprint=_physicalFootprint - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalFootprintPeak;              //@synthesize physicalFootprintPeak=_physicalFootprintPeak - In the implementation block
+(id)parseBinaryImagesDescription:(id)arg1 ;
+(CSTypeRef)symbolicatorFromBinaryImagesDescription:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)date;
-(id)bundleIdentifier;
-(id)processIdentifier;
-(id)displayName;
-(int)pid;
-(id)executablePath;
-(id)processName;
-(int)cpuType;
-(unsigned)task;
-(id)processVersion;
-(char)is64Bit;
-(id)initWithTask:(unsigned)arg1 getBinariesList:(char)arg2 ;
-(id)binaryImagesDescription;
-(unsigned long long)physicalFootprint;
-(unsigned long long)physicalFootprintPeak;
-(char)initFromCorpse;
-(void)initFromLiveProcess;
-(void)_libraryLoaded:(CSTypeRef)arg1 ;
-(void)cleansePathsIncludingBinaryImageList:(char)arg1 ;
-(id)_readDataFromMemory:(mapped_memory_tRef)arg1 atAddress:(unsigned long long)arg2 size:(unsigned long long)arg3 ;
-(id)_extractInfoPlistFromSymbolOwner:(CSTypeRef)arg1 withMemory:(mapped_memory_tRef)arg2 ;
-(id)binaryImages;
-(id)processVersionDictionary;
-(id)_sanitizeVersion:(id)arg1 ;
-(void)setCrashReporterInfo;
-(id)_bundleLock;
-(void)clearCrashReporterInfo;
-(id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2 ;
-(id)_binaryImagesDescriptionForRanges:(id)arg1 ;
-(id)_buildVersionDictionary;
-(id)_osVersionDictionary;
-(id)_buildInfoDescription;
-(id)_cpuTypeDescription;
-(id)parentProcessName;
-(id)_systemVersionDescription;
-(id)processDescriptionHeader;
-(id)dateAndVersionDescription;
-(id)analysisToolDescription;
-(id)processStatisticsDescription;
-(id)initWithPid:(int)arg1 orTask:(unsigned)arg2 ;
-(int)parentPid;
-(id)parentProcessPath;
-(char)isAppleApplication;
-(id)binaryImageDictionaryForAddress:(unsigned long long)arg1 ;
-(id)valueForEnvVar:(id)arg1 ;
-(id)binaryImagesDescriptionForBacktraces:(id)arg1 ;
@end

