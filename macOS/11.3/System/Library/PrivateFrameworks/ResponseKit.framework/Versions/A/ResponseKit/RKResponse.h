/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface RKResponse : NSObject {

	NSString* _string;
	NSDictionary* _attributes;
	NSString* _category;

}

@property (retain) NSString * string;                      //@synthesize string=_string - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSString * category;                    //@synthesize category=_category - In the implementation block
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 category:(id)arg3 ;
@end

