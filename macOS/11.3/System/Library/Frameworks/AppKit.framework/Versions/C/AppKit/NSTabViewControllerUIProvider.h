/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTabViewController;


@protocol NSTabViewControllerUIProvider <NSObject,NSCoding>
@property (assign) NSTabViewController * tabViewController; 
@optional
-(void)selectTabViewItemAtIndex:(long long)arg1;
-(void)tabViewContainerWillMoveFromWindow:(id)arg1 toWindow:(id)arg2;
-(void)setTabViewItemsFrom:(id)arg1 to:(id)arg2 newSelectedIndex:(long long)arg3;
-(void)insertTabView:(id)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
-(void)removeTabView:(id)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
-(long long)_associatedTabStyle;

@required
-(void)setTabViewController:(id)arg1;
-(void)tearDown;
-(void)setUpForTabView:(id)arg1 inContainer:(id)arg2;
-(NSTabViewController *)tabViewController;

@end
