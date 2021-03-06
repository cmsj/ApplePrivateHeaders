/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString, SALocation;

@interface SAFmfGeoFence : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * friend; 
@property (nonatomic,copy) NSString * geoFenceTrigger; 
@property (nonatomic,retain) SALocation * location; 
+(id)geoFence;
+(id)geoFenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(SALocation *)location;
-(id)groupIdentifier;
-(void)setLocation:(SALocation *)arg1 ;
-(id)encodedClassName;
-(SAPersonAttribute *)friend;
-(void)setFriend:(SAPersonAttribute *)arg1 ;
-(NSString *)geoFenceTrigger;
-(void)setGeoFenceTrigger:(NSString *)arg1 ;
@end

