/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/Versions/A/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VCPFingerprint : NSObject {

	NSString* _master;
	NSString* _adjusted;

}

@property (readonly) NSString * master;                //@synthesize master=_master - In the implementation block
@property (readonly) NSString * adjusted;              //@synthesize adjusted=_adjusted - In the implementation block
+(id)fingerprintWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(id)description;
-(id)init;
-(NSString *)master;
-(NSString *)adjusted;
-(id)initWithMaster:(id)arg1 adjusted:(id)arg2 ;
-(char)isEqualToFingerprint:(id)arg1 ;
@end

