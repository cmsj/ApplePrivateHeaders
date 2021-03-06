/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSView.h>
#import <libobjc.A.dylib/CNContactIconUpdating.h>

@protocol CNContactIconUpdating;
@class NSView, NSString;

@interface CNContactIconView : NSView <CNContactIconUpdating> {

	NSView*<CNContactIconUpdating> _representativeView;
	long long _iconViewAppearance;

}

@property (nonatomic,retain) NSView*<CNContactIconUpdating> representativeView;              //@synthesize representativeView=_representativeView - In the implementation block
@property (assign,nonatomic) long long iconViewAppearance;                                   //@synthesize iconViewAppearance=_iconViewAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)representativeViewClassForViewModel:(id)arg1 ;
-(id)init;
-(void)updateLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(void)setCircular:(char)arg1 ;
-(void)viewModelDidUpdate:(id)arg1 ;
-(NSView*<CNContactIconUpdating>)representativeView;
-(void)setupRepresentativeViewForViewModel:(id)arg1 ;
-(void)setIconViewAppearance:(long long)arg1 ;
-(long long)iconViewAppearance;
-(void)setRepresentativeView:(NSView*<CNContactIconUpdating>)arg1 ;
@end

