/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SystemMigration.framework/Versions/A/SystemMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SMCopyEngine, NSURL, NSProgress, NSString, NSDate;

@interface SMCopyEngineCopier : NSObject {

	char _repeatCopyIfCompleted;
	char _tracksCompletedPaths;
	char _isParentExpectingProgress;
	unsigned long long _copySize;
	SMCopyEngine* _engine;
	NSURL* _relativeSourcePath;
	NSURL* _relativeDestinationPath;
	NSProgress* _parentProgress;
	double _parentProgressPendingUnits;
	NSProgress* _progress;
	id _associatedObject;
	NSString* _progressString;
	NSString* _errorString;
	double _transferRate;
	unsigned long long _lastSizeUpdate;
	NSDate* _startTime;

}

@property (assign) unsigned long long lastSizeUpdate;                        //@synthesize lastSizeUpdate=_lastSizeUpdate - In the implementation block
@property (assign) char isParentExpectingProgress;                           //@synthesize isParentExpectingProgress=_isParentExpectingProgress - In the implementation block
@property (assign) double transferRate;                                      //@synthesize transferRate=_transferRate - In the implementation block
@property (retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (__weak) SMCopyEngine * engine;                                    //@synthesize engine=_engine - In the implementation block
@property (readonly) NSURL * sourcePath; 
@property (retain) NSURL * relativeSourcePath;                               //@synthesize relativeSourcePath=_relativeSourcePath - In the implementation block
@property (readonly) NSURL * destinationPath; 
@property (retain) NSURL * relativeDestinationPath;                          //@synthesize relativeDestinationPath=_relativeDestinationPath - In the implementation block
@property (readonly) NSURL * sandboxedDestinationPath; 
@property (readonly) NSURL * destinationPathConsideringSandbox; 
@property (assign) unsigned long long copySize;                              //@synthesize copySize=_copySize - In the implementation block
@property (retain) NSProgress * parentProgress;                              //@synthesize parentProgress=_parentProgress - In the implementation block
@property (assign) double parentProgressPendingUnits;                        //@synthesize parentProgressPendingUnits=_parentProgressPendingUnits - In the implementation block
@property (retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) char repeatCopyIfCompleted;                               //@synthesize repeatCopyIfCompleted=_repeatCopyIfCompleted - In the implementation block
@property (retain) id associatedObject;                                      //@synthesize associatedObject=_associatedObject - In the implementation block
@property (retain) NSString * progressString;                                //@synthesize progressString=_progressString - In the implementation block
@property (retain) NSString * errorString;                                   //@synthesize errorString=_errorString - In the implementation block
@property (assign) char tracksCompletedPaths;                                //@synthesize tracksCompletedPaths=_tracksCompletedPaths - In the implementation block
+(id)keyPathsForValuesAffectingSourceURL;
+(id)keyPathsForValuesAffectingDestinationPath;
+(id)keyPathsForValuesAffectingSandboxedDestinationPath;
-(char)run;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(char)shouldContinue;
-(NSProgress *)progress;
-(NSString *)errorString;
-(void)setProgress:(NSProgress *)arg1 ;
-(SMCopyEngine *)engine;
-(void)setEngine:(SMCopyEngine *)arg1 ;
-(NSURL *)sourcePath;
-(void)setErrorString:(NSString *)arg1 ;
-(void)setTransferRate:(double)arg1 ;
-(NSURL *)destinationPath;
-(NSString *)progressString;
-(void)setProgressString:(NSString *)arg1 ;
-(char)finally;
-(NSProgress *)parentProgress;
-(void)setParentProgress:(NSProgress *)arg1 ;
-(void)setParentProgressPendingUnits:(double)arg1 ;
-(void)setRelativeSourcePath:(NSURL *)arg1 ;
-(void)setRelativeDestinationPath:(NSURL *)arg1 ;
-(id)initWithCopyEngine:(id)arg1 ;
-(void)setAssociatedObject:(id)arg1 ;
-(void)setCopySize:(unsigned long long)arg1 ;
-(unsigned long long)copySize;
-(id)associatedObject;
-(NSURL *)destinationPathConsideringSandbox;
-(char)processReturningError:(id*)arg1 ;
-(NSURL *)relativeSourcePath;
-(NSURL *)relativeDestinationPath;
-(void)sizeCompletedUpdate:(unsigned long long)arg1 ;
-(void)finishedFileAtPath:(id)arg1 ;
-(char)preProcessReturningError:(id*)arg1 ;
-(double)parentProgressPendingUnits;
-(void)setTracksCompletedPaths:(char)arg1 ;
-(void)setLastSizeUpdate:(unsigned long long)arg1 ;
-(NSURL *)sandboxedDestinationPath;
-(void)setIsParentExpectingProgress:(char)arg1 ;
-(char)isParentExpectingProgress;
-(char)tracksCompletedPaths;
-(char)postProcessReturningError:(id*)arg1 ;
-(unsigned long long)lastSizeUpdate;
-(double)transferRate;
-(void)finishedFileAtCPath:(const char*)arg1 ;
-(char)repeatCopyIfCompleted;
-(void)setRepeatCopyIfCompleted:(char)arg1 ;
@end

