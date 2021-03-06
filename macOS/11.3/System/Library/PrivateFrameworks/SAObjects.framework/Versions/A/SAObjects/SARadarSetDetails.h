/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * classification; 
@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSString * title; 
+(id)setDetails;
+(id)setDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)title;
-(NSString *)classification;
-(id)encodedClassName;
-(char)requiresResponse;
-(void)setDescription:(NSString *)arg1 ;
-(void)setClassification:(NSString *)arg1 ;
@end

