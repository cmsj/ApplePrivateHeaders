/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSString, NSDictionary, NSDate;

@interface WBSAddressBookMatch : WBSFormAutoFillItem {

	id _value;
	NSString* _property;
	NSString* _key;
	NSString* _identifier;
	NSString* _label;
	NSDictionary* _controlIDToAutoFillValueMap;
	NSString* _uniqueID;

}

@property (nonatomic,copy) NSString * stringValue; 
@property (nonatomic,copy) NSDate * dateValue; 
@property (nonatomic,copy) NSString * property;                                           //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSString * key;                                            //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSDictionary * controlIDToAutoFillValueMap;                    //@synthesize controlIDToAutoFillValueMap=_controlIDToAutoFillValueMap - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * uniqueID;                                       //@synthesize uniqueID=_uniqueID - In the implementation block
+(id)addressBookMatchWithDictionaryRepresentation:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)stringValue;
-(NSString *)identifier;
-(NSString *)label;
-(NSString *)uniqueID;
-(NSDate *)dateValue;
-(NSString *)key;
-(NSDictionary *)dictionaryRepresentation;
-(void)setStringValue:(NSString *)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
-(NSString *)property;
-(id)completion;
-(void)setProperty:(NSString *)arg1 ;
-(void)_setValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 ;
-(id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 label:(id)arg5 uniqueID:(id)arg6 ;
-(id)initWithValue:(id)arg1 property:(id)arg2 key:(id)arg3 identifier:(id)arg4 ;
-(NSDictionary *)controlIDToAutoFillValueMap;
-(void)setControlIDToAutoFillValueMap:(NSDictionary *)arg1 ;
@end

