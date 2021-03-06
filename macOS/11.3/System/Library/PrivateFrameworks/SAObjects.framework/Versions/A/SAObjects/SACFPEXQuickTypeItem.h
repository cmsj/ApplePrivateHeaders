/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFPEXItem.h>

@class NSArray, NSString, NSDate;

@interface SACFPEXQuickTypeItem : SACFPEXItem

@property (nonatomic,copy) NSArray * fields; 
@property (nonatomic,copy) NSArray * itemFlags; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * originatingBundleId; 
@property (nonatomic,copy) NSString * originatingWebsiteURL; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * value; 
+(id)quickTypeItem;
+(id)quickTypeItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)itemFlags;
-(NSString *)value;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSArray *)fields;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)encodedClassName;
-(void)setFields:(NSArray *)arg1 ;
-(void)setItemFlags:(NSArray *)arg1 ;
-(NSString *)originatingBundleId;
-(void)setOriginatingBundleId:(NSString *)arg1 ;
-(NSString *)originatingWebsiteURL;
-(void)setOriginatingWebsiteURL:(NSString *)arg1 ;
@end

