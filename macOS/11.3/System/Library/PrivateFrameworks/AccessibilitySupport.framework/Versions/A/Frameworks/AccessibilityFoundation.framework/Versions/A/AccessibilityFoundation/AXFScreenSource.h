/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, AXFScreen;


@protocol AXFScreenSource <NSObject>
@property (assign,nonatomic,__weak) id<AXFScreenSourceDelegate> delegate; 
@property (nonatomic,readonly) NSArray * screens; 
@property (nonatomic,readonly) CGRect totalScreenBounds; 
@property (nonatomic,readonly) AXFScreen * mainScreen; 
@required
-(id<AXFScreenSourceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSArray *)screens;
-(AXFScreen *)mainScreen;
-(CGRect)totalScreenBounds;

@end

