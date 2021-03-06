/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsSeason : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * currentSeasonYear; 
@property (nonatomic,copy) NSString * relativeSeasonYear; 
@property (nonatomic,copy) NSNumber * seasonYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)season;
+(id)seasonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)currentSeasonYear;
-(void)setCurrentSeasonYear:(NSNumber *)arg1 ;
-(NSString *)relativeSeasonYear;
-(void)setRelativeSeasonYear:(NSString *)arg1 ;
-(NSNumber *)seasonYear;
-(void)setSeasonYear:(NSNumber *)arg1 ;
@end

