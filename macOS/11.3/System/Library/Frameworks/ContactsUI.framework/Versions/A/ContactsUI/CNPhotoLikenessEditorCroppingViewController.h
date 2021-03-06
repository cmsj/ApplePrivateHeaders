/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSViewController.h>

@class CNPhotoLikenessEditorCroppingView, NSView;

@interface CNPhotoLikenessEditorCroppingViewController : NSViewController {

	CNPhotoLikenessEditorCroppingView* _croppingView;
	NSView* _hostView;
	double _zoom;
	CGPoint _center;

}

@property (nonatomic,retain) CNPhotoLikenessEditorCroppingView * croppingView;              //@synthesize croppingView=_croppingView - In the implementation block
@property (nonatomic,retain) NSView * hostView;                                             //@synthesize hostView=_hostView - In the implementation block
@property (assign,nonatomic) double zoom;                                                   //@synthesize zoom=_zoom - In the implementation block
@property (assign,nonatomic) CGPoint center;                                                //@synthesize center=_center - In the implementation block
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)reloadData;
-(void)setCornerRadius:(double)arg1 ;
-(CGPoint)center;
-(void)viewWillAppear;
-(NSView *)hostView;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setZoom:(double)arg1 ;
-(double)zoom;
-(void)setHostView:(NSView *)arg1 ;
-(void)setupConstraints;
-(void)setupCroppingView;
-(void)setupHostView;
-(CNPhotoLikenessEditorCroppingView *)croppingView;
-(void)setCroppingDataSource:(id)arg1 ;
-(void)setZoomPosition:(double)arg1 ;
-(void)setCroppingView:(CNPhotoLikenessEditorCroppingView *)arg1 ;
@end

