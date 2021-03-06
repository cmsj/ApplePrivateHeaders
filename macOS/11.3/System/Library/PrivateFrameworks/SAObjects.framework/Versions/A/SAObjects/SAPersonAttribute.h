/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,retain) SAPerson * object; 
@property (nonatomic,retain) id<SAAceComparable> typedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)st_contactAddressValue;
-(void)setObject:(SAPerson *)arg1 ;
-(NSString *)data;
-(SAPerson *)object;
-(void)setData:(NSString *)arg1 ;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)dataType;
-(id)groupIdentifier;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)encodedClassName;
-(id<SAAceComparable>)typedData;
-(void)setTypedData:(id<SAAceComparable>)arg1 ;
@end

