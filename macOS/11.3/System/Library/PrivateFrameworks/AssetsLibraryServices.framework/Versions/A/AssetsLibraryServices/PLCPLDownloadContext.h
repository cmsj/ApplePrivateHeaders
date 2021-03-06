/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSError;

@interface PLCPLDownloadContext : NSObject {

	char _completed;
	NSString* _taskIdentifier;
	NSString* _resourceTypeDescription;
	double _progress;
	NSError* _error;
	double _updateLastQueuedTime;

}

@property (retain) NSString * taskIdentifier;                       //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (retain) NSString * resourceTypeDescription;              //@synthesize resourceTypeDescription=_resourceTypeDescription - In the implementation block
@property (assign) double progress;                                 //@synthesize progress=_progress - In the implementation block
@property (assign) char completed;                                  //@synthesize completed=_completed - In the implementation block
@property (retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (assign) double updateLastQueuedTime;                     //@synthesize updateLastQueuedTime=_updateLastQueuedTime - In the implementation block
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(NSString *)taskIdentifier;
-(char)completed;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(void)setCompleted:(char)arg1 ;
-(void)updateFromDownloadStatusUserInfo:(id)arg1 ;
-(NSString *)resourceTypeDescription;
-(void)setResourceTypeDescription:(NSString *)arg1 ;
-(double)updateLastQueuedTime;
-(void)setUpdateLastQueuedTime:(double)arg1 ;
@end

