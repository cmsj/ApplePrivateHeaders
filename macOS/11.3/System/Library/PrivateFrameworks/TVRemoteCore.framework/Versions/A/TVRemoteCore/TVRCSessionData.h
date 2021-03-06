/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:54 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/Versions/A/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface TVRCSessionData : NSObject {

	char _usedRTI;
	char _usedSiri;
	char _requiredPairing;
	char _directionalControlsEnabled;
	NSDate* _sessionStartTime;
	NSString* _launchContextDesc;

}

@property (nonatomic,retain) NSDate * sessionStartTime;                    //@synthesize sessionStartTime=_sessionStartTime - In the implementation block
@property (assign,nonatomic) char usedRTI;                                 //@synthesize usedRTI=_usedRTI - In the implementation block
@property (assign,nonatomic) char usedSiri;                                //@synthesize usedSiri=_usedSiri - In the implementation block
@property (assign,nonatomic) char requiredPairing;                         //@synthesize requiredPairing=_requiredPairing - In the implementation block
@property (assign,nonatomic) char directionalControlsEnabled;              //@synthesize directionalControlsEnabled=_directionalControlsEnabled - In the implementation block
@property (nonatomic,copy) NSString * launchContextDesc;                   //@synthesize launchContextDesc=_launchContextDesc - In the implementation block
-(NSDate *)sessionStartTime;
-(void)setSessionStartTime:(NSDate *)arg1 ;
-(char)usedRTI;
-(void)setUsedRTI:(char)arg1 ;
-(char)usedSiri;
-(void)setUsedSiri:(char)arg1 ;
-(char)requiredPairing;
-(void)setRequiredPairing:(char)arg1 ;
-(char)directionalControlsEnabled;
-(void)setDirectionalControlsEnabled:(char)arg1 ;
-(NSString *)launchContextDesc;
-(void)setLaunchContextDesc:(NSString *)arg1 ;
@end

