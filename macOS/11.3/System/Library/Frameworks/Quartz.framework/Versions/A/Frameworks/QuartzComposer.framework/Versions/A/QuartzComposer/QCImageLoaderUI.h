/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QCInspector.h>

@class QCImageLoaderView, NSButton;

@interface QCImageLoaderUI : QCInspector {

	QCImageLoaderView* imageView;
	NSButton* reloadButton;

}
+(id)viewNibName;
-(void)import:(id)arg1 ;
-(void)reload:(id)arg1 ;
-(void)_updatePreview;
-(void)didLoadNib;
-(void)setupViewForPatch:(id)arg1 ;
-(void)_importFile:(id)arg1 ;
-(void)export:(id)arg1 ;
@end
