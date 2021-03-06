/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSObject;


@protocol NSSidebarTrackingAdapter <NSObject>
@property (readonly) double sidebarDividerPosition; 
@property (readonly) long long depthOfView; 
@property (readonly) NSObject * representedView; 
@property (readonly) double minimumDividerPosition; 
@property (readonly) double maximumDividerPosition; 
@property (readonly) char isCollapsed; 
@property (getter=isOverlaidAsSidebar,readonly) char overlaidAsSidebar; 
@property (readonly) double dividerWidth; 
@property (assign) NSEdgeInsets sidebarAdditionalSafeAreaInsets; 
@optional
-(void)setSidebarDividerPosition:(double)arg1;
-(double)dividerWidth;
-(char)isCollapsed;
-(void)toggleSidebar:(id)arg1;
-(void)setSidebarAdditionalSafeAreaInsets:(NSEdgeInsets)arg1;
-(char)isOverlaidAsSidebar;
-(double)minimumDividerPosition;
-(double)maximumDividerPosition;
-(NSEdgeInsets)sidebarAdditionalSafeAreaInsets;

@required
-(double)sidebarDividerPosition;
-(long long)depthOfView;
-(NSObject *)representedView;

@end

