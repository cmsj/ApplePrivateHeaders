/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAProtobufMessage : SADomainObject

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSString * typeName; 
+(id)protobufMessage;
+(id)protobufMessageWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
@end

