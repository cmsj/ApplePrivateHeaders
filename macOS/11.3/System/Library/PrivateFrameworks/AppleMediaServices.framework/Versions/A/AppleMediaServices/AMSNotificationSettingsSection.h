/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface AMSNotificationSettingsSection : NSObject {

	NSString* _footer;
	NSString* _identifier;
	NSArray* _items;
	NSString* _title;

}

@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * footer;                                    //@synthesize footer=_footer - In the implementation block
@property (readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (readonly) NSString * title;                                     //@synthesize title=_title - In the implementation block
-(id)description;
-(NSString *)identifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)footer;
-(id)initWithTitle:(id)arg1 footer:(id)arg2 items:(id)arg3 ;
@end

