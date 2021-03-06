/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/Versions/A/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKKeyValueTuple : TLKObject {

	NSString* _key;
	NSString* _value;

}

@property (nonatomic,retain) NSString * key;                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * value;              //@synthesize value=_value - In the implementation block
+(id)tupleWithKey:(id)arg1 value:(id)arg2 ;
+(id)tuplesForDictionary:(id)arg1 ;
+(id)tuplesForKeys:(id)arg1 values:(id)arg2 ;
-(NSString *)value;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
@end

