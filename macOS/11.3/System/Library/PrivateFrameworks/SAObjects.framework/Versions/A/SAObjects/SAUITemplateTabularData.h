/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString, NSNumber;

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (assign,nonatomic) char allowContentScrolling; 
@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,retain) id<SAUITemplateItem> footerItem; 
@property (nonatomic,retain) id<SAUITemplateItem> headerItem; 
@property (nonatomic,copy) NSString * layoutStyle; 
@property (nonatomic,copy) NSNumber * minimumRowHeight; 
@property (nonatomic,copy) NSArray * rowStyleRules; 
@property (assign,nonatomic) char showHeaderDivider; 
+(id)tabularData;
+(id)tabularDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setLayoutStyle:(NSString *)arg1 ;
-(NSString *)layoutStyle;
-(id)encodedClassName;
-(char)allowContentScrolling;
-(void)setAllowContentScrolling:(char)arg1 ;
-(id<SAUITemplateItem>)footerItem;
-(void)setFooterItem:(id<SAUITemplateItem>)arg1 ;
-(id<SAUITemplateItem>)headerItem;
-(void)setHeaderItem:(id<SAUITemplateItem>)arg1 ;
-(NSNumber *)minimumRowHeight;
-(void)setMinimumRowHeight:(NSNumber *)arg1 ;
-(NSArray *)rowStyleRules;
-(void)setRowStyleRules:(NSArray *)arg1 ;
-(char)showHeaderDivider;
-(void)setShowHeaderDivider:(char)arg1 ;
@end

