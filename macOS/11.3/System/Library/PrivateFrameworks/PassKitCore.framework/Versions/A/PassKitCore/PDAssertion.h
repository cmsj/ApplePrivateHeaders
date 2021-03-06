/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:41 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PDAssertion : NSObject {

	char _invalidateWhenBackgrounded;
	unsigned long long _type;
	NSString* _identifier;
	NSString* _reason;

}

@property (nonatomic,readonly) unsigned long long type;                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * reason;                          //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) char invalidateWhenBackgrounded;              //@synthesize invalidateWhenBackgrounded=_invalidateWhenBackgrounded - In the implementation block
-(id)description;
-(NSString *)reason;
-(unsigned long long)type;
-(NSString *)identifier;
-(void)setInvalidateWhenBackgrounded:(char)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 reason:(id)arg3 ;
-(char)invalidateWhenBackgrounded;
@end

