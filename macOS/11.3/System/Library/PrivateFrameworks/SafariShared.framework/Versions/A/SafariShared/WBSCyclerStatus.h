/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSCyclerStatus : NSObject <NSSecureCoding> {

	char _connectedToTestTarget;
	char _running;
	NSString* _activeTestSuiteName;
	unsigned long long _seed;

}

@property (nonatomic,copy,readonly) NSString * activeTestSuiteName;                                    //@synthesize activeTestSuiteName=_activeTestSuiteName - In the implementation block
@property (nonatomic,readonly) unsigned long long seed;                                                //@synthesize seed=_seed - In the implementation block
@property (getter=isConnectedToTestTarget,nonatomic,readonly) char connectedToTestTarget;              //@synthesize connectedToTestTarget=_connectedToTestTarget - In the implementation block
@property (getter=isRunning,nonatomic,readonly) char running;                                          //@synthesize running=_running - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isRunning;
-(unsigned long long)seed;
-(id)initWithActiveTestSuiteName:(id)arg1 seed:(unsigned long long)arg2 isConnectedToTestTarget:(char)arg3 isRunning:(char)arg4 ;
-(NSString *)activeTestSuiteName;
-(char)isConnectedToTestTarget;
@end

