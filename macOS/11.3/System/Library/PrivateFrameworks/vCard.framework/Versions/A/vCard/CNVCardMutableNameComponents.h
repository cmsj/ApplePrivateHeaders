/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/Versions/A/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vCard/CNVCardNameComponents.h>

@class NSString;

@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString * formattedName; 
@property (copy) NSString * firstName; 
@property (copy) NSString * lastName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * title; 
@property (copy) NSString * suffix; 
@property (copy) NSString * companyName; 
@property (assign) char isCompany; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setMiddleName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setIsCompany:(char)arg1 ;
-(void)setCompanyName:(NSString *)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(void)setFormattedName:(NSString *)arg1 ;
@end

