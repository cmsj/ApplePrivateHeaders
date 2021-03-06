/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/Versions/A/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface SiriCoreErrorInfo : NSObject {

	char _isPeerConnectionError;
	char _isPeerNotNearbyError;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) char isPeerConnectionError;              //@synthesize isPeerConnectionError=_isPeerConnectionError - In the implementation block
@property (assign,nonatomic) char isPeerNotNearbyError;               //@synthesize isPeerNotNearbyError=_isPeerNotNearbyError - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(char)isPeerConnectionError;
-(void)setIsPeerConnectionError:(char)arg1 ;
-(char)isPeerNotNearbyError;
-(void)setIsPeerNotNearbyError:(char)arg1 ;
@end

