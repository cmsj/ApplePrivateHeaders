/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:29 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIKitSystemAppServices.framework/Versions/A/UIKitSystemAppServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface USSBackgroundLaunchRequest : NSObject <NSSecureCoding> {

	NSString* _reasonString;
	NSDictionary* _reasonInformation;

}

@property (nonatomic,retain) NSString * reasonString;                       //@synthesize reasonString=_reasonString - In the implementation block
@property (nonatomic,retain) NSDictionary * reasonInformation;              //@synthesize reasonInformation=_reasonInformation - In the implementation block
+(char)supportsSecureCoding;
+(id)requestWithReason:(id)arg1 information:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setReasonString:(NSString *)arg1 ;
-(NSString *)reasonString;
-(NSDictionary *)reasonInformation;
-(id)initWithReason:(id)arg1 information:(id)arg2 ;
-(void)setReasonInformation:(NSDictionary *)arg1 ;
@end

