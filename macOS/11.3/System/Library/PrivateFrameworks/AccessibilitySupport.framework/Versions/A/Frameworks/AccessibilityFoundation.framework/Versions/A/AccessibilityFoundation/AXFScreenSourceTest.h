/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AccessibilitySupport.framework/Versions/A/Frameworks/AccessibilityFoundation.framework/Versions/A/AccessibilityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityFoundation/AccessibilityFoundation-Structs.h>
#import <libobjc.A.dylib/AXFScreenSource.h>

@protocol AXFScreenSourceDelegate;
@class NSArray, AXFScreen, NSString;

@interface AXFScreenSourceTest : NSObject <AXFScreenSource> {

	id<AXFScreenSourceDelegate> _delegate;
	NSArray* _screens;
	AXFScreen* _mainScreen;
	CGRect _totalScreenBounds;

}

@property (assign,nonatomic) CGRect totalScreenBounds;                                 //@synthesize totalScreenBounds=_totalScreenBounds - In the implementation block
@property (nonatomic,retain) NSArray * screens;                                        //@synthesize screens=_screens - In the implementation block
@property (nonatomic,retain) AXFScreen * mainScreen;                                   //@synthesize mainScreen=_mainScreen - In the implementation block
@property (assign,nonatomic,__weak) id<AXFScreenSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTotalScreenBounds:(CGRect)arg1 ;
-(id)init;
-(id<AXFScreenSourceDelegate>)delegate;
-(void)setDelegate:(id<AXFScreenSourceDelegate>)arg1 ;
-(NSArray *)screens;
-(AXFScreen *)mainScreen;
-(CGRect)totalScreenBounds;
-(void)setScreens:(NSArray *)arg1 ;
-(void)setMainScreen:(AXFScreen *)arg1 ;
@end

