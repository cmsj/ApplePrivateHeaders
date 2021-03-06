/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long appRestriction; 
@property (nonatomic,copy) NSString * countryCode; 
@property (assign,nonatomic) long long movieRestriction; 
@property (assign,nonatomic) long long tvRestriction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mediaContentRatingRestrictions;
+(id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)countryCode;
-(id)groupIdentifier;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)encodedClassName;
-(long long)appRestriction;
-(void)setAppRestriction:(long long)arg1 ;
-(long long)movieRestriction;
-(void)setMovieRestriction:(long long)arg1 ;
-(long long)tvRestriction;
-(void)setTvRestriction:(long long)arg1 ;
@end

