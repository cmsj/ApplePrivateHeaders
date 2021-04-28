/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSView;


@protocol TabPreviewDataSource <NSObject>
@property (assign,nonatomic,__weak) id<TabPreviewDataSourceDelegate> tabPreviewDataSourceDelegate; 
@property (nonatomic,readonly) id<TabBarViewItem> tabBarViewItem; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * secondaryTitle; 
@property (nonatomic,readonly) CGSize tabContentSize; 
@property (nonatomic,readonly) NSView * tabThumbnailView; 
@required
-(NSString *)title;
-(id<TabBarViewItem>)tabBarViewItem;
-(NSString *)secondaryTitle;
-(void)updateThumbnailView;
-(id<TabPreviewDataSourceDelegate>)tabPreviewDataSourceDelegate;
-(void)setTabPreviewDataSourceDelegate:(id)arg1;
-(CGSize)tabContentSize;
-(NSView *)tabThumbnailView;

@end
