/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/Versions/A/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>
#import <libobjc.A.dylib/FASharingTransportItemDelegate.h>

@protocol FASharingViewTransportDelegate;
@class NSArray, NSMutableArray, NSStackView, NSSharingService, NSView, NSString;

@interface FASharingViewController : NSViewController <FASharingTransportItemDelegate> {

	NSArray* _sharingServices;
	NSMutableArray* _transportItems;
	id<FASharingViewTransportDelegate> _delegate;
	NSStackView* _transportStackView;
	NSSharingService* _selectedService;
	NSView* _transportView;

}

@property (retain) NSView * transportView;                          //@synthesize transportView=_transportView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewDidLoad;
-(void)cancelPressed:(id)arg1 ;
-(void)sharingTransportItem:(id)arg1 didSelectService:(id)arg2 ;
-(void)_setIntialSelection;
-(void)_setUpStackViewWithViews:(id)arg1 ;
-(NSView *)transportView;
-(id)initWithSharingServices:(id)arg1 delegate:(id)arg2 ;
-(void)continuePressed:(id)arg1 ;
-(void)setTransportView:(NSView *)arg1 ;
@end

