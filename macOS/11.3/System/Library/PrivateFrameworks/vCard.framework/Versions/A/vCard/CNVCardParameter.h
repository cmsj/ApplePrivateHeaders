/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardParameter : NSObject {

	NSString* _name;
	NSString* _value;

}

@property (readonly) NSString * name;               //@synthesize name=_name - In the implementation block
@property (readonly) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)parameterWithName:(id)arg1 value:(id)arg2 ;
-(NSString *)name;
-(NSString *)value;
-(id)initWithName:(id)arg1 value:(id)arg2 ;
@end
